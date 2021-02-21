// beep.c - DOS Coreutils beep command source file
// Written by Ercan Ersoy.

#include <dos.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i = 1;
    int frequency = 750;
    int length = 1000;

    if(!strcmp(argv[i], "--help"))
    {
        printf("beep - Output sound from PC speaker for DOS Coreutils.\r\n");
        printf("  beep [options]\r\n");
        printf("  beep --help|--version\r\n\r\n");
        printf("Options:\r\n");
        printf("  -f Frequency: Specify sound's frequency.\r\n");
        printf("  -l Length: Specify sound's length as milliseconds.\r\n");

        return 0;
   }

    if(!strcmp(argv[i], "--version"))
    {
        printf("DOS Coreutils version 1.0\r\n");

        return 0;
    }

    for(i; i < argc; i++)
    {
        if(!strcmp(argv[i], "-f"))
        {
            i++;

            frequency = atoi(argv[i]);

            continue;
        }
        else if(!strcmp(argv[i], "-l"))
        {
            i++;

            length = atoi(argv[i]);
        }
        else
        {
            printf("Invalid syntax.");

            return 1;
        }
    }

    sound(frequency);
    delay(length);
    nosound();

    return 0;
}
