#include <stdio.h>

int main(void){
    #ifdef __WINDOWS__
        printf("Windows OS");
        return 0;
    #endif

    #ifdef __APPLE__
        printf("Apple OS");
        return 0;
    #endif

    #ifdef __linux__
        printf("Linux OS");
        return 0;
    #endif

    #ifdef MSDOS
        printf("MS DOS");
        return 0;
    #endif

    #ifdef __FreeBSD__
        printf("Free BSD");
        return 0;
    #endif

    #ifdef __CYGWIN32__
        printf("CYGWIN 32");
        return 0;
    #endif

    #ifdef __OpenBSD__
        printf("Open BSD");
        return 0;
    #endif

    #ifdef __unix__
        printf("Unix");
        return 0;
    #endif

    printf("Os not found");
    return 0;
}