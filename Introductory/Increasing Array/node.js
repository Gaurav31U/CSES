const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
rl.question('', (num) => {
    let n=parseInt(num.trim(),10);
    let ans=0;
    rl.question('', (s) => {
        let arr = s.trim().split(' ').map(Number);
        let last=-1;
        for(let i=0;i<n;i++){
            if(last==-1)last=arr[i];
            if(last>arr[i]){
                ans+=(last-arr[i]);
            }else{
                last=arr[i];
            }
        }
        console.log(ans);
        rl.close();
    });
});