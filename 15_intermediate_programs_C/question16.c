// Write a C program to find the GCD and LCM of two numbers.
#include <stdio.h>

int main() {
    int num1, num2, i, gcd, lcm;

    // ব্যৱহাৰকাৰীৰ পৰা দুটা সংখ্যা লোৱা হৈছে
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // GCD (সৰ্বাধিক সাধারণ গুণিতক) বিচৰা হৈছে
    for(i = 1; i <= num1 && i <= num2; ++i) {
        if(num1 % i == 0 && num2 % i == 0)
            gcd = i; // i সংখ্যাটোক GCD হিচাপে সংৰক্ষণ কৰা হৈছে
    }

    // LCM (সৰ্বনিম্ন সাধারণ গুণিতক) গণনা কৰা হৈছে
    lcm = (num1 * num2) / gcd;

    // GCD আৰু LCM ফলাফলবোৰ প্ৰিন্ট কৰা হৈছে
    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
