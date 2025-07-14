// Write a C program to check whether a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, isPalindrome = 1;

    // ব্যৱহাৰকাৰীৰ পৰা ষ্ট্ৰিং লোৱা হৈছে
    printf("Enter a string: ");
    gets(str);  // বা fgets(str, sizeof(str), stdin);

    // ষ্ট্ৰিংটোৰ দৈৰ্ঘ্য গণনা কৰা হৈছে
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // ষ্ট্ৰিংটো পলিণ্ড্ৰোম নে নহয়, সেয়া পৰীক্ষা কৰা হৈছে
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            isPalindrome = 0;  // যদি কোনো অক্ষৰ মিল নাখায়, তেন্তে পলিণ্ড্ৰোম নহয়
            break;
        }
    }

    // ফলাফলটো প্ৰিন্ট কৰা হৈছে
    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
