// Write a C program to copy one string to another string.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    // ব্যৱহাৰকাৰীৰ পৰা প্ৰথমটো ষ্ট্ৰিং (str1) লোৱা হৈছে
    printf("Enter a string: ");
    gets(str1);  // বা fgets(str1, sizeof(str1), stdin);

    // str1 ৰ অক্ষৰবোৰ str2 ত কপি কৰা হৈছে
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }

    // নতুন ষ্ট্ৰিংটোত শেষৰ অক্ষৰটো '\0' দিয়া হৈছে
    str2[i] = '\0';

    // কপি কৰা ষ্ট্ৰিংটো প্ৰিন্ট কৰা হৈছে
    printf("Copied string: %s\n", str2);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
