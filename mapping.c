#include <stdio.h>

float mapping(float var, float x1, float x2, float y1, float y2)
{
    if(var < x1) {var = y1;}
    else if(var > x2) {var = y2;}
    else
    {
        var = (y1 + ((var - x1) * ((y2 - y1) / (x2 - x1))));
    }
    return var;
}

int main()
{
    int num;
    //scanf("%i", &num);
    for(num = 20; num <= 100; num++)
    {
        printf("%5i -> %f\n", num, mapping(num, 20, 100, 11, 21));
    }
}
