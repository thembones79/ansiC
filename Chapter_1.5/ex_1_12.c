#include <stdio.h>

int main()
{

    int ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ')
        {
            printf("\n");
            while (ch == ' ')
            {
                ch = getchar();
            }
        }
        printf("%c", ch);
    }

    printf("\n");

    return 0;
}