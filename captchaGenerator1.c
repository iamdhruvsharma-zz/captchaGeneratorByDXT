#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
char globalCharacters[ ] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '@', '$', '#', '&'};
// printf("%c", globalCharacters[0]);
int i;
char captcha[9];
char userInput[9];
srand(time(0));
//printf("%d", rand()%3);
for(i=0; i<9; i++)
{
captcha[i] = globalCharacters[rand()%62];
}
printf("Captcha: ");
for(i=0; i<9; i++)
{
printf("%c", captcha[i]);
}
printf("\nAnswer: ");
for(i=0; i<9; i++)
{
scanf("%c", &userInput[i]);
}
/*for(int i=0; i<9; i++)
{
printf("%c", userInput[i]);
}*/
int check=0;
for(i=0; i<9; i++)
{
if(userInput[i] != captcha[i])
{
check=1;
break;
}
}
if(check==0)
{
printf("Pass");
}
else
{
printf("Fail");
} 
}

