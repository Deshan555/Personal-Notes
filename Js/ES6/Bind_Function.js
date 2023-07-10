
const First_Obj ={
    name: "First Object",

    objID: 1,

    TagLine : function(){

        console.log(this.firstName+ " " + this.lastName);
    }
}

const Second_Obj ={
    firstName: "Second Object",

    lastName: "Last Name",
}

const myFunction = First_Obj.TagLine.bind(Second_Obj);

myFunction(); // Second Object Last Name