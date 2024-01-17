const prompt=require('prompt-sync')();
let a=prompt("enter your age:")
a=Number.parseInt(a)
console.log(a)
console.log(typeof(a))
// if(a<18){
//     alert("this is an invalid age.")
// }
// else if(a>18 || a<45){
//     alert(" this is a alert.  ")
// }
// else{
//     alert("this is a valid age")
// }
// console.log("done")
// console.log("you can ", age<18? "not drive":"drive")
