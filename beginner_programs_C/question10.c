// Write a C program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // ব্যৱহাৰকাৰীৰ পৰা এটা সংখ্যা লোৱা হৈছে
    printf("Enter a number: ");
    scanf("%d", &num);

    // সংখ্যাটোৰ প্ৰতিটো অংক উলটাই নতুন সংখ্যা বনোৱা হৈছে
    while (num != 0) {
        remainder = num % 10;         // শেষ অংকটো লোৱা হৈছে
        reversed = reversed * 10 + remainder;  // অংকটো নতুন সংখ্যাত যোগ কৰা হৈছে
        num = num / 10;               // মূল সংখ্যাটোক ১০ দিয়ে বিভাজন কৰা হৈছে
    }

    // উলটাই তৈরি কৰা সংখ্যাটো প্ৰিন্ট কৰা হৈছে
    printf("Reversed number = %d\n", reversed);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
