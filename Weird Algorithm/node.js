const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
rl.question('', (n) => {
    let results = [n];
    while (n != 1) {
        if (n & 1) {
            n = n * 3 + 1;
        } else {
            n = n / 2;
        }
        results.push(n);
    }
    console.log(results.join(' '));
    rl.close();
});