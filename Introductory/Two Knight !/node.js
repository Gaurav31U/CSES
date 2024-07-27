const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
rl.question('', (num) => {
    for(let i=1;i<=num;i++){
      let ans=0;
      ans=1+(i-1)*(i-2)/2;
      ans=ans*(i-1)*(i+4);
      console.log(ans);
    }
    rl.close();
});