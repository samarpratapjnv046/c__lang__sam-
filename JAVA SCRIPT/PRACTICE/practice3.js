// q1 for even  number 
/*
for(let n=0;n<=100;n+=2){
    console.log(n);
}

//  for odd numbers 
for(let n=1;n<=100;n+=2){
    console.log(n);
}
*/

// q2
let gameNum=25;

let guess=prompt("Guess the game number :");
while(guess!= gameNum){
    prompt("you entered the wrong number ,guess again.");
}
console.log("congratulation u enterr the right number .");
// prompt always return in string form 
