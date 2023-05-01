const hambugger = document.querySelector(".hambugger");
const navMenu = document.querySelector(".nav-menu");

hambugger.addEventListener("click",()=>{
hambugger.classList.toggle("active"); 
navMenu.classList.toggle("active"); 
});

document.querySelectorAll(".nav-link").forEach(element => {element.addEventListener("click",()=>{
hambugger.classList.remove("active");
navMenu.classList.remove("active");
});
});

//prompting the user for a color
// let userInput = prompt();

//console to check the original displayed value maybe in uppercase or lower case
// console.log(userInput)

//converting to lower case and initializing it to a variable "text"
// let text = userInput.toLowerCase();

//console to check the convertion || or " text " if changed to lower case
// console.log(text)


//making use of the " OR " operator,||



//checking if its a primary color
// if( text === "red" || text === "Blue" || text === "yellow"){
// alert( text +" is a primary color");
// console.log( text + "is a primary color");

// }

// //checking if its a secondary color
// else if( text=== "orange" ||text=== "green" || text === "purple"){
// alert( text + " is a secondary color");
// console.log( text + " this is a secondary color");
// }

//checking if its just an ordianry color or text
// else{
// alert( text + "is a color oran ordinary text ");
// console.log(text + "is a color or an ordinary text ");
// }



//################# K CODE ##############################//

let userColor = prompt("kindly, enter any color of your choice (pri / sec )?");
let primaryColors = ['red', 'blue', 'yellow'];
let secondaryColors = ['orange', 'green', 'purple'];

for ( let i = 0; i < primaryColors.length; i++) { 
if ( userColor === primaryColors[i]) { 
console.log(`You picked a primary color : ${primaryColors[i]}`);
}
else if ( userColor === secondaryColors[i]) { 
console.log(`You picked a secondary color : ${secondaryColors[i]}`);
}
else { 
console.log("Error!!!, invalid input");
}
}


toastr.info('Are you the 6 fingered man?')