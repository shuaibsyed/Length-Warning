/* LengthWarning by Shuaib Syed(ssyed1, 117832990, 0106) */

/* I pledge on my honor that I have not given or received any
unauthorized assitance on this assignment. */

/* This program gets an input file from lengthwarning.c and provides a
summmary. It tells the user exactly which of the lines are longer than the
limit set in lengthwarning.c.*/
#include <stdio.h>

int main(void) {
    /* c: variable for the current character
       n: variable for the line number */
    char curr;
    int num;
    /* reads the first character of teh input file */
    scanf("%c", &curr);
    while (!feof(stdin)) {
        /* If current charcater is an asterisk then print out the
        line number */
        if (curr == '*') {
            scanf(" %d", &num);
            printf("%d\n", num);
        }
        scanf("%c", &curr);
    }
    return 0;
}
