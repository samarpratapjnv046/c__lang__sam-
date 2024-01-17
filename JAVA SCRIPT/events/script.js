// let st = document.querySelector("#btn1");


/*
st.onclick = (evt) => {
    // console.log("hello");
    // let a=25;
    // a++;
    // console.log(a);
    console.log(evt);
    console.log(evt.type);
    console.log(evt.target);
    console.log(evt.clientX,evt.clientY);
};
*/
/*
let box=document.querySelector(".box");
box.onmouseover=()=>{
    alert('you are inside the box');
}
//  priority of js code is more than in  line code .
*/

let st = document.querySelector("#btn1");
st.addEventListener("click",(evt)=>{
    console.log("button was clicked ");
    // console.log(evt);
});
st.addEventListener("click",()=>{
    console.log("button was clicked second handler ")
});

const handler3 =() =>{
    console.log("button was clicked 3 handler ");
};

st.addEventListener("click",handler3);

st.addEventListener("click",()=>{
    console.log("button was clicked 4 handler ")
});

st.removeEventListener("click",handler3);





// in case of event listner we can perform multiple task on a single event 
    

