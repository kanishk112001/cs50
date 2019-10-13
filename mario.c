#include <cs50.h>
#include <stdio.h>

int main(void)
{ int h,t=1;
  while (t==1)
     { 
       printf("height");
       scanf("%d",&h) ;
       if(h<9 && h>0)
       t=0;
     } 
 for(int i=h;i>0;i--)
 {    printf("\n");
     for(int j=0;j<i-1;j++)
     {
      printf(" ");   
     }
     for(int hash=h;hash>i-1;hash--)
     {
         printf("#");
     }
 }
}
