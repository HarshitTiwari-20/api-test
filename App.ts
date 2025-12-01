// Just for testing API connectivity


async function testApi() {
    const url = 'https://api.coindcx.com';
    console.log(`Testing API: ${url}`);

    try {
        const response = await fetch(url);
        if (!response.ok) {
            throw new Error(`HTTP error! status: ${response.status}`);
        }
        const data = await response.json();
        console.log('Response Data:', data);
    } catch (error) {
        console.error('Error fetching API:', error);
    }
}

testApi();
