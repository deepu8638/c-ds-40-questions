// Write a C program to demonstrate pointer arithmetic.

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    // পইণ্টাৰটোক এৰেকৰ প্ৰথম উপাদানটোত সংলগ্ন কৰা হৈছে
    ptr = arr;

    // পইণ্টাৰ অৰিথমেটিক দেখুওৱাৰ বাবে উপাদানবোৰ প্ৰিন্ট কৰা হৈছে
    printf("Accessing elements using pointer arithmetic:\n");

    for(i = 0; i < 5; i++) {
        // *(ptr + i) ব্যৱহাৰ কৰি উপাদান প্ৰাপ্ত কৰা হৈছে
        printf("Value at position %d = %d\n", i, *(ptr + i));
    }

    // পইণ্টাৰ ইনক্ৰিমেণ্ট (++) কৰি উপাদান প্ৰিন্ট কৰা হৈছে
    printf("\nUsing pointer increment:\n");
    for(i = 0; i < 5; i++) {
        printf("Value = %d\n", *ptr);
        ptr++;  // পইণ্টাৰটোক পাছৰ উপাদানলৈ আগবঢ়োৱা হৈছে
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
