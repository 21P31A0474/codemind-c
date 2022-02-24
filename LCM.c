#include<stdio.h>
int main()
{
    int a,b;
    //printf("Enter two numbers 
");
    scanf("%d", &a);
    scanf("%d", &b);
    
    /*
       *LCM is always greater than or equal to the-
       *Maximum of the given two numbers
    */
     int lcm = (a > b) ? a : b;
     
     //loop until divisible by both
     while(1)
     {
      if(lcm%a==0 && lcm%b==0)
        break;
       lcm++;
     }
     //output of the LCM
      printf("%d",lcm);
      return 0;
}