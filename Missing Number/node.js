const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
rl.question('', (ninput) => {
    const n=parseInt(ninput.trim(),10);
    rl.question('', (array) => {
        let results = 0;
        arr  = array.trim().split(' ').map(Number);
        for(let i=1;i<=n;i++){
            results=results^i;
        }
        for(const it of arr){
            results=results^it;
        }
        console.log(results);
        rl.close();
    });
});