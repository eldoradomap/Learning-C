// #include <stdio.h>
// int main() {
//     printf("THE FARENHEIT AND CELSIUS TABLEAU!!!\n");

//     int lower, upper, step;
//     float faren, celsius;

//     lower = 0;
//     upper = 300;
//     step = 20;
//     faren = lower;

//     while ( faren <= upper ) {
//         celsius = (5.0/9.0) * (faren-32.0);
//         printf("%4.0f %6.1f\n", faren, celsius);
//         faren+=step;
//     }
    
// }

#include <stdio.h>

#define LOWER 0 /*lower limit of table*/
#define UPPER 300 /*upper limit of table*/
#define STEP 20 /*step size*/


int main() {
    int faren;
    for( faren=UPPER; faren>=LOWER; faren-=STEP ) {
        printf("%4d -> %6.1f\n", faren, (5.0/9.0)*(faren-32.0));
    }
}