#include <stdio.h>
#include "bank.h"

void begin(){
  double input;
  
  printf("Enter amount: ");
  scanf("%f", input);

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

  switch(digit){
    case 0: 
      holdWord = "Zero Dollar";
      break;

    case 1: 
      holdWord = "One Dollar ";
      break;
    
    case 2: 
      holdWord = "Two Dollars ";
      break; 

    case 3: 
      holdWord = "Three Dollars";
      break;

    case 4: 
      holdWord = "Four Dollars";
      break;
    
    case 5: 
      holdWord = "Five Dollars";
      break;

    case 6: 
      holdWord = "Six Dollars";
      break;
    
    case 7: 
      holdWord = "Seven Dollars";
      break;
    
    case 8:
      holdWord = "Eight Dollars";
      break;

    case 9:
      holdWord = "Nine Dollars";
      break;
  }


}
// Check is cents are 

