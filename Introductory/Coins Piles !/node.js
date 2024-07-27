const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
rl.question('', (num) => {
    for(let i=0;i<num;i++){
        rl.question('', (array) => {
            arr=array.trim().split(' ').map(Number)
            let a=arr[0];
            let b=arr[1];
            if((a+b)%3!=0 || (a>2*b) || (b>2/a)){
                console.log("NO")
            }else{
                console.log("YES")
            }
            rl.close();
        });
    }
});