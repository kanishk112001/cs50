#include <cs50.h>
#include <stdio.h>

int main(void)
{ int height;
  printf("\n enter the height of pyramid:");
  scanf("%d",&height);
  while(!(height>=1&&height<=8))
  { 
      printf("\n wrong value entered! try again:");
      scanf("%d",&height);
  }    
  printf("\n");
  for(int i=1;i<=height;i++)
  {
      for(int j=1;j<=height-i;j++)
      {
          printf(" ");
      }
      for(int k=height;k>height-i;k--)
      {
          printf("#");
      }
      printf("  ");
      for(int l=1;l<=i;l++)
      {
          printf("#");
      }
      printf("\n");
  }
}
