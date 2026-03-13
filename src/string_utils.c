#include <ctype.h>
#include "string_utils.h"

int str_length(const char *s)   // Fix 1: use const char*
{
    int len = 0;

    while(s[len] != '\0')
        len++;

    return len;
}

void str_reverse(char *s)
{
    int len = str_length(s);

    for(int i = 0; i < len / 2; i++)
    {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

void str_to_upper(char *s)
{
    int i = 0;

    while(s[i] != '\0')
    {
        s[i] = (char)toupper((unsigned char)s[i]);  // Fix 2: cast to unsigned char before toupper
        i++;
    }
}