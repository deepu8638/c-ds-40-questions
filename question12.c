// Write a C program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // ব্যৱহাৰকাৰীৰ পৰা এটা সংখ্যা লোৱা হৈছে
    printf("Enter a number: ");
    scanf("%d", &num);

    // সংখ্যাটোৰ প্ৰতিটো অংকৰ যোগফল গণনা কৰা হৈছে
    while (num != 0) {
        digit = num % 10;    // শেষ অংকটো উলিওৱা হৈছে
        sum += digit;        // অংকটো যোগফলত যোগ কৰা হৈছে
        num = num / 10;      // সংখ্যাটো ১০ দিয়ে ভাগ কৰা হৈছে
    }

    // যোগফলটো স্ক্ৰীণত প্ৰদর্শন কৰা হৈছে
    printf("Sum of digits = %d\n", sum);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
