const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
rl.question('', (num) => {
    let n=parseInt(num.trim(),10);
    if(n==2 || n==3){
        console.log("NO SOLUTION")
    }else if(n==4){
        console.log("2 4 1 3")
    }else{
        let arr = new Array()
        for(let i=n;i>=1;i-=2){
            arr.push(i);
        }
        for(let i=n-1;i>=1;i-=2){
            arr.push(i);
        }
        let output=''
        for(let i=0;i<arr.length;i++){
            output+=arr[i]+' ';
        }
        process.stdout.write(output)
    }
    rl.close();
});