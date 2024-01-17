
/*let marks=[85,97,6,4,98,56,45,74];

let sum=0;

for (let val of marks){
    sum+= val;
}
let avg=sum/marks.length;

console.log(`avg marks of the class=${avg}`);
*/
// q2
/*
 let price=[250,645,300,900,50];
 let n = sizeof(price);
let ans=[n];
for(let cnt=0;cnt<n;cnt++){
    ans[cnt]= price[cnt] -(price[cnt]/10);
}
console.log(ans[0]);
*/

let price=[250,645,300,900,50];
let i=0;
for(let val of price){
    let offer=val/10;
    price[i]=price[i]-offer;
    console.log(`value after offer=${price[i]}`);
    i++;
}
