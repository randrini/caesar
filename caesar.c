#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void  ceasar(int key, char *argv[]){
    int l;
    int i;
    char    *str;    
    
    l = strlen(argv[2]);
    str = argv[2];
    i = 0;
    while (i < l)
    {
        if (islower(str[i]) &&  isalpha(str[i]))
            str[i] = (str[i] - 'a' + key) % 26  + 97;
        else  if (isupper(str[i]) && isalpha(str[i]))
            str[i] = (str[i] - 'A' + key) % 26 + 65;
        //printf  ("%c",  str[i]);
        i++;
    }
    printf("%s\n", str);
}

int   main(int argc, char *argv[])
{
    int key;
    

  if (argc >= 3 && argv[1][0] == '-')   
  {               
        key = atoi(&argv[1][1]);
        ceasar(key, argv);
        
        

/*
        if (!(argv[counter] == argv[argc]))
            printf("%s", " ");
        counter++;
        */
  }
  return (0);

}
