//  q1
/*
let marks=[23,89,96,95,91,92,36];

let toppers =marks.filter((val)=>{
    return val>90;
});
console.log(toppers);
*/

// q2

  let n=prompt("enter a number");
  let arr=[];
  for(let i=1;i<=n;i++){
    arr[i-1]=i;
  };
  console.log(arr);


  const output=arr.reduce((res,curr)=>{
    return res+curr;
  });
  console.log(output);

  const factorial =arr.reduce((res,curr)=>{
    return res*curr;
  });

  console.log(factorial);