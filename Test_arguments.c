#include <stdio.h>

int main (int argc, char* *argv)
{
    //printf("argc = %d\n", argc);
    // argc = 0 est le nom de l'ex�cutable
    // argc = 1 � argc est le nombre de param�tres pass�s
    if (argc > 1) {
        for (int i = 1; i < argc; i++){
            if (i == argc - 1) {
                printf("%s", *argv);
            } else {
                printf("%s ", *argv++);
            }
        }
    }
}