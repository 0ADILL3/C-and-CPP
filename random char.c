#include <stdio.h>

int main()
{
    unsigned long x = 65;
    unsigned long d = 0;
    unsigned int i = 1;
    unsigned long dIn;
    //scanf("%i", &dIn);
    while(i <= 100)
    {
        d = 9;
        x = x + d;
        if(x >= 91)
        {
            x = x - 26;
        }
        printf("%3i. --> %2i = %c\n",i , x, x);
        i++;
    }
}
