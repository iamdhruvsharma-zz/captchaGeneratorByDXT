#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  char globalCharacters[ ] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '@', '$', '#', '&'};
  int i;
  int size;
  printf("Please enter the size of Captcha you want to generate: "); //user-defined custom size
  scanf("%d", &size);
  fflush(stdin);
  char captcha[size];
  char userInput[size];
  srand(time(0));            //time(0) is used to make sure, code generated new random every time
  for(i=0; i<size; i++)
  {
    captcha[i] = globalCharacters[rand()%62]; 
  }
  printf("Captcha: ");
  for(i=0; i<size; i++)
  {
    printf("%c", captcha[i]);
  }
  printf("\nAnswer: ");
  for(i=0; i<size; i++)
  {
    scanf("%c", &userInput[i]);
  }
  int check=0;
  for(i=0; i<size; i++)
  {
    if(userInput[i] != captcha[i])  //Final Verfication
    {
      check=1;
      break;
    }
  }
  if(check==0)
  {
    printf("Congratulations you are human!!! :)");
  }
  else
  {
    printf("Please Try Again!!!");
  } 
}
