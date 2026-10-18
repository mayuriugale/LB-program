#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int Addition(int a, int b)
{
    return a+b;
}


int main()
{
    assert(Addition(10,11) ==22);
    assert(Addition(-10,20) ==10);
    assert(Addition(-10,-11) == -30);
    return EXIT_SUCCESS;
    
}