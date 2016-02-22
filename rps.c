#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void disp(char *c1, char *c2)
{
 printf("\nYou chose %s \nComputer chose %s\n", c1, c2);
}

int getRandomNumber()
{
 int num;
 srand(time(NULL));
 num = rand();
 num = (num % 3) ;
 return num;
}

void compare(char *choice1,char *choice2)
{ 

 if( strcmp(choice1, choice2)==0)
 {
   disp(choice1,choice2);
   printf("The result is a tie!\n");
 }
 else if( strcmp(choice1,"rock")==0)
 {
     disp(choice1,choice2);
     if( strcmp(choice2,"scissors")==0)
     {
         printf("rock wins\n");
     }
     else if( strcmp(choice2,"paper")==0)
     {
         printf("paper wins\n");
     }
 }
 else if( strcmp(choice1,"paper")==0)
 {
    disp(choice1,choice2); 
    if( strcmp(choice2,"rock")==0)
    {
         printf("paper wins\n");
    }
     else if( strcmp(choice2,"scissors")==0)
    {
         printf("scissors wins\n");
    }
 }
 else if( strcmp(choice1,"scissors")==0)
 {
     disp(choice1,choice2);
     if( strcmp(choice2,"rock")==0)
     {
         printf("rock wins\n");
     }
     else if( strcmp(choice2,"paper")==0)
     {
         printf("scissors wins\n");
     }
  }
 else
   printf("You don't know how to play rock, paper, and scissors\n");
 
}

int main()
{
  char choice;
  char userChoice[8], computerChoice[8];
  printf("Do you want to play Rock, Paper and Scissors & ? \nPress y to play or n to exit\n");
  scanf("%c", &choice);
  if (choice=='y')
    {
       printf("Welcome to Rock, Paper and Scissors game\n");
       printf("Do you choose rock, paper or scissors: ");
       scanf("%s", userChoice);
       int cr = getRandomNumber();
       if (cr == 0) 
       {
	  strcpy(computerChoice,"rock");
       } 
       else if(cr == 1) 
       {
	  strcpy(computerChoice,"paper");
       }
       else 
       {
	  strcpy(computerChoice,"scissors");
       }
       compare(userChoice, computerChoice);
   }
  else
   {
    printf("wrong choice");
   }
return 0;
}       

 
