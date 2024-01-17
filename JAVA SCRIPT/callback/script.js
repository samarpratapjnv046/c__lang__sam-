// console.log("one");
// console.log("two");
// console.log("three");
/*
function hello(){
    console.log("hello");
}

console.log("one");
console.log("two");
// setTimeout(hello,2000)// timeout
setTimeout(()=>{
    console.log("another way to run function.");
},4000);
console.log("three");
console.log("four");
*/

//  CALLBACK 
/*
 function sum(a,b){
    console.log(a+b);
 }
function calculator(a,b,sumCallback){
    sumCallback(a,b);
}
calculator(1,2,sum);

calculator(1,2,(a,b)=>{
    console.log(a+b);
});

*/

/*
const hello=()=>{
    console.log("hello");
};
setTimeout(hello,3000);
*/

// CALL BACK HELL
// nesting
/*
let age=19;
if(age>=18){
    
    if(age>=60){
        console.log("senior;")

    }
    else{
        console.log("middle");
    }
}else{
    console.log("child");
}
*/
/*
for(let i=0;i<5;i++){
    let str="";
    for(let j=0;j<5;j++){
        str=str+j;
    }
    console.log(str);

}
*/
// for regular interval
/*
function getData(dataId,getNextData){
    setTimeout(()=>{
        console.log("data",dataId);
        if(getNextData){
            getNextData();  
        }
        
    },2000);
}
getData(1,()=>{
    console.log("getting data....");
    getData(2,()=>{
        console.log("getting data....");
        getData(3,()=>{
            console.log("getting data....");
            getData(4);
        });
    });
});
*/
// above code is called nested code or CALLBACK HELL 


// getData(1);//2s
// getData(2);//2s
// getData(3);//2s
// data1
// data2
// data3

// TO RESOLVE THE CALLBACK HELL WE USE PROMISES 
/*
let promise= new Promise((resolve,reject)=>{ 
    console.log("i am apromise");
    // resolve(123);
    reject("some error occured.");
});
*/
/*
function getData(dataId,getNextData){
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            console.log("data",dataId);
            resolve("success");
            if(getNextData){
                getNextData();  
            }
            
        },5000);

    });
}
*/
/*
function getData(dataId){
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            console.log("data",dataId);
            resolve("success");
        },5000);
    });
}
getData(1).then((res)=>{
    return  getData(2);
        console.log(res);
    }).then((res)=>{
        return getData(3);
    }).then((res)=>{
        console.log(res);
    })
*/
// USING PROMISE CHAIN 
/*
getData(1).then((res)=>{
    console.log(res);
    getData(2).then((res)=>{
        console.log(res);
    })
});
*/



/*
const getpromise=()=>{
    return new Promise((resolve,reject)=>{
        console.log("i am a promise.");
        // resolve("success");
        reject(" network error");
    });
};

let promise=getpromise();
promise.then((res)=>{
    console.log("promise fulfilled.",res);
});
promise.catch((err)=>{
    console.log("rejected",err);
})
*/

// PROMISE CHAIN 
/*
function asyncFun1(){
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            console.log("data1");
            resolve("success");
        },4000);
    });
}
function asyncFun2(){
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            console.log("data2");
            resolve("success");
        },4000);
    });
}
*/
/*
console.log("fetching data1... ");
let p1=asyncFun1();
p1.then((res)=>{
    console.log(res);
})

console.log("fetching data2... ");
let p2=asyncFun2();
p2.then((res)=>{
    console.log(res);
})
*/
/*
console.log("fetching data1... ");
let p1=asyncFun1();
p1.then((res)=>{
    console.log(res);
    console.log("fetching data2... ");
    let p2=asyncFun2();
    p2.then((res)=>{
        console.log(res);
    })
})
*/
// optimize code for just above code 
/*
console.log("fetching data1... ");
asyncFun1().then((res)=>{
    console.log(res);
    console.log("fetching data2... ");
    asyncFun2().then((res)=>{
        console.log(res);
    });
});
*/


// USE OF ASYNC FUNCTION AND AWAIT FUNCTION 
/*
async function hello(){
    console.log("hello");// it return promise already 
}
*/
/*
function api(){
    return new Promise ((resolve,reject)=>{
        setTimeout(()=>{
            console.log("wheather data");
            resolve(200);
        },2000);
    });
}
// we can not use await function without async function
async function getWeather(){
    await api();  // 1st call
    await api(); // 2nd call
    await api(); // 3rd call
}
*/




// FINAL CONCLUSION OF ALL TYPES OF CALL 


/*
function getData(dataId){
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            console.log("data",dataId);
            resolve("success");
        },5000);
    });
}
// use await function 

async function getAllData(){
    await getData(1);
    await getData(2);
    await getData(3);
    await getData(4);

}
*/
// CALL BACK HELL CODE 
/*
getData(1,()=>{
    console.log("getting data....");
    getData(2,()=>{
        console.log("getting data....");
        getData(3,()=>{
            console.log("getting data....");
            getData(4);
        });
    });
});
*/
// USING PROMISE CHAIN 
/*
getData(1).then((res)=>{
    console.log(res);
    getData(2).then((res)=>{
        console.log(res);
    })
});
*/
// or
/*
getData(1).then((res)=>{
    return  getData(2);
        console.log(res);
    }).then((res)=>{
        return getData(3);
    }).then((res)=>{
        console.log(res);
    })

*/

// IIFE : IMMEDIATELY INVOKED FUNCTION EXPRESSION
/* 
(function (){
    // .....
})();
*/

// USE OF IIFE FUNCTION FOR AWAIT ASYNC FUNCTION :IN THIS FUNC THERE IS NO NEED OF CALLING 
// just form one time only 

function getData(dataId){
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            console.log("data",dataId);
            resolve("success");
        },5000);
    });
}
// use await function 

(async function(){
    await getData(1);
    await getData(2);
    await getData(3);
    await getData(4);

})();
