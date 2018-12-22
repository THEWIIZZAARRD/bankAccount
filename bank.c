#include <stdio.h>
#include <string.h>
#include "bank.h"

void begin(){
  double input;
  
  printf("Enter amount: ");
  scanf("%g", input);

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
      char zero[5] = "Zero ";
      strcpy(holdWord, zero);
      strcat(holdWord, dollar);
      break;

    case 1: 
      char one[5] ="One ";
      break;
    
    case 2: 
      char two[5] = "Two ";
      break; 

    case 3: 
      char three[6] = "Three ";
      break;

    case 4: 
      char four[6] = "Four ";
      break;
    
    case 5: 
      char five[6] ="Five ";
      break;

    case 6: 
      char six[6] = "Six ";
      break;
    
    case 7: 
      char seven[7] = "Seven ";
      break;
    
    case 8:
      char eight[8] = "Eight ";
      break;

    case 9:
      char nine[6] = "Nine ";
      break;
  }

  char val = holdWord[0];
  printf("\n");

  while(val != '\0'){
    for(int i=0; i<15; i++){
      printf("%c", holdWord[i]);
    }
  }


}
// Check is cents are 

