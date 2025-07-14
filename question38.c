// Write a C program to read and write data to a file.
#include <stdio.h>

int main() {
    FILE *fptr;
    char name[50];
    int age;

    // ফাইলটো "write" (লিখা) মোডত খুলা হৈছে
    fptr = fopen("student.txt", "w");

    // যদি ফাইল খুলিব নোৱাৰে, তেন্তে ত্ৰুটি দেখুওৱা হৈছে
    if(fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // ব্যৱহাৰকাৰীৰ পৰা নাম আৰু বয়স লোৱা হৈছে
    printf("Enter name: ");
    scanf(" %[^\n]", name);

    printf("Enter age: ");
    scanf("%d", &age);

    // ফাইলত তথ্য লিখা হৈছে
    fprintf(fptr, "Name: %s\nAge: %d\n", name, age);

    // ফাইলটো বন্ধ কৰা হৈছে
    fclose(fptr);

    // পুনৰ ফাইলটো "read" (পঢ়া) মোডত খুলা হৈছে
    fptr = fopen("student.txt", "r");

    // যদি ফাইল খুলিব নোৱাৰে, তেন্তে ত্ৰুটি দেখুওৱা হৈছে
    if(fptr == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    char ch;

    // ফাইলৰ ভিতৰৰ তথ্যটো একে একে অক্ষৰকৈ পঢ়ি প্ৰিন্ট কৰা হৈছে
    printf("\nReading data from file:\n");
    while((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }

    // ফাইলটো বন্ধ কৰা হৈছে
    fclose(fptr);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
