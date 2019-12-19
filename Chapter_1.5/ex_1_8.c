#include <stdio.h>

int main()
{

    int character, new_line = 0, tab = 0, space = 0;

    while ((character = getchar()) != EOF)
    {
        if (character == '\n')
            ++new_line;

        if (character == '\t')
            ++tab;

        if (character == ' ')
            ++space;
    }
    printf("There are:\n%d new lines,\n%d tabs,\n%d spaces.\n", new_line, tab, space);

    return 0;
}