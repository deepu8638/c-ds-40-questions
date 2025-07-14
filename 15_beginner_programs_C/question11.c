// Write a C program to check whether a number is prime or not.

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // ব্যৱহাৰকাৰীৰ পৰা এটা সংখ্যা লোৱা হৈছে
    printf("Enter a number: ");
    scanf("%d", &num);

    // ১ তলৰ সংখ্যা প্ৰাইম নহয় বুলি পৰীক্ষা কৰা হৈছে
    if (num <= 1) {
        // যদি সংখ্যাটো ১ বা তলৰ হয়, তেন্তে ই প্ৰাইম নহয়
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // ২ ৰ পৰা num/2 পৰ্যন্ত বিভাজ্যতা পৰীক্ষা কৰা হৈছে
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            // যদি সংখ্যাটো i দিয়ে বিভাজ্য হয়, তেন্তে ই প্ৰাইম নহয়
            isPrime = 0;
            break;
        }
    }

    // ফলাফলটো প্ৰিন্ট কৰা হৈছে
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
