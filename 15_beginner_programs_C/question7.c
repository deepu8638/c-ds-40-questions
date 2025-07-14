// Write a C program to check whether a year is a leap year or not.
#include <stdio.h>

int main() {
    int year;

    // ব্যৱহাৰকাৰীৰ পৰা এখন বৰ্ষ লোৱা হৈছে
    printf("Enter a year: ");
    scanf("%d", &year);

    // লীপ বৰ্ষ চাবলৈ নিৰ্ধাৰণ কৰা হৈছে
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        // যদি শর্ত পূৰণ হয়, তেন্তে লীপ বৰ্ষ
        printf("%d is a leap year.\n", year);
    } else {
        // যদি শর্ত পূৰণ নহয়, তেন্তে লীপ বৰ্ষ নহয়
        printf("%d is not a leap year.\n", year);
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
