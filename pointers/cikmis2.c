#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int team1 = 0;
    int team2 = 0;

    int outcome;

    while (team1 < 25 && team2 < 25){
        outcome = rand()%2;
        if(outcome == 0){
            team1++;
        }
        else{
            team2++;
        }
        printf("%2d - %2d\n", team1, team2);
    }
    return 0;
}