// Write a C program to use recursion to find the factorial of a number.

#include <stdio.h>

// এই ফাংশনটো ৰেকাৰ্ছন (recursion) ব্যৱহাৰ কৰি ফেক্টৰিয়েল গণনা কৰে
int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;  // 0! আৰু 1! ৰ মান 1 হয়
    else
        return n * factorial(n - 1);  // n * (n-1)! ৰ ওপৰত আধাৰিত
}

int main() {
    int num;

    // ব্যৱহাৰকাৰীৰ পৰা এটা সংখ্যা লোৱা হৈছে
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // যদি সংখ্যা ঋণাত্মক হয়, তেন্তে ত্ৰুটি প্ৰদৰ্শন কৰা হৈছে
    if(num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // ৰেকাৰ্ছন ব্যৱহাৰ কৰি ফলাফল প্ৰিন্ট কৰা হৈছে
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
