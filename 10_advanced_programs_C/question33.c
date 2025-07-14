// Write a C program to use recursion to find the nth Fibonacci number.

#include <stdio.h>

// এই ফাংশনটো ৰেকাৰ্ছন ব্যৱহাৰ কৰি n-তম ফিব'নাচ্চি সংখ্যা উলিয়ায়
int fibonacci(int n) {
    if (n == 0)
        return 0;  // প্ৰথম ফিব'নাচ্চি সংখ্যা হৈছে 0
    else if (n == 1)
        return 1;  // দ্বিতীয় ফিব'নাচ্চি সংখ্যা হৈছে 1
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // আগৰ দুটা সংখ্যাৰ যোগফল
}

int main() {
    int n;

    // ব্যৱহাৰকাৰীৰ পৰা n-ৰ মান লোৱা হৈছে
    printf("Enter the position (n) to find the nth Fibonacci number: ");
    scanf("%d", &n);

    // যদি n ঋণাত্মক হয়, তেন্তে ত্ৰুটি বাৰ্তা দেখুওৱা হৈছে
    if (n < 0) {
        printf("Fibonacci number is not defined for negative positions.\n");
    } else {
        // ৰেকাৰ্ছন ব্যৱহাৰ কৰি ফলাফল প্ৰিন্ট কৰা হৈছে
        printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
