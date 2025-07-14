// 	Write a C program to find the length of a string without using library 
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    // ব্যৱহাৰকাৰীৰ পৰা ষ্ট্ৰিংটো লোৱা হৈছে
    printf("Enter a string: ");
    gets(str);  // বা fgets(str, sizeof(str), stdin);

    // ষ্ট্ৰিংটোৰ দৈৰ্ঘ্য (length) গণনা কৰা হৈছে
    while (str[i] != '\0') {
        length++;  // প্ৰতিটো অক্ষৰৰ বাবে ১ যোগ কৰা হৈছে
        i++;
    }

    // দৈৰ্ঘ্যটো স্ক্ৰীণত প্ৰদৰ্শন কৰা হৈছে
    printf("Length of the string = %d\n", length);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
