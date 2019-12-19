#include <stdio.h>

int main()
{

    int character, new_line;
    new_line = 0;
    while ((character = getchar()) != EOF)
        if (character == '\n')
            ++new_line;
    printf("%d\n", new_line);

    return 0;
}