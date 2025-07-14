// Write a C program to swap two number using a temporary variable

#include <stdio.h>

int main() {
    int a, b, temp;

    // ব্যৱহাৰকাৰীৰ পৰা দুটা সংখ্যা লোৱা হৈছে
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // পূৰ্বৰ মান সংৰক্ষণ কৰিবলৈ এটা অস্থায়ী চলক ব্যৱহাৰ কৰা হৈছে
    temp = a;
    a = b;
    b = temp;

    // পৰিৱর্তনৰ পিছত ফলাফল প্ৰদর্শন কৰা হৈছে
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // প্ৰোগ্ৰামটো সফলতাৰে সমাপ্ত হৈছে
    return 0;
}
'