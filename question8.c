// Write a C program to find the factorial of a given number.
#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    // ব্যৱহাৰকাৰীৰ পৰা এটা সংখ্যা লোৱা হৈছে
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // নেগেটিভ সংখ্যাৰ বাবে ত্ৰুটি বার্তা দেখুওৱা হৈছে
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // ১ৰ পৰা num পৰ্যন্ত গুণ কৰি factorial গণনা কৰা হৈছে
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }

        // ফলাফলটো স্ক্ৰীণত দেখুওৱা হৈছে
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
