#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int bof(char *str, int studentID)
{
    int bufSize;
    int a = 12;
    int b = 18;

    bufSize = 12 + studentID % 32; //20

    char buffer[bufSize];

    strcpy(buffer, str);

    return 1;
}

int main(int argc, char **argv[])
{

    if (argc < 2)
    {
        printf("Usage: %s <paylaod>\n", argv[0]);
        exit(0);
    }

    int studentID = 31865224; // ENTER YOUR STUDENT ID HERE

    bof(argv[1], studentID);

    printf("Returned Properly\n");
    return 1;
}