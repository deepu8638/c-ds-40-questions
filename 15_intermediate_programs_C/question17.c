// Write a C program to count the number of digits in an integer.
#include <stdio.h>

int main() {
    int num, count = 0;

    // ব্যৱহাৰকাৰীৰ পৰা এটা সংখ্যা লোৱা হৈছে
    printf("Enter an integer: ");
    scanf("%d", &num);

    // যদি সংখ্যাটো ০ হয়, তেন্তে অংকৰ সংখ্যা ১ বুলি গণ্য কৰা হৈছে
    if (num == 0) {
        count = 1;
    } else {
        // সংখ্যাটোৰ প্ৰতিটো অংক গণনা কৰা হৈছে
        while (num != 0) {
            num = num / 10;  // শেষ অংকটো আঁতৰোৱা হৈছে
            count++;         // অংকসংখ্যা ১ যোগ কৰা হৈছে
        }
    }

    // মুঠ অংকৰ সংখ্যা প্ৰিন্ট কৰা হৈছে
    printf("Number of digits = %d\n", count);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
