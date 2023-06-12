#include "main.h"
#include <stdlib.h>
#include <string.h>

char* argstostr(int ac, char** av) {
    if (ac == 0 || av == NULL) {
        return NULL;
    }
    int totalLength = 0;
    for (int i = 0; i < ac; i++) {
        totalLength += strlen(av[i]) + 1;  // add 1 for the '\n'
    }
    char* str = malloc((totalLength + 1) * sizeof(char));  // add 1 for the null terminator
    if (str == NULL) {
        return NULL;
    }
    int index = 0;
    for (int i = 0; i < ac; i++) {
        strcpy(&str[index], av[i]);
        index += strlen(av[i]);
        str[index] = '\n';
        index++;
    }
    str[index] = '\0';
    return str;
}
