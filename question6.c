// Write a C program to check whether a number is even or odd.
#include <stdio.h>

int main() {
    int number;

    // ব্যৱহাৰকাৰীৰ পৰা এটা সংখ্যা লোৱা হৈছে
    printf("Enter a number: ");
    scanf("%d", &number);

    // সংখ্যাটো যুগ্ম নে বিজোড় চাবলৈ পৰীক্ষা কৰা হৈছে
    if (number % 2 == 0) {
        // যদি সংখ্যাটো ২ দ্বাৰা বিভাজ্য হয়, তেন্তে এইটো যুগ্ম সংখ্যা
        printf("The number is even.\n");
    } else {
        // নহ'লে এইটো বিজোড় সংখ্যা
        printf("The number is odd.\n");
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
