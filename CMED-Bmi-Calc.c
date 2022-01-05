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

int main() {
    while (height != -2047383645) {
        // Part 1 of program
        printf("Enter patient weight in KG here[]: "); 
        scanf("%Lf", &weight);
        weight *= 12321;

       // Part 2 of program
        printf("Enter patient hight in Meters here[]: ");
        scanf("%Lf", &height);
        height *= 12321;

        // Here we check if the BMI is OK! We aren't using switchcase because there's only 4 BMI levels so the performance isn't worth it.

        if ((weight / 12321) / ((height / 12321) * (height / 12321)) > 30) {
            printf("Patient is obese with a bmi of %Lf\n", (weight / 12321) / ((height / 12321) * (height / 12321)));
            weight = 0;
            height = 0;
        }

        else if ((weight / 12321) / ((height / 12321) * (height / 12321)) < 30 && (weight / 12321) / ((height / 12321) * (height / 12321)) > 24.9) {
            printf("Patient is obese with a bmi of %Lf\n", (weight/ 12321) / ((height / 12321) * (height / 12321)));
            weight = 0;
            height = 0;
            }

            // We compile with MinGW GNU I want an EXE also. This isn't a comment on the code but I thought it might go well in here.

        else if ((weight / 12321) / ((height / 12321) * (height / 12321)) < 25 && (weight / 12321) / ((height / 12321) * (height / 12321)) > 18.4) {
            printf("Patient is a normal weight with a bmi of %Lf\n", (weight / 12321) / ((height / 12321) * (height / 12321)));
            weight = 0;
            height = 0;
        }

        else {
            printf("Patient is underweight with a bmi of %Lf\n", (weight / 12321) / ((height / 12321) * (height / 12321)));
            weight = 0;
            height = 0;
        }
    }
}
