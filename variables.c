#include<stdio.h>
#include<stdbool.h> // for bool data type


int main(){

  int age=10;
  printf("The age is %d",age);
  // here %d is a format specifier and d = decimal

  float price=10.5;
  printf("The price is %f\n",price);
  // here %f is a format specifier and f = float

  // c has default behaviour of showing 6 digits after decimal
  // we can handle that by using %.2f <==> 2 digits after decimal
  printf("The price is %.2f\n",price);


  // here we can see that in float we can only store 6 digits after decimal point
  // but in double we can store 15 digits

  double pi = 3.141592653589793238462643383279502884197169399375105820974944;

  printf("The value of pi is %.20f\n",pi);

  char grade = 'A';
  // while working with the character we need to use single quotes ''
  // char only stores a single character
  printf("The grade is %c\n",grade);

   char name[] = "COCO";
   // here [] is a special operator called array operator
   // it is used to store multiple characters in a single variable
   printf("The name is %s\n",name);
   // here %s is a format specifier and s = string

  bool isOnline = true;
  printf("The value of isOnline is %d\n",isOnline);

  // true == 1
  // false == 0
  // bool has only this two values

  if(isOnline){
    printf("The user is online\n");
  }else{
    printf("The user is offline\n");
  }

  /*
  int = 4 bytes
  float = 4 bytes
  double = 8 bytes
  char = 1 byte
  bool = 1 byte, requires <stdbool.h>
  char[] = n bytes
  */

  return 0;
}

