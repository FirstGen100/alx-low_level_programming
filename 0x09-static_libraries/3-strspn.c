#include "main.h"
#include <string.h>

unsigned int _strspn(char *s, char *accept)
{
    char *p;
    char *a;
    size_t count = 0;

    for (p = s; *p != '\0'; p++) {
        for (a = accept; *a != '\0'; a++) {
            if (*p == *a) {
                count++;
                break;
            }
        }
        if (*a == '\0') {
            return count;
        }
    }

    return count;
}
