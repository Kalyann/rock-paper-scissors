var userChoice = prompt("Do you choose rock, paper or scissors?").toLowerCase();

var computerChoice = Math.random();
if (computerChoice < 0.34) {
	computerChoice = "rock";
} else if(computerChoice <= 0.67) {
	computerChoice = "paper";
} else {
	computerChoice = "scissors";
} console.log("Computer: " + computerChoice);
var compare = function(choice1, choice2){ 
 var s;
 if( choice1 === choice2){
 s = "The result is a tie!";
 }
 else if( choice1 === "rock"){
     if( choice2 === "scissors"){
         s="rock wins";
     }
     else if( choice2 === "paper"){
         s="paper wins";
     }
 }
 else if( choice1 === "paper"){
     if( choice2 === "rock"){
         s="paper wins";
     }
     else if( choice2 === "scissors"){
         s="scissors wins";
     }
 }
 else if( choice1 === "scissors"){
     if( choice2 === "rock"){
         s="rock wins";
     }
     else if( choice2 === "paper"){
         s="scissors wins";
     }
 }
return s;
}
console.log(compare(userChoice, computerChoice));
