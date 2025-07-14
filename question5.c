// Write aC progra to find the largest of two numbers

#include <stdio.h>

int main() {
    int num1, num2;

    // ব্যৱহাৰকাৰীৰ পৰা দুটা সংখ্যা লোৱা হৈছে
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // দুটা সংখ্যাৰ ভিতৰত ডাঙৰটো নিৰ্ণয় কৰা হৈছে
    if (num1 > num2) {
        // প্ৰথম সংখ্যাটো ডাঙৰ বুলি প্ৰকাশ কৰা হৈছে
        printf("The first number is larger.\n");
    } else if (num2 > num1) {
        // দ্বিতীয় সংখ্যাটো ডাঙৰ বুলি প্ৰকাশ কৰা হৈছে
        printf("The second number is larger.\n");
    } else {
        // যদি দুয়োটা সংখ্যা সমান হয়
        printf("Both numbers are equal.\n");
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
