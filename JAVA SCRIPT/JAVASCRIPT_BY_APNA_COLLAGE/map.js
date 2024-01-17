//MAP METHOD


// arr.map(callbackFxn(value,index,array))
/*
let newArr=arr.map((val)=>{
    return val*2;
});
 */
// it works same as forEach loop but it diffrent in way that it store the result of callback function in a new array 

/*
let nums=[5,8,9,6,3,4];

let newarr=nums.map((val)=>{
    return val*2;
});

console.log(newarr);
console.log(nums);
*/


// FILTER METHOD
/*
let arr=[5,6,8,41,26,20];

let newarr=arr.filter((val)=>{
    if(val%2===0){
        return val;
    };
});

console.log(arr);
console.log(newarr);
*/

// REDUCE METHOD


let arr=[4,5,8,9,7,6 ];
 const output=arr.reduce((res,curr)=>{
    return res+curr;
});
console.log(output);


 const largest=arr.reduce((prev,curr)=>{
    return prev>curr ? prev:curr;
});
console.log(largest);
