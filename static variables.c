#include <stdio.h>

void count()
{
    static int i = 0;
    int j = 0;
    i++;
    j++;
    printf("%i %i\n", i, j);
}

int main()
{
    int in = 0;
    do{
        scanf("%i", &in);
        count();
    } while(in == 1);
}
