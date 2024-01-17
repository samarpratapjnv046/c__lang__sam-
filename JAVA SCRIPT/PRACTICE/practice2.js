// alert("hello"); // one time popup


// prompt("hello");// popup and input 

// let name=prompt("hello what's your name");
// console.log(name);
/*
let n= prompt("enter a number:");
if(n%5===0){
    console.log("it is multiple of 5");
}
else{
    console.log("it is not multiple of 5");
}
*/


let marks=prompt("enter the matrks of student:");
let grade;
if(marks<100 && marks>90){
    // console.log("grade:A" );
    grade="A";
}
else if(marks<89 && marks>70){
    // console.log("grade:B" );
    grade="B";
}
else if(marks<69 && marks>60){
    // console.log("grade:C" );
    grade="C";
}
else if(marks<59 && marks>50){
    // console.log("grade:D" );
    grade="D";
}
else{
    // console.log("fail h beta tu");
    grade="F";
}

console.log("your grade according to your scores is :", grade );


