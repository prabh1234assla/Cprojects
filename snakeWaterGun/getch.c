#include <stdio.h>
#include <conio.h>

int main(){
    printf("to_print - ");
    getch();
    printf("\n");
    printf("to_print - ");
    getche();
    printf("\n");
    printf("to_print - ");
    getchar();
    fflush(stdin);
    printf("to_print - ");
    fgetchar();
    printf("\n");
    putch('a');
    putchar('b');
    fputchar('c');
    printf("\n");
return 0;
}