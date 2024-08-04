/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int o;
    printf("choose :1)addition 2)substraction\n");
     int a;
     scanf("%d",&a);
     int x, y;
     
     if(a==1){
         printf("please enter the numbers");
     scanf("%d",&x);
     scanf("%d",&y);
         o=x+y;
         printf("addition: %d",o);
     }
    

    return 0;
}