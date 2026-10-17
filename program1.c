#include<stdio.h>
void PrintEven(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t", i * 2);
    }
}
int main()
{
    int ivalue = 0;
    printf("enter number\n");
    scanf("%d",&ivalue);
    PrintEven(ivalue);
    return 0;
}
    