// create a strings 
/*
let str="apna collage "; 
let str1='mbehf';
console.log(str[5]);
console.log(str[4]);//space 
console.log(str.length);
*/


// TEMPLATE LITERALS
/*
let specialstring=`this is a template literal`;
console.log(specialstring);
console.log(typeof(specialstring));
// we can write var and string in same 
*/
/*
let obj={
    item:"pen",
    price:10,
}
let output=`the cost of${obj.item} is ${obj.price} ruppee`
console.log(output);
console.log("the price of", obj.item,"is",obj.price,"rupee");
let sum=`the sum of 2,3,5 and 6 is:${2+3+5+6}`;
console.log(sum);
*/

// escape charecters 
/*
console.log("apna \n collage ");
console.log("apna \t collage ");

let str="apna\tcollage ";
console.log(str.length);
*/
/*
let str="samar yadav ";
let newstr=str.toUpperCase();
// console.log(str.toUpperCase());
console.log(newstr);
console.log(str.toLowerCase());
// strings are immutable original string will never be change 
*/


// let str="       bhag bsdk";
// console.log(str.trim());
// remove the space from end and start 
// str.slice(start,end);
// str1.concat(str2);
// str.replace(searchVal,newVal);
// str.charAt(idx);

/*
let str="abcde";
console.log(str.slice(1,3));//index 3 is not included
console.log(str.slice(1));
console.log(str.slice());

let str1="apna ";
let str2="collage";
console.log(str1.concat(str2));
// or
let res=str1+str2;
console.log(res);
*/

let str="hello";
console.log(str.replace("h","p"));
console.log(str.replaceAll("l","p"));

console.log(str.charAt(0));
// original string does not change 
