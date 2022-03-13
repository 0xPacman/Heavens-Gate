#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int sec = 21 , end = time(NULL) + sec, right_door, choosed_door;

for( int i = 1 ; i < 101 ; i++ )
    {
        srand(time(NULL)%sec);
        right_door = rand()%3;

        printf("%d\n", right_door);
                fflush(stdout);
        sec = end - time(NULL);

        usleep(100000);
    }
}
