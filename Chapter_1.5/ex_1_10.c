#include <stdio.h>

int main()
{

    int ch;

    while ((ch = getchar()) != EOF)
    {

        if (ch == '\t')
        {
            printf("\\t");
            ch = getchar();
        }

        if (ch == '\\')
        {
            printf("\\\\");
            ch = getchar();
        }

        if (ch == '\b')
        {
            printf("\\b");
            ch = getchar();
        }

        printf("%c", ch);
    }
    printf("\n\n");

    return 0;
}