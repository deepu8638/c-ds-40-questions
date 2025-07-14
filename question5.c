// Write aC progra to find the largest of two numbers

#include <stdio.h>

int main() {
    int num1, num2;

    // দুটা সংখ্যা input লোৱা হৈছে
    printf("প্ৰথম সংখ্যা দিয়ক: ");
    scanf("%d", &num1);

    printf("দ্বিতীয় সংখ্যা দিয়ক: ");
    scanf("%d", &num2);

    // বৃহত্তম সংখ্যাটো চিনাক্ত কৰি print কৰা হৈছে
    if (num1 > num2) {
        printf("বৃহত্তম সংখ্যা হৈছে: %d\n", num1);
    } else if (num2 > num1) {
        printf("বৃহত্তম সংখ্যা হৈছে: %d\n", num2);
    } else {
        // যদি দুয়োটা সংখ্যা সমান হয়
        printf("দুয়োটা সংখ্যা সমান।\n");
    }

    return 0;
}
