#include <stdio.h>
#include <string.h>

int main() {/*
  printf("Name   : Roksana Akter\n");
  printf("DOB    : December 27,2000\n");
  printf("Mobile : +880-13077447846\n");
  printf("We are using c18!\n");
  printf("######\n#\n#\n######\n#\n#\n#\n");
  printf("    ######\n  ##      ##\n #\n #\n #\n #\n #\n  ##      ##\n    ######\n");
  */
  char ch='X';
  char c='M';
  char C='L';
  int height=7;
  int length =5;
  int perimeter=2*(height+length);
  int area=height*length;
  printf("Perimeter of the rectangle = %d inches\n",perimeter);
  printf("Area of the rectangle = %d square inches\n",area);
  printf("The reverse of %c%c%c is %c%c%C\n",ch,c,C,C,c,ch);
  return 0;
}    