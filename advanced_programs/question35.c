// Write a C program to swap two numbers using pointers.

#include <stdio.h>

// এই ফাংশনটো পইণ্টাৰ ব্যৱহাৰ কৰি দুইটা সংখ্যাৰ মান আদান-প্ৰদান (swap) কৰে
void swap(int *a, int *b) {
    int temp;

    // *a মানটো temp ত সংৰক্ষণ কৰা হৈছে
    temp = *a;

    // *b মানটো *a ত সংৰক্ষণ কৰা হৈছে
    *a = *b;

    // temp মানটো *b ত সংৰক্ষণ কৰা হৈছে
    *b = temp;
}

int main() {
    int num1, num2;

    // ব্যৱহাৰকাৰীৰ পৰা num1 আৰু num2 লোৱা হৈছে
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    // সলনি কৰাৰ আগত মানটো প্ৰিন্ট কৰা হৈছে
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // swap ফাংশনক কল কৰি মানটো সলনি কৰা হৈছে
    swap(&num1, &num2);

    // সলনি কৰাৰ পিছত মানটো প্ৰিন্ট কৰা হৈছে
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
