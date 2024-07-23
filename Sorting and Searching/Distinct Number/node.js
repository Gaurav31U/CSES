const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
rl.question('', (num) => {
    rl.question('', (array) => {
        arr=array.trim().split(' ').map(Number)
        arr.sort((a, b) => a - b)
        let i=1
        let cnt=1
        while(i<arr.length){
            if(arr[i]!==arr[i-1]){
                cnt+=1
            }
            i+=1
        }
        console.log(cnt)
        rl.close();
    });
});