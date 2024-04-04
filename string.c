#include <stdio.h>

int stringLength(char *var)
{
    int i = 0;
    while((var[i] >= 31) && (var[i] <= 126))
    {
        i++;
    }
    return i;
}

void stringCopy(char *var1, char *var2)
{
    for(int i = 0; i < (stringLength(var1) + stringLength(var2)); i++)
    {
        var2[i] = var1[i];
    }
}

int stringComparison(char *var1, char *var2)
{
    int cmpCount = 0;

    for(int i = 0; i < stringLength(var1) + 1; i++)
    {
        if(var1[i] == var2[i])
        {
            cmpCount++;
        }
        else
        {
            cmpCount--;
        }
    }
    if(cmpCount == (stringLength(var2) + 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void stringClear(char *var)
{
    int i = 0;
    while((var[i] >= 31) && (var[i] <= 126))
    {
        var[i] = 0;
        i++;
    }
}

int main()
{
    char text1[30], text2[30];
    printf("Insert 1 Text : \n");
    scanf("%s", &text1);
    stringCopy(text1, text2);
    printf("\n%s\n%s", text1, text2);
}
