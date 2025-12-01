#include <iostream>
#include <string>
#include <cstdlib>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];

    if (!fs::exists(filename)) {
        std::cerr << "Error: File '" << filename << "' does not exist." << std::endl;
        return 1;
    }

    // Construct the command to run the file using npx ts-node

    std::string command = "npx tsx " + filename;

    std::cout << "Executing: " << command << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    int result = std::system(command.c_str());

    std::cout << "----------------------------------------" << std::endl;
    if (result == 0) {
        std::cout << "Execution successful." << std::endl;
    } else {
        std::cerr << "Execution failed with code: " << result << std::endl;
        return result;
    }

    return 0;
}


