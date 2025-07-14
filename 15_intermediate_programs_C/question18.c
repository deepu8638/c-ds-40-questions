// Write a C program to print all prime numbers between 1 and 100.
#include <stdio.h>

int main() {
    int i, j, isPrime;

    // ১ ৰ পৰা ১০০ লৈকে সকলো প্ৰাইম সংখ্যা প্ৰিন্ট কৰা হৈছে
    printf("Prime numbers between 1 and 100 are:\n");

    for (i = 2; i <= 100; i++) {
        isPrime = 1;  // প্ৰত্যেক সংখ্যাৰ বাবে প্ৰাথমিকভাৱে প্ৰাইম বুলি ধৰা হৈছে

        // ২ ৰ পৰা i-1 লৈকে বিভাজ্যতা পৰীক্ষা কৰা হৈছে
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;  // যদি কোনো সংখ্যাৰে বিভাজ্য হয়, তেন্তে প্ৰাইম নহয়
                break;
            }
        }

        // যদি সংখ্যাটো প্ৰাইম হয়, তেন্তে প্ৰিন্ট কৰা হৈছে
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    // নতুন শাৰীলৈ যাওঁক
    printf("\n");

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
