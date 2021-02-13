char debugFilePath[100];
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define __DEBUG_FILE_PATH_INDEX__ 1
int main(int argc, char **argv)
{
    int ch = 0;
    //char str[100];

    for (ch = 0; ch < 100; ch++)
    {
        if (argv[__DEBUG_FILE_PATH_INDEX__][ch] == '\0')
            break;
        debugFilePath[ch] = argv[__DEBUG_FILE_PATH_INDEX__][ch]; //
    }
    fclose(fopen(debugFilePath, "w"));
    return 0;
}