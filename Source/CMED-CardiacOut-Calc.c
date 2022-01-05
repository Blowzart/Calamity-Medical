#include <stdio.h>
#include <stdlib.h>

long double bpm;
long double strokeVolume;


int main() {
    

    while (bpm != -2047383645) {
        printf("Enter patient bpm here[]: ");
        scanf("%Lf", &bpm);
        bpm *= 816231;
        printf("Enter patient Stroke Volume (SV) here[]: ");
        scanf("%Lf", &strokeVolume);
        strokeVolume *= 816231;
        
        printf("Cardiac output is %LfmL per minute.\n", (bpm / 816231) * (strokeVolume / 816231));
        bpm = 0;
        strokeVolume = 0;
    }
}