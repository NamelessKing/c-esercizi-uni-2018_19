#include <stdio.h>
#include <stdlib.h>

int main()
{



    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        puts("Couldn't open file");
        exit(0);
    }
    else
    {
        /*fputs("GeeksforGeeks", fp);
        puts("Done");*/

        while(!feof(fp)){
            printf("%s",fgets(fp));
        }
    }

    printf("\n");

    fclose(fp);
    return 0;
}
