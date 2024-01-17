// the fetch API provides an interface for fetching (sending/receiving) resources 
const URL="https://cat-fact.herokuapp.com/facts";
const factpara=document.querySelector("#fact");
const btn=document.querySelector("#btn");

// let promise=fetch(URL);
// console.log(promise);
/*
const getFacts=async()=>{
    console.log("getting data....");
    let response=await fetch(URL);
    console.log(response);//json format 
    let data =await response.json();
    // console.log(data);
    // console.log(data[0]);
    // console.log(data[0].text);


    factpara.innerText=data[0].text;
};
btn.addEventListener("click",getFacts);
*/


// using promise chain
/*
function getFacts(){
    fetch(URL).then((response)=>{
        return response.json();
    })
    .then((data)=>{
        console.log(data);
    });
}
btn.addEventListener("click",getFacts);
*/

