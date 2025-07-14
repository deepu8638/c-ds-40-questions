// Write a C program to count vowels, consonants, digits, and white spaces in a string.
#include <stdio.h>

int main() {
    char str[200];
    int i, vowels = 0, consonants = 0, digits = 0, spaces = 0;

    // ব্যৱহাৰকাৰীৰ পৰা ষ্ট্ৰিংটো লোৱা হৈছে
    printf("Enter a string: ");
    gets(str);  // বা fgets(str, sizeof(str), stdin);

    // ষ্ট্ৰিংটোৰ প্ৰতিটো অক্ষৰ পৰ্যালোচনা কৰা হৈছে
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // অক্ষৰটো স্বৰবৰ্ণ নে নাই চোৱা হৈছে
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;  // স্বৰবৰ্ণৰ সংখ্যা বৃদ্ধি কৰা হৈছে
        }
        // যদি অক্ষৰটো বর্ণমালাৰ অংশ হয় আৰু স্বৰবৰ্ণ নহয়
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;  // ব্যঞ্জনবর্ণৰ সংখ্যা বৃদ্ধি কৰা হৈছে
        }
        // যদি সংখ্যা হয়
        else if (ch >= '0' && ch <= '9') {
            digits++;  // সংখ্যা গণনা কৰা হৈছে
        }
        // যদি খালী স্থান হয়
        else if (ch == ' ') {
            spaces++;  // খালী স্থান গণনা কৰা হৈছে
        }
    }

    // সকলো গণনাৰ ফলাফল প্ৰিন্ট কৰা হৈছে
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("White spaces: %d\n", spaces);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
