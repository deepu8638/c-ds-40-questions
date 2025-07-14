// Write a C program to input two numbers and print their sum.

#include <stdio.h>

int main() {
    int num1, num2, sum;

    // ব্যৱহাৰকাৰীৰ পৰা দুটা সংখ্যা লোৱা হৈছে
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // দুটা সংখ্যাৰ যোগফল গণনা কৰা হৈছে
    sum = num1 + num2;

    // যোগফলটো স্ক্ৰীণত প্ৰদর্শন কৰা হৈছে
    printf("Sum = %d\n", sum);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
