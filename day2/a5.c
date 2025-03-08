#include<stdio.h>
int main()
{
  int inputNumber = 0,sumofDigits = 0;
  puts("enter a number");
  scanf("%d\n",&inputNumber);
  while(inputNumber > 0)
  {
    remainder = inputNumber % 10;
    sumofDigits = remainder + sumofDigits;
    inputNumber = inputNUmber%10;
    if(inputNumber =0 && sumofDigit > 9);
     {
        inputNumber = sumofDigits;
        sumofDigits = 0;
     }
     
  }
printf("lucky number is %d\n",sumofDigits);
 return 0;
}











