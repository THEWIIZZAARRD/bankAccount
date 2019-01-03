#include <stdio.h>
#include <string.h>
#include "bank.h"

void getCents(int cents){
 
  if(cents < 10 && cents >= 0){
   switch(cents){
    case 0: 
    {
      char zero[] = "with Zero cents";
      strcpy(holdWord, zero);
      break;
    }

    case 1: 
    {
      char one[] ="with one cent";
      strcpy(holdWord, one);
      break;
    }
    
    case 2: 
    {
      char two[] = "with two cents";
      strcpy(holdWord, two);
      break; 
    }

    case 3: 
    {
      char three[] = "with three cents";
      strcpy(holdWord, three);
      break;
    }

    case 4: 
    {
      char four[] = "with four cents";
      strcpy(holdWord, four);
      break;
    }
    
    case 5: 
    {
      char five[] ="with five cents";
      strcpy(holdWord, five);
      break;
    }

    case 6: 
    {
      char six[] = "with six cents";
      strcpy(holdWord, six);
      break;
    }
    
    case 7: 
    {
      char seven[] = "with seven cents";
      strcpy(holdWord, seven);
      break;
    }
    
    case 8:
    {
      char eight[] = "with eight cents";
      strcpy(holdWord, eight);
      break;
    }

    case 9:
    {
      char nine[] = "with nine cents";
      strcpy(holdWord, nine);
      break;
    }
  }
}
  else

  
}

//==============================================================================================================================

void begin(){

  double input;
  printf("Please enter a number: ");

  scanf("%lg", &input);

  findRange(input);
}

//-=============================================================================================================================

void findRange(double digit){

  if(digit < 10){
    less_Than_10(digit);
  }
  else if(digit < 100){
    less_Than_100(digit);
  }
  else if(digit < 100){
    less_Than_One_Thousand(digit);
  }
  else if(digit < 1000){

  }
  else if(digit < 10000){

  }
  else if(digit < 100000){

  }
}
// This functions will find the amount the number being inserted is

//=================================================================================================================================

void less_Than_10(double digit){
  int getDigitAsInt = (int) digit;
  int getCents = digit - getDigitAsInt;
  char holdWord[150];
  

  switch(getDigitAsInt){
    case 0: 
    {
      char zero[] = "Zero Dollars";
      strcpy(holdWord, zero);
      break;
    }

    case 1: 
    {
      char one[] ="One Dollar";
      strcpy(holdWord, one);
      break;
    }
    
    case 2: 
    {
      char two[] = "Two Dollars";
      strcpy(holdWord, two);
      break; 
    }

    case 3: 
    {
      char three[] = "Three Dollars";
      strcpy(holdWord, three);
      break;
    }

    case 4: 
    {
      char four[] = "Four Dollars";
      strcpy(holdWord, four);
      break;
    }
    
    case 5: 
    {
      char five[] ="Five Dollars";
      strcpy(holdWord, five);
      break;
    }

    case 6: 
    {
      char six[] = "Six Dollars";
      strcpy(holdWord, six);
      break;
    }
    
    case 7: 
    {
      char seven[] = "Seven Dollars";
      strcpy(holdWord, seven);
      break;
    }
    
    case 8:
    {
      char eight[] = "Eight Dollars";
      strcpy(holdWord, eight);
      break;
    }

    case 9:
    {
      char nine[] = "Nine Dollars";
      strcpy(holdWord, nine);
      break;
    }
  }

  int getLength = strlen(holdWord);

  //printf("\n");

    for(int i=0; i<=getLength; i++){
      printf("%c", holdWord[i]);
    }
  
  printf("\n");

}
// Check is cents are 
//=====================================================================================================================================

/*
  store cents in a variable
  get the number as an int
  get the most significant number in a variable
  print out the number 
*/

void less_Than_100(double digit){
  int wholeNum = (int) digit;
  int cents = (digit - wholeNum) * 100;
  int most_Sig_Digit = wholeNum / 10;
  int least_Sig_Digit = wholeNum % 10;
  char holdWord[20];
  char dollar[7] = "Dollars";
  //printf("%d\n", least_Sig_Digit);
  
if((wholeNum > 10 ) && wholeNum < 20){
  switch(wholeNum){
   case 11: 
    {
      char one[] ="Eleven Dollars\n";
      strcpy(holdWord, one);
      break;
    }
    
    case 12: 
    {
      char two[] = "Twelve Dollars\n";
      strcpy(holdWord, two);
      break; 
    }

    case 13: 
    {
      char three[] = "Thirteen Dollars\n";
      strcpy(holdWord, three);
      break;
    }

    case 14: 
    {
      char four[] = "Fourteen Dollars\n";
      strcpy(holdWord, four);
      break;
    }
    
    case 15: 
    {
      char five[] ="Fifteen Dollars\n";
      strcpy(holdWord, five);
      break;
    }

    case 16: 
    {
      char six[] = "Sixteen Dollars\n";
      strcpy(holdWord, six);
      break;
    }
    
    case 17: 
    {
      char seven[] = "Seventeen Dollars\n";
      strcpy(holdWord, seven);
      break;
    }
    
    case 18:
    {
      char eight[] = "Eighteen Dollars\n";
      strcpy(holdWord, eight);
      break;
    }

    case 19:
    {
      char nine[] = "Nineteen Dollars\n";
      strcpy(holdWord, nine);
      break;
    }
  }
}
   else{
    switch(most_Sig_Digit){
   case 1: 
    {
      char one[] ="Ten ";
      strcpy(holdWord, one);
      break;
    }
    
    case 2: 
    {
      char two[] = "Twenty ";
      strcpy(holdWord, two);
      break; 
    }

    case 3: 
    {
      char three[] = "Thirty ";
      strcpy(holdWord, three);
      break;
    }

    case 4: 
    {
      char four[] = "Fourty ";
      strcpy(holdWord, four);
      break;
    }
    
    case 5: 
    {
      char five[] ="Fifty ";
      strcpy(holdWord, five);
      break;
    }

    case 6: 
    {
      char six[] = "Sixty ";
      strcpy(holdWord, six);
      break;
    }
    
    case 7: 
    {
      char seven[] = "Seventy ";
      strcpy(holdWord, seven);
      break;
    }
    
    case 8:
    {
      char eight[] = "Eighty ";
      strcpy(holdWord, eight);
      break;
    }

    case 9:
    {
      char nine[] = "Ninety ";
      strcpy(holdWord, nine);
      break;
    }
   }
  }
  
  int getLength = strlen(holdWord);
  
  for(int i=0; i<= getLength; i++){
    printf("%c", holdWord[i]);
  }
  
  if(wholeNum < 11 || wholeNum > 19){
  if(least_Sig_Digit == 0){
    for(int i=0; i<=6; i++){
      printf("%c", dollar[i]);
    }
    printf("\n");
  }
  else{
    less_Than_10(least_Sig_Digit);
  }
  }
  
}

//=================================================================================================================================

void less_Than_One_Thousand(double digit){
  
  
}
