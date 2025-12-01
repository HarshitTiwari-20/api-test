# API Test Runner

A lightweight C++ CLI tool to execute TypeScript/JavaScript API tests directly from the terminal.

## Features
- **Simple Wrapper**: Wraps `npx tsx` to execute TypeScript files seamlessly.
- **Fast**: Minimal overhead C++ binary.
- **Easy to Use**: Run tests with a single command.

## Prerequisites
- **C++ Compiler**: `g++` (GCC) or similar supporting C++17.
- **Node.js**: Required for `npx` and running the JS/TS code.

## Installation

### 1. Clone the Repository
```bash
git clone https://github.com/HarshitTiwari-20/api-test.git
cd api-test
```

### 2. Build the Application
Run the `make` command to compile the C++ source:
```bash
make
```

### 3. (Optional) Install Globally
To run `api-test` from anywhere, add it to your PATH or create a symlink:
```bash
mkdir -p ~/.local/bin
ln -s $(pwd)/api-test ~/.local/bin/api-test
```
*Note: Ensure `~/.local/bin` is in your `$PATH`.*

## Usage

Create a TypeScript file (e.g., `App.ts`) with your API test logic.

Run it using the tool:
```bash
./api-test App.ts
```

Or if installed globally:
```bash
api-test App.ts
```
https://x.com/i/status/1995510162904461478
## Example `App.ts`
```typescript
async function testApi() {
    const url = 'https://jsonplaceholder.typicode.com/todos/1';
    console.log(`Testing API: ${url}`);

    try {
        const response = await fetch(url);
        if (!response.ok) throw new Error(`Status: ${response.status}`);
        const data = await response.json();
        console.log('Data:', data);
    } catch (error) {
        console.error('Error:', error);
    }
}
testApi();
```

## License
License: Harshit Tiwari

