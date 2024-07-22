const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});
rl.question('', (s) => {
    let n=s.length;
    let ans=0;
    for(let i=0;i<n;){
        let ch=s[i];
        let val=0;
        while(i<n && ch==s[i]){
            i++;
            val=val+1;
        }
        ans=Math.max(ans,val);
    }
    console.log(ans);
    rl.close();
});