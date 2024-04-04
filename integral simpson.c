#include <stdio.h>

int data[5] = {1, 4, 9, 16, 25};

float integralSimpson(float lower, float upper, float interval)
{
    return ((lower + upper) * interval) / 2;
}

int main()
{
    data[-1] = 0;

    float result;
    for(int i = 0; i < 5; i++)
    {
        result = result + integralSimpson(data[i-1], data[i], 1);
        printf("%.2f\n", integralSimpson(data[i-1], data[i], 1));
    }
    printf("Integral = %.2f", result);
}
