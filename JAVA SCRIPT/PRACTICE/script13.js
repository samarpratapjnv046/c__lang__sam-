let DATA="secret information";
class  user{
    constructor(name,email){
        this.name=name;
        this.email=email;

    }
    viewData(){
        console.log("website data!" ,DATA);
    }
}

class admin extends user{
    constructor(name,email){
        super(name,email);
    }
    editDATA(){
        DATA="some new value ";
    }
}
let student1=new user("shradha","abc@email.com");
let student2=new user("aman","abcl@email.com");
let teacher1=new user("dean","abcdean@gmail.com");

let admin1=new admin("admin","admin@gmail.com");
