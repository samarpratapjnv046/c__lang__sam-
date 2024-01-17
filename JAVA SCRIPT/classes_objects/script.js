/*
const student={
    fullname:"samar",
    marks:95,
    printMarks:function(){
        console.log("marks=",this.marks);//student.marks
    }
}
const employee={
    calcTax(){
        console.log("tax rate is 10%");
    },
    // calcTax2 :function (){
    //     console.log("tax rate is 10%");
    // }
};

const karanarjun={
    salary:50000,
}
const karanarjun1={
    salary:50000,
}

const karanarjun2={
    salary:50000,
}

const karanarjun3={
    salary:50000,
}



// making prototype
karanarjun.__proto__=employee;
karanarjun1.__proto__=employee;
karanarjun2.__proto__=employee;
karanarjun3.__proto__=employee;

*/
// CLASSES 
/*
class toyata{
    constructor(brand,milage){
        console.log("creating new object.");
        this.brand=brand;
        this.milage=milage;
    }
    start(){
        console.log("start engine");
    }
    stop(){
        console.log("stop" );
    }
    setBrand(brand){
        // this.brandname=brand;
    }
}

// let fortuner =new toyata();
// fortuner.setBrand("fortuner");
// let lexus =new toyata();
// lexus.setBrand("lexus");
let nexon=new toyata();
let nexon1=new toyata();
let fortuner= new toyata("fortuner");

*/
/*
class parent{
    hello(){
        console.log("hello");
    }
}

class child extends parent{

}
let obj=new child();
*/
/*
class person{
    constructor(){
        this.species="homo sapiens";
    }
    eat(){
        console.log("eat");
    }
    sleep(){
        console.log("sleep");
    }
    work(){
        console.log("do nothing !");
    }
}

// if a fnc is in parent and child both ,then child fnc will be excute 
//if child & parent have same method ,child's method will be used [method overrriding]\

class engineer extends person {
    work(){
        console.log("solve problems ,build something!");
    }
}
let shradhaObj =new engineer();

*/

// SUPER KEYWORD
class person{
    constructor(name){
        // console.log("enter parent constructor.");
        this.species="homo sapiens";

        this.name=name;
        // this.branch=branch;
    }
    eat(){
        console.log("eat");
    }
}
class engineer extends person {
    constructor(name){
        // console.log("enter child constructor.");
        super(name);//to invoke parent class constructor 
        // this.branch=branch;
    //     console.log("exit from  child constructor.");
    }
    work(){
        console.log("solve problems ,build something!");
    }
}
// let obj =new engineer("chem eng");
let obj =new engineer("samar");


