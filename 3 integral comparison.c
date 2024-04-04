#include <stdio.h>

float err[10] = {10, 8, 5, 4, 3, 2, 2, 1, 1, 0};
float integral1, integral2, integral3;

int main()
{
    err[-1] = 0;
    for(int i = 0; i < 10; i++)
    {
        integral1 = integral1 + err[i];
        integral2 = integral2 + (err[i-1] + err[i]) / 2;
        if((i % 2) == 0)
        {
            integral3 = integral3 + (err[i-1] + (2 * err[i])) / 3;
        }
        else if((i % 2) == 1)
        {
            integral3 = integral3 + (err[i-1] + err[i]) / 3;
        }
        printf("integral 1 = %.1f \t integral 2 = %.1f \t integral 3 = %.1f \n", integral1, integral2, integral3);
    }
}
