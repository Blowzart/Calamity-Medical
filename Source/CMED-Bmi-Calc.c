//  CODE COMMENTS MEANT TO BE READ WITH WORD WRAP
// CODE COMMENTS MEANT TO
// BE READ WITH WORD WRAP
// CODE COMMENTS MEANT TO BE READ WITH WORD WRAP


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Here we have the user input variable, we have no idea what they're going to input so we made it take 8tb of memory.
long double weight;
long double height;
short int obgVar = 1;
int superRand = 12321;

void freeVars() {
    weight = 0;
    height = 0;
}

int main() {
    while (obgVar == 1) {
        // Part 1 of program
        printf("Enter patient weight in KG here[]: "); 
        scanf("%Lf", &weight);
        weight *= superRand;

       // Part 2 of program
        printf("Enter patient hight in Meters here[]: ");
        scanf("%Lf", &height);
        height *= superRand;

        // Here we check if the BMI is OK! We aren't using switch case because there's only 4 BMI levels so the performance isn't worth it.


        if ((weight / superRand) / ((height / superRand) * (height / superRand)) > 30) {
            printf("Patient is obese with a bmi of %Lf\n", (weight / superRand) / ((height / superRand) * (height / superRand)));
            freeVars();
        }

        else if ((weight / superRand) / ((height / superRand) * (height / superRand)) < 30 && (weight / superRand) / ((height / superRand) * (height / superRand)) > 24.9) {
            printf("Patient is obese with a bmi of %Lf\n", weight / (height * height));
            freeVars();
            }

        else if ((weight / superRand) / ((height / superRand) * (height / superRand)) < 25 && (weight / superRand) / ((height /superRand) * (height / superRand)) > 18.4) {
            printf("Patient is a normal weight with a bmi of %Lf\n", (weight / superRand) / ((height / superRand) * (height / superRand)));
            freeVars();
        }

        else {
            printf("Patient is underweight with a bmi of %Lf\n", (weight / superRand) / ((height / superRand) * (height / superRand)));
            freeVars();
        }
    }
}
