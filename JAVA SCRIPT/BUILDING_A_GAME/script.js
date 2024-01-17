let userscore=0;
let compscore=0;

const choices =document.querySelectorAll(".choice");
const msg=document.querySelector("#msg");
const userscorePara=document.querySelector("#user-score");
const compscorePara=document.querySelector("#comp-score");

const genCompChoice=()=>{
    // rock ,paper ,scissors 
    const options=["rock","paper","scissors"];
    const randIdx =Math.floor(Math.random()*3);
    return options[randIdx];
}

const drawgame=()=>{
    // console.log("game is draw!");
    msg.innerText="Game Draw! Play Again!";
    msg.style.backgroundColor="#081b31";

}
const showwinner=(userwin,userchoice,compchoice)=>{
    if(userwin){
        userscore++;
        userscorePara.innerText=userscore;
        // console.log("you win!");
        msg.innerText=`You Win! ${userchoice} beats ${compchoice}!`
        msg.style.backgroundColor="green";
    }
    else{
        compscore++;
        compscorePara.innerText=compscore;
        // console.log("you lose!");
        msg.innerText=`You Lose! ${compchoice} beats ${userchoice} !`
        msg.style.backgroundColor="red";
    }

}
const playgame=(userchoice)=>{
    console.log("user choice=",userchoice);
    // genearte computer choice 
    const compchoice=genCompChoice();
    console.log("comp choice=",compchoice);

    if(userchoice===compchoice){
        drawgame();
    }
    else{
        let userwin = true;
        if(userchoice==="rock"){
            // scissor or paper 
            userwin = compchoice==="paper" ? false:true;
        }
        else if(userchoice==="paper"){
            // scissor or rock
            userwin= compchoice==="scissor"?false:true;

        }
        else{
            // paper or rock 
            userwin = compchoice==="rock" ? false:true;
        }
        showwinner(userwin,userchoice,compchoice);
    }
}


choices.forEach((choice)=>{
    // console.log(choice);
    choice.addEventListener("click",()=>{
        const userchoice =choice.getAttribute("id");
        // console.log("choice was clicked!",userchoice);
        playgame(userchoice);
    });
});