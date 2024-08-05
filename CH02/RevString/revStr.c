#include <stdio.h>
int main() {
    int length();
    char reg_list[] = "This is my string that im reversing"; /*Defining the character array to be reversed*/
    int reg_list_length = length(reg_list); /*Using the length function to get the length of the to be reversed character array*/
    char rev_list[reg_list_length]; /*Defining the reversed character array with the same length as the to be reversed character array*/
    int i = reg_list_length - 1; /*Defining i as the length of the to be reversed character array*/
    int j;
    while ( i >= 0 ) /*While i is not equal to 0, this is so we can start at the end of the non-reversed character array*/ 
    {
        rev_list[j] = reg_list[i]; /*Set the jth element of the reversed character array to the ith element of the non-reversed character array*/
        i--; /*Subtract 1 from i -> 4, 3, 2, 1, 0*/
        j++; /*Add 1 to j -> 0, 1, 2, 3, 4, 5*/
    }

    rev_list[reg_list_length] = '\n';

    if ( reg_list_length == 0 ) {
        printf("The string is empty/n");
    }
    else
        printf("%s\n", rev_list); /*Will output the reversed character array*/

}
int length(self) /*Function to grab the length of a character array*/
    char self[];
{
    int i;
    for(i=0; self[i]; i++);
    return i;
}