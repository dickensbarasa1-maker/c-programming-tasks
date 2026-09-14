//Single line comment
//program to display "Hello World"

/*
    Multi-line commentz
    * This program displays a list of academic units offered this semester.
    * Each unit is printed on a new line, numbered for clarity.
    *
    * Author: Dickens
    * Registration Number: BCS-05-0573/2026
    * Description: Hello World program in C language
    * Date: sep 13 2026
    * EDG Version: 1.0.0
    */

//pre-processor directives
#include <stdio.h>

/*
 * Task 1: Display Units on Offer
 * Prints all academic units offered this semester,
 * each on a new line, in a numbered, neatly formatted list.
 */
int main(void)
{
    // Print header
    printf("Units Offered This Semester:\n");

    // Print each unit on its own line, numbered
    printf("1. Introduction to Programming\n");
    printf("2. Data Structures\n");
    printf("3. Computer Networks\n");
    printf("4. Database Systems\n");
    printf("5. Software Engineering\n");

    return 0;
}