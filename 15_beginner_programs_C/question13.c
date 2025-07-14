// Write a C program to find the Fibonacci series up to N terms.

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    // ব্যৱহাৰকাৰীৰ পৰা কিমানটা পদ (terms) লাগে, সেয়া লোৱা হৈছে
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // যদি n ≤ 0 হয়, তেন্তে ত্ৰুটি দেখুওৱা হৈছে
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    // Fibonacci ধাৰাটোৰ প্ৰথম n টা পদ প্ৰিন্ট কৰা হৈছে
    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; ++i) {
        printf("%d ", first);  // বৰ্তমান পদটো প্ৰিন্ট কৰা হৈছে
        next = first + second; // পৰৱৰ্তী পদ গণনা কৰা হৈছে
        first = second;        // আগৰ দ্বিতীয়টো এতিয়া প্ৰথম হ'ল
        second = next;         // গণনা কৰা নতুন পদটো দ্বিতীয় হ'ল
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
