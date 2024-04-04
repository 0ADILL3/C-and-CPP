#include <stdio.h>

int shiftRegister(int *dataIn, int dataLengthIn, int inputIn)
{
    for(int i = 0; i < (dataLengthIn - 1); i++)
    {
        dataIn[i] = dataIn[i + 1];
    }
    dataIn[dataLengthIn - 1]  = inputIn;
    return 0;
}

int main()
{
    int dataLength;
    int input;

    printf("data length : ");
    scanf("%i", &dataLength);
    int data[dataLength];
    for(int j = 0; j < dataLength; j++)
    {
        data[j] = 0;
    }

    do{
        //system("cls");

        for(int k = 0; k < dataLength; k++)
        {
            printf("data %2i : %i\n", k, data[k]);
        }

        printf("\ndata input : ");
        scanf("%i", &input);
        printf("\n");
        shiftRegister(data, dataLength, input);
    } while(input != 999);
}
