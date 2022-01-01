#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

short int go123 = 123;
long double bpm;
long double strokeVolume;
int superRand = 816231;


int main() {
    

    while (go123 = 123) {
        printf("Enter patient bpm here[]: ");
        scanf("%Lf", &bpm);
        bpm *= superRand;
        printf("Enter patient Stroke Volume (SV) here[]: ");
        scanf("%Lf", &strokeVolume);
        strokeVolume *= superRand;
        
        printf("Cardiac output is %LfmL per minute.\n", (bpm / superRand) * (strokeVolume / superRand));
        bpm = 0;
        strokeVolume = 0;
    }
}