/* LengthWarning by Shuaib Syed(ssyed1, 117832990, 0106) */

/* I pledge on my honor that I have not given or received any
unauthorized assitance on this assignment. */

/* This program reads an input file and checks of any of its lines are
longer than 80 characters. If all the lines are under 80 characters
then it prints them back out with line numbers. If the lines are
longer than 80 characters then it will put an asterisk in front of the
line number and then highlight which characters are above the limit.
*/
#include <stdio.h>

/* The character array that is used to store the input */
static char arr[10000];

int main() {
    /* i,j  : the index of the for loops below
       count: index for the character array based on number of
       characters line_count: counter for the number of lines
       line_length: counter for how long the line needs to be */
    int i, j, count = 0;
    int line_count = 1;
    int line_length = 0;

    /* read the first character of the input file, if it actives the
     * EOF  */
    scanf("%c", &arr[count]);

    while (!feof(stdin)) {
        /* If the character is neither a tab nor a new line character,
         increment count and line_length by one */
        if (arr[count] != '\n' && arr[count] != '\t') {
            count++;
            line_length++;

            /* If the character is a tab then increment count by one
            and line_length by 8-(line_length % 8) */
        } else if (arr[count] == '\t') {
            line_length = line_length + (8 - (line_length % 8));
            count++;
            /* prints out the line if under 80 characters */
        } else if (count <= 80) {
            printf("%6d: ", line_count);
            /*prints out line*/
            for (i = 0; i <= count; i++) {
                printf("%c", arr[i]);
            }
            line_count++;

            /* resets array counter and line length in order to start
             * a new line
             */
            count = 0;
            line_length = 0;

            /* print line if over 80 characters */
        } else if (count > 80) {
            printf("*%5d: ", line_count);
            for (i = 0; i <= count; i++) {
                printf("%c", arr[i]);
            }
            /* prints the 88 spaces */
            for (i = 0; i < 88; i++) {
                printf("%c", ' ');
            }
            /* prints the carrots */
            for (j = 80; j < line_length; j++) {
                printf("^");
            }
            printf("\n");
            /* Increments the line counter and resets the line length
            and array counter in order to start new line */
            line_count++;
            count = 0;
            line_length = 0;
        }

        scanf("%c", &arr[count]);
    }

    return 0;
}
