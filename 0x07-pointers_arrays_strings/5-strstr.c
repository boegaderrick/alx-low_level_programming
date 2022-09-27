#include "main.h"

/**
* _strstr - locates substring
* @haystack: string
* @needle: substring
* Return: Null or pointer
*/

char *_strstr(char *haystack, char *needle)
{
    int i, j;
    
    for (i = 0; haystack[i] != '\0'; i++)
    {
        j = 0;
        while (needle[j] != '\0')
        {
            if (needle[j] == haystack[i])
            {
                char *ptr = &haystack[i];
                return (ptr);
            }
            else
            {
                break;
            }
        }
    }
    return(NULL);
}
