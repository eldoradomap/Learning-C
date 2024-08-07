#include <stdio.h>
int main() {
    int c, nl, tb, bl;

    bl = 0;
    tb = 0;
    nl = 0;

    while((c = getchar()) != EOF) {

        if (c == '\n') {
            ++nl;
            printf("NEW LINES: %d\n", nl); 
        }

        else if (c == '\t') { 
            ++tb;
            printf("TABS: %d\n", tb);
        }
        else if (c == ' ') {
            ++bl;
            printf("SPACES: %d\n", bl);
        }
    }
}

