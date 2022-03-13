#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <unistd.h>

void win(void) {
    printf("You're a lucky guy. Welcome to heaven :\n");
    system("cat flag.txt");
}

void init();

int main() {

    init();
    printf("Open the right door a hundred times, to open heaven's gates\n");
    printf("You have 20 seconds or the gates will be closed forever...\n\n");
    printf(
           "  __________  __________  __________ \n"
           " |  __  __  ||  __  __  ||  __  __  |\n"
           " | |  ||  | || |  ||  | || |  ||  | |\n"
           " | | 0||  | || | 1||  | || | 2||  | |\n"
           " | |__||__| || |__||__| || |__||__| |\n"
           " |  __  __()||  __  __()||  __  __()|\n"
           " | |  ||  | || |  ||  | || |  ||  | |\n"
           " | |  ||  | || |  ||  | || |  ||  | |\n"
           " | |__||__| || |__||__| || |__||__| |\n"
           " |__________||__________||__________|\n\n"
           );


    int sec = 21 , end = time(NULL) + sec, right_door, choosed_door;

    for( int i = 1 ; i < 101 ; i++ )
    {
        srand(time(NULL)%sec);
        right_door = rand()%3;

        printf("This is door %d, choose well...\n",i);
        scanf ("%i",&choosed_door);

        sec = end - time(NULL);

        if( sec <= 1 || right_door != choosed_door)
        {
            printf("YOU SHALL NOT PASS !!!\n");
            return 0;
        }

        usleep(100000);
    }

    win();
}

void init() {
    setvbuf(stdout, 0, 2, 0);
    setvbuf(stdin, 0, 2, 0);
}
