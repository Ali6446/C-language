
//     int n = get_n();
//     moew(n);
// }

// int get_n(void)
// {
//     int n;
//     do
//     {
//         n = get_int("What's n? ");
//     }
//     while (n < 1);
//     return n;
// }

// void moew(int times)
// {
//     for (int i = 0; i < times; i++)
//     {
//         printf("meow\n");
//     }

#include <stdio.h>

#define DECK_SIZE 52

int main(void)
{
    for (int i = 0; i < DECK_SIZE; i++)
    {
        printf("Card %i\n", i);
    }
}
