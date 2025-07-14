// Write a C program to print the multiplication table of a given number.

#include <stdio.h>

int main() {
    int num, i;

    // ব্যৱহাৰকাৰীৰ পৰা এটা সংখ্যা লোৱা হৈছে
    printf("Enter a number: ");
    scanf("%d", &num);

    // সংখ্যাটোলৈ গুণন তালিকা (multiplication table) প্ৰিন্ট কৰা হৈছে
    printf("Multiplication table of %d:\n", num);
    for (i = 1; i <= 10; ++i) {
        // গুণফলটো স্ক্ৰীণত দেখুওৱা হৈছে
        printf("%d x %d = %d\n", num, i, num * i);
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
