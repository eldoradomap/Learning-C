#include <stdio.h>
int main() {
    
    int c, i;
    char str[100];

    while(( c = getchar() ) != EOF ) {
        putchar(c);
        str[i] = c;
        ++i;
        printf("%d\n", length(str));
    }
}

int length(self)
    char self[];
{

    int i;
    for( i=0; self[i]; i++ );
    return i;


}