#include <stdio.h>

int main(){

  int num1 = 1;
  int num2 = 20;
  int num3 = 300;
  int num4 = 500;
  int num5 = -4000;

  printf("%3d\n",num1); // width
  printf("%-3d\n",num2); // width and alignment
  printf("%04d\n",num3); // width and free space is filled with 0
  printf("%+d\n",num4); // +ve or -ve (+)
  printf("%+d\n",num5); // +ve or -ve (-)


  float num6 = 3.14159;
  float num7 = -3.14159;
  float num8 = 19.69;

  printf("%.f\n",num6); // default width 6
  printf("%.2f\n",num6); // precision
  printf("%.1f\n",num8); // value gets rounded off to 1 decimal place
  // we can combine all together
  printf("%+7.2f\n",num7);
  // {flage +} {width 7} {precision 2} {type f}

  return 0;
}