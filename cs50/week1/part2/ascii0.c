// Explicitly casts chars to ints
#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("Name: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c %i\n", s[i], (int) s[i]);
    }
}
