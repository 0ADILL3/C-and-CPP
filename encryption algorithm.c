#include <stdio.h>
char plainText[50] = "0";
int key1, key2, key3, key4, key5;

int stringLength(char *var)
{
    int i = 0;
    while((var[i] >= 31) && (var[i] <= 126))
    {
        i++;
    }
    return i;
}

void encrypt(char *textIn, int lowerLimit, int upperLimit, int initialShiftPosition, int numberShift, int shiftInterval)
{
    int charLength;
    charLength = stringLength(textIn);
    char text[(charLength + 1)];
    for(int i = 0; i < charLength; i++)
    {
        text[i] = textIn[i];
    }

    int result;
    int shiftPosition = 0;
    int charRange;
    shiftPosition = shiftPosition + initialShiftPosition;
    charRange = upperLimit - lowerLimit;

    for(int x = 0; x < charLength; x += shiftInterval)
    {
        shiftPosition = shiftPosition + numberShift;
        result = text[x] + shiftPosition;

        while(result > upperLimit)
        {
            printf("\n%3i %c >> %3i >> %3i %c <<", textIn[x], textIn[x], shiftPosition, result, result);
            result = result - charRange;
            shiftPosition = shiftPosition / 5;
        }
        while(result < lowerLimit)
        {
            printf("\n%3i %c >> %3i >> %3i %c <<", textIn[x], textIn[x], shiftPosition, result, result);
            result = result + charRange;
            shiftPosition = shiftPosition / 5;
        }
        printf("\n%3i %c >> %3i >> %3i %c", textIn[x], textIn[x], shiftPosition, result, result);
        text[x] = result;
    }
    text[charLength] = 0;

    printf("\n\nEncrypted Text : %s\n", text);
}

int main()
{
    //do{
        printf("Plain Text  : ");
        fgets(plainText, sizeof(plainText), stdin); //fgets salah //tidak input ulang //scanf bisa
        printf("\nLower Limit : ");
        scanf("%i", &key1);
        printf("Upper Limit : ");
        scanf("%i", &key2);
        printf("Initial     : ");
        scanf("%i", &key3);
        printf("Number      : ");
        scanf("%i", &key4);
        printf("Interval    : ");
        scanf("%i", &key5);
        encrypt(plainText, key1, key2, key3, key4, key5);
    //} while(key1 != 0);
}
