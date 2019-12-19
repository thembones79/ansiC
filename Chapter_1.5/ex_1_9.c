#include <stdio.h>

int main()
{

    int ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ')
        {
            printf("%c", ch);

            while (ch == ' ')
            {
                ch = getchar();
            }
        }

        printf("%c", ch);
    }
    printf("\n\nBye, bye - 4 spaces    and tab               ,and tab\t.\n");

    return 0;
}