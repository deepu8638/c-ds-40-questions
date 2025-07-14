// Write a C program to convert Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // ব্যৱহাৰকাৰীৰ পৰা তাপমাত্ৰা Celsius-ত লোৱা হৈছে
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Celsius-ৰ মান Fahrenheit-লৈ ৰূপান্তৰ কৰা হৈছে
    fahrenheit = (celsius * 9 / 5) + 32;

    // ৰূপান্তৰিত ফলাফলটো প্ৰিন্ট কৰা হৈছে
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
