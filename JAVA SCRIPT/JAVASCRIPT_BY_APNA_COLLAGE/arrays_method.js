/*
let fooditems=["potato","apple","lichi","banana"];
fooditems.push("lund");
console.log(fooditems);
// push chnage in original array 
*/

// pop() functon of the arrays 
/*
let fooditems=["potato","apple","lichi","banana"];
console.log(fooditems);
 let deleteitem=fooditems.pop();
 console.log(fooditems);
 console.log(deleteitem);
 console.log(fooditems.toString());
*/
/*
let marvel_heroes=["thor","spiderman","ironman"];
let dcheroes=["superman","batman"];
let heroes=marvel_heroes.concat(dcheroes);
console.log(heroes);
console.log(heroes.toString());
*/

// UPSHIFT METHOD to add an element in an array starting 
/*
let marvel_heroes=["thor","spiderman","ironman"];
marvel_heroes.unshift("krish");
console.log(marvel_heroes );
// SHIFT USE FOR DELETE FROM START 
marvel_heroes.shift();
console.log(marvel_heroes );
*/

// SLICE()  return a piece of array it does'nt chnage the original array a
/*
let marvel_heroes=["thor","spiderman","ironman","antman","drstrenge"];
console.log(marvel_heroes);
console.log(marvel_heroes.slice(1,3));
console.log(marvel_heroes.slice(1));
console.log(marvel_heroes.slice());
*/


// splice()  it change in original array (add, remove ,replace )
  
let arr=[1,5,6,9,7,4,3,3,6,9];

// arr.splice(2,2,101,102);
// add element
arr.splice(2,1,101,102) //ending iondex is not included
// arr.splice(starting index from where u want some changes , number of item in which u want changes,elements which u want to add)
console.log(arr);
arr.splice(3,1,504);
console.log(arr);

