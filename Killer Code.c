#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("test.txt", "r");
    char n = 0;
    char a;
    while (a = getchar() != EOF)
    {
        if (a == '.')
        {
            printf("%c",n+65);
            n = 0;
        }
        else if (a == ' ') n++;
        else if (a == ',') n *= 8;
    }
}
