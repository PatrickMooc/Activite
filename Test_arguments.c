#include <stdio.h>

int main (int argc, char* argv[])
{
    //printf("argc = %d\n", argc);
    // argc = 0 est le nom de l'ex�cutable
    // argc = 1 � argc est le nombre de param�tres pass�s
    if (argc > 1) {
        for (int i = 1; i < argc; i++){
            //printf("argv[%d] = %s\n", i, argv[i]);
            //printf("%s ", argv[i]);
            if (i == argc - 1) {
                printf("%s", argv[i]);
            } else {
                printf("%s ", argv[i]);
            }
        }
    }
}
