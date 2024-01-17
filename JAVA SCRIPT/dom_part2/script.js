/*
let div=document.querySelector("div");
console.log(div);

let id=div.getAttribute("id");
console.log(id);

let name=div.getAttribute("name");
console.log(name);

let para =document.querySelector("p");
console.log(para.getAttribute("class"));
console.log(para.setAttribute("class","bsdk"));
*/
/*
let div=document.querySelector("div");
div.style.backgroundColor="green";
div.style.backgroundColor="purple";


div.style.fonrSize="26px";
div.innerText="Hello;"
div.style.visibility="hidden";
*/

// how we can insert an element 
// first we create the element
/*
let newBtn= document.createElement("button");
newBtn.innerText="click me";
console.log(newBtn);

let div=document.querySelector("div");
// div.append(newBtn);
// div.prepend(newBtn);
div.before(newBtn);
// div.after(newBtn);
*/

let newHeading = document.createElement("h1");
newHeading.innerHTML="<i>hi i am new! </i>";
document.querySelector("body").prepend(newHeading);

let para=document.querySelector("p").remove();
// para.remove();