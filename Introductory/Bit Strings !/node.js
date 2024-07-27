const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
rl.question('', (num) => {
    let ans=1;
    let val=2;
    let md=1e9+7;
    while(num>0){
        if(num%2==1){
            ans=(ans*val)%md;
            num--;
        }else{
            val=(val*val)%md;
            num>>=1;
        }
    }
    console.log(ans);
    rl.close();
});