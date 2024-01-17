// for doing a work multiple times in code 
// FOR LOOPS 
// for(start;condition;updation){
//  statement
// }

/*
let n=5;
for( let count =5;count<10;count++){
    console.log("samar pratap yadav ");
}
*/
// sum of n numbers 
/*
let sum=0;
for(let cnt=0;cnt<10;cnt++){
    sum+=cnt;
}
console.log("sum is :",sum);
*/

// print number 
/*
for(let cnt=0;cnt<10;cnt++){
    console.log(cnt);
}
*/


// WHILE LOOP
/*
while(condition){
    // do some work
    //updation
}
*/
// let i=0;
// while(i<10){
//     console.log("samar");
//     i++;
// }


// DO WHILE LOOP 
/*
let  i=20;
do{
    console.log("apna collage");
    i++;
}
while(i<=10);
*/

// FOR OFF RULE  used for string and array only 
/*
 let str="apna collage";
 let size=0;
 for(let i of str){
    console.log("i :",i);
    size++;
 }
 console.log("string size is:",size);
*/

// FOR IN LOOP USE FOR OBJECTS & ARRAYS
/*
for(let key in objVar){
    //do some workk
}
*/
let student ={
    name:"samar yadav",
    age:20,
    cgpa:7.5,
    isPass:true,
}
for(let key in student){
    console.log("key",key ,"value",student[key]);
}
