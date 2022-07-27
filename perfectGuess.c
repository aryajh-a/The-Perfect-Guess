#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <string.h> 

int main()
{
    int Rnumber, num, count, tot, min = 101;
    char user[20], winner[20];
    // generating random numbers :
    srand(time(0));
    Rnumber = rand() % 100 + 1; // so that number belongs to[1,100]

    printf("\nENTER NUMBER OF PLAYERS : \n");
    scanf("%d", &tot);

    for (int i = 0; i < tot; i++)
    {
        printf("Enter user %d name : \n", i + 1);
        scanf("%s", &user);
        int loop = 0, count = 0;
        do
        {
            printf("GUESS THE NUMBER(1-100):\n");
            scanf("%d", &num);
            count += 1;
            loop += 1;
            if (num > Rnumber)
                printf("LOWER NUMBER PLEASE :\n");
            else if (num < Rnumber)
                printf("HIGHER NUMBER PLEASE :\n");

        } while (num != Rnumber);
        if (count < min)
        {
            min = count;
            strcpy(winner, user);
        }
        printf("CORRECT! %s GUESSED IT IN %d ATTEMPTS\n", user, loop);
    }
    printf("WINNER : %s", winner);
    return 0;
}
