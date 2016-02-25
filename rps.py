from random import randint
def compare(choice1, choice2):
 if( choice1 == choice2):
  s = "The result is a tie!"
 elif( choice1 == "rock"):
  if( choice2 == "scissors"):
    s="rock wins"
  elif( choice2 == "paper"):
    s="paper wins"
 elif( choice1 == "paper"):
  if( choice2 == "rock"):
    s="paper wins"
  elif( choice2 == "scissors"):
    s="scissors wins"
 elif( choice1 == "scissors"):
  if( choice2 == "rock"):
    s="rock wins"
  elif( choice2 == "paper"):
    s="scissors wins"
 print s

userChoice = raw_input("Do you choose rock, paper or scissors?")
cr = randint(0,9)
if (cr in range(0,3)): 
 comChoice = "rock" 
elif(cr in range(4,6)): 
 comChoice = "paper"
else:
 comChoice = "scissors"
print "You chose", userChoice
print "\nComputer chose", comChoice
compare(userChoice, comChoice)
