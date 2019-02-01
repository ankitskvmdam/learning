// Using GCC compiler.

#include <stdio.h>
#include <sys/syscall.h>

int main(void){
    system("clear");    //To clear the console.

    char freeze;         //Use to freeze the screen

    //Code for displaying hello world message

    printf("\n\t\t*****************");
    printf("\n\t\t*  Hello World  *");
    printf("\n\t\t*****************\n\n\n");
    
    printf("Press enter to terminate...");
    printf("\e[?25I");      //Move the cursor to the end of the line
    freeze = getchar();     //Freezing the screen. Screen pause because program need some input.
    system("clear");        //Clearing the screen before terminating program.

    return 0;
}