/*
let marks=[54,26,15,6,89,12,36];
console.log(marks);
console.log(marks[5]);
console.log(marks[51 ]);
console.log(marks.length);
*/
let heroes=["gah","hdu","sbuik","sucdhij"];
console.log(heroes);
console.log(heroes.length);
// arrays arde mmutable
// loop over arrays 
for(let count=0;count<(heroes.length);count++){
    console.log(heroes[count]);
}

for(let item of heroes){
    console.log(item);
}
for(let item in heroes){
    console.log(item);
}