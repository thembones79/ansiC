#include <stdio.h>

#define IN_WORD 1
#define OUT_OF_WORD 0

int main()
{

    int c, character, line, word, state;

    state = OUT_OF_WORD;
    line = word = character = 0;

    while ((c = getchar()) != EOF)
    {
        ++character;
        if (character == '\n')
            ++line;
        if (character == ' ' || character == '\n' || character == '\t')
            state = OUT_OF_WORD;
        else if (state == OUT_OF_WORD)
        {
            state = IN_WORD;
            ++word;
        }
    }

    printf("characters: %d, words: %d, lines: %d\n", character, word, line);

    return 0;
}