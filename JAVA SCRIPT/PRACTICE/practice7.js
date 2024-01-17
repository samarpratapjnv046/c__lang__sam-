function countvowels(str){
    let cnt=0;
    for(let i=0;i<str.length;i++){
        if(str[i]==='a' || str[i]==='i' || str[i]==='e' ||str[i]==='o' ||str[i]==='u' ){
            cnt++;
        }
    }
    return cnt;
}
 let n=countvowels("fyshqihiujojnai");
 console.log(n);

 for(const char of str){
    console.log(char);
 }