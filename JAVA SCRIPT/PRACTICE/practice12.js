let modebtn=document.querySelector("#mode");
let currMode="light";
let body=document.querySelector("body");

modebtn.addEventListener("click",()=>{
    // console.log("you are trying to chnage the mode. ");
    if(currMode==="light"){
        currMode="dark";
        // document.querySelector("body").style.backgroundColor="black";
        body.classList.add("dark");
        body.classList.remove("light");
    }
    else{
        currMode="light";
        // document.querySelector("body").style.backgroundColor="white";
        body.classList.add("light");
        body.classList.remove("dark");
    }
    console.log(currMode);
});

//space is read by class and id 
