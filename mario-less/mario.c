#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size = 0;
    do
    {
        size = get_int("size: ");
    }
    while (size < 1 || size > 8);

    for (int a = 1; a <= size; a++)
    {
        for (int c = size; c > a; c--)
        {
            printf(" ");
        }
        printf("#");

        for (int b = 1; b < a; b++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// print column as many as given input
// go to the next line