#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void  caesar(int key, int argc, char *argv[]){
    int i;
    unsigned int j; 

    i = 2;
    while (i < argc)
    {
        j = 0;
        while (j < strlen(argv[i]))
        {
            if (islower(argv[i][j]) &&  isalpha(argv[i][j]))
                argv[i][j] = (argv[i][j] - 'a' + key) % 26  + 97;
            else  if (isupper(argv[i][j]) && isalpha(argv[i][j]))
                argv[i][j] = (argv[i][j] - 'A' + key) % 26 + 65;
            j++;
        }
        if (!(argv[i] == argv[argc])) 
           printf("%s", " ");
        printf("%s", argv[i]);
        i++;
    }
}

int   main(int argc, char *argv[])
{
    int key;

    if (argc >= 3 && argv[1][0] == '-')       
    {               
        key = atoi(&argv[1][1]);
        caesar(key, argc, argv);
    } 
    return (0);
}
