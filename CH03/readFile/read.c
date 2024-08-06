// #include <stdio.h>

// #define EOF -1

// int main() {
//     int c;
//     c = getchar();

//     while( c != EOF ) {
//         putchar(c);
//         c = getchar();
//     }
// }

// #include <stdio.h>

// int main() {
//     int c;
//     while((c = getchar()) != EOF ) {
//         putchar(c);
//     }
// }

// #include <stdio.h>
// int main() {
//     long nd;

//     nd = 0;
//     while(getchar() != EOF) {
//         ++nd;
//         printf("%ld\n", nd);
//     }
// }

#include <stdio.h>
int main() {
    double nc;
    for( nc = 0; getchar() != EOF; ++nc) {
        ;
        printf("%.0f\n", nc);
    }
}