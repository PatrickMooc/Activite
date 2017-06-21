#include <stdio.h>

int main (int argc, char* *argv)
{
    //printf("argc = %d\n", argc);
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