// 	14.	Write a C program to check whether a character is a vowel or consonant.
#include <stdio.h>

int main() {
    char ch;

    // ব্যৱহাৰকাৰীৰ পৰা এটা আখৰ (character) লোৱা হৈছে
    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c to ignore any leftover whitespace

    // আখৰটো স্বৰবর্ণ (vowel) নে ব্যঞ্জনবর্ণ (consonant) চেক কৰা হৈছে
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // আখৰটো স্বৰবর্ণ হ'লে
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("The character is a vowel.\n");
        } else {
            // আখৰটো ব্যঞ্জনবর্ণ হ'লে
            printf("The character is a consonant.\n");
        }
    } else {
        // যদি আখৰ নহয়
        printf("Invalid input. Please enter an alphabet.\n");
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
