// Write a C program to calculate the area of a circle given its radius.

#include <stdio.h>
#define PI 3.1416  // π ৰ মান সংজ্ঞায়িত কৰা হৈছে

int main() {
    float radius, area;

    // ব্যৱহাৰকাৰীৰ পৰা বৃত্তটোৰ ব্যাসাৰ্ধ লোৱা হৈছে
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // ক্ষেত্ৰফল গণনা কৰা হৈছে (π * r * r)
    area = PI * radius * radius;

    // গণনা কৰা ক্ষেত্ৰফলটো প্ৰিন্ট কৰা হৈছে
    printf("Area of the circle = %.2f\n", area);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
