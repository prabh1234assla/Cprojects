#include <stdio.h>
#include <time.h>
#include <termios.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#include "__getkey.h"
#include "__gotoxy_and_cursor.h"

int main()
{

    int comp;
    char cc, loopContinue = 'y';

    while (loopContinue == 'y')
    {

        srand(time(0));
        comp = rand() % 3 + 1;

        printf("\n\nstone(*), paper(_), scissor(^) - ");
        scanf("%c", &cc);
        loopContinue = getkey();

        if (comp == 1)
        {
            // comp is STONE(*)

            if (cc != '*')
            {

                if (cc == '_')
                    printf("*(computer) %c(user)\n--------------------------WON------------------------------\n\n\n\n", cc);
                else
                    printf("*(computer) %c(user)\n--------------------------LOST-----------------------------\n\n\n\n", cc);
            }
            else
                printf("*(computer) %c(user)\n------------------------------DRAW-----------------------------\n\n\n\n", cc);
        }

        if (comp == 2)
        {
            // comp is SCISSOR(^)

            if (cc != '^')
            {

                if (cc == '*')
                    printf("^(computer) %c(user)\n--------------------------WON------------------------------\n\n\n\n", cc);
                else
                    printf("^(computer) %c(user)\n--------------------------LOST-----------------------------\n\n\n\n", cc);
            }
            else
                printf("^(computer) %c(user)\n------------------------------DRAW-----------------------------\n\n\n\n", cc);
        }

        if (comp == 3)
        {
            // comp is PAPER(_)

            if (cc != '_')
            {

                if (cc == '^')
                    printf("_(computer) %c(user)\n--------------------------WON------------------------------\n\n\n\n", cc);
                else
                    printf("_(computer) %c(user)\n--------------------------LOST-----------------------------\n\n\n\n", cc);
            }
            else
                printf("_(computer) %c(user)\n------------------------------DRAW-----------------------------\n\n\n\n", cc);
        }

        printf("CONTINUE (y/n):");
        loopContinue = getkey();
        fflush(stdin);

        clscrn;
    }

    printf("thanks for using our GAME.\n");
    return 0;
}