#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    float owed;
    printf("Change owed:");
    scanf("%f\n",&owed);
    int cents=round(owed*100);
    int quarter=cents/25;
    int dimes=(cents%25)/10;
    int nickels=((cents%25)%10)/5;
    int pennies=(((cents%25)%10)%5);
    int coins=quarter+dimes+nickels+pennies;
    printf("%d\n",coins);
}
