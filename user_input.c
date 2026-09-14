#include <stdio.h>

/*
 * Task 2: Program with User Input
 * Prompts the user for height, bank balance, and phone number,
 * then displays the values back in a clear, formatted manner.
 *
 * Note: phone number is read as a string (char array), not a
 * numeric type. A Kenyan phone number (e.g. 0712345678) starts
 * with a leading zero and has 10 digits - storing it as int/long
 * would drop the leading zero and risks overflow. A string
 * preserves it exactly as entered.
 */
int main(void)
{
    float height;              // height in meters (or cm - user's choice)
    double bankBalance;        // bank balance in Kenya Shillings
    char phoneNumber[15];      // phone number stored as a string

    // Prompt for height
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    // Prompt for bank balance
    printf("Enter your bank balance (KES): ");
    scanf("%lf", &bankBalance);

    // Prompt for phone number (string, so the leading 0 is kept)
    printf("Enter your phone number: ");
    scanf("%14s", phoneNumber);

    // Display all values back in a clear, formatted way
    printf("\n--- Your Details ---\n");
    printf("Height:       %.2f meters\n", height);
    printf("Bank Balance: KES %.2f\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);

    return 0;
}