// 	Write a C program to implement a structure for storing student information and display it.
#include <stdio.h>

// structure ঘোষণা কৰা হৈছে, য’ত ছাত্ৰৰ তথ্য সংৰক্ষণ কৰা হ’ব
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    // ব্যৱহাৰকাৰীৰ পৰা ছাত্ৰৰ তথ্য লোৱা হৈছে
    printf("Enter student roll number: ");
    scanf("%d", &s.roll);

    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);  // স্পেচ সহ নাম ল’বলৈ

    printf("Enter student marks: ");
    scanf("%f", &s.marks);

    // ছাত্ৰৰ তথ্য প্ৰিন্ট কৰা হৈছে
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
