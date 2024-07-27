const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
rl.question('', (num) => {
    let ans=0;
    while(num>0){
        ans=ans+(num/5);
        num/=5;
    }
    console.log(ans);
    rl.close();
});