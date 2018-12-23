#include <stdio.h>
#include <string.h>
#include "bank.h"

void begin(){

  double input;
  printf("Please enter a number: ");

  scanf("%d", &input);

  findRange(input);
}

void findRange(double digit){

  if(digit < 10){
    less_Than_10(digit);
  }
  else if(digit < 100){

  }
  else if(digit < 100){

  }
  else if(digit < 1000){

  }
  else if(digit < 10000){

  }
  else if(digit < 100000){

  }
}
// This functions will find the amount the number being inserted is

void less_Than_10(double digit){
  int getDigitAsInt = (int) digit;
  int getCents = digit - getDigitAsInt;
  char holdWord[150];
  char dollar[6] = "Dollar";

  switch(getDigitAsInt){
    case 0: 
    {
      char zero[5] = "Zero ";
      strcpy(holdWord, zero);
      strcat(holdWord, dollar);
      break;
    }

    case 1: 
    {
      char one[5] ="One ";
      strcpy(holdWord, one);
      strcat(holdWord, dollar);
      break;
    }
    
    case 2: 
    {
      char two[5] = "Two ";
      strcpy(holdWord, two);
      strcat(holdWord, dollar);
      break; 
    }

    case 3: 
    {
      char three[6] = "Three ";
      strcpy(holdWord, three);
      strcat(holdWord, dollar);
      break;
    }

    case 4: 
    {
      char four[6] = "Four ";
      strcpy(holdWord, four);
      strcat(holdWord, dollar);
      break;
    }
    
    case 5: 
    {
      char five[6] ="Five ";
      strcpy(holdWord, five);
      strcat(holdWord, dollar);
      break;
    }

    case 6: 
    {
      char six[6] = "Six ";
      strcpy(holdWord, six);
      strcat(holdWord, dollar);
      break;
    }
    
    case 7: 
    {
      char seven[7] = "Seven ";
      strcpy(holdWord, seven);
      strcat(holdWord, dollar);
      break;
    }
    
    case 8:
    {
      char eight[8] = "Eight ";
      strcpy(holdWord, eight);
      strcat(holdWord, dollar);
      break;
    }

    case 9:
    {
      char nine[6] = "Nine ";
      strcpy(holdWord, nine);
      strcat(holdWord, dollar);
      break;
    }
  }

  int getLength = strlen(holdWord);

  printf("\n");

    for(int i=0; i<=getLength; i++){
      printf("%c", holdWord[i]);
    }
  


}
// Check is cents are 

