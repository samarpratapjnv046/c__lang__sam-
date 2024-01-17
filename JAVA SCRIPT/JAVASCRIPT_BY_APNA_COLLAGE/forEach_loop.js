// arr.forEach(callBackFunction )
/*
function myfunc(){
    console.log("apna collage");
}

function abc(myfunc){
    return myfunc;
}
*/
let arr=[1,2,6,4,8,9];

arr.forEach(function printVal(val){
    console.log(val);
});

arr.forEach((val)=>{
    console.log(val);
});
let arr1=["dag","gsuj","gsshi"];
arr1.forEach((val)=>{
    console.log(val.toUpperCase());
});
arr1.forEach((val,idx,arr)=>{
    console.log(val.toUpperCase(),idx,arr);
});

