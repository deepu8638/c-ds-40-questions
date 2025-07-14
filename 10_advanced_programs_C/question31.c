// Write a C program to implement a simple calculator using switch-case.

#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // ব্যৱহাৰকাৰীৰ পৰা অপাৰেটৰ আৰু দুটা সংখ্যা লোৱা হৈছে
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // অপাৰেটৰৰ ভিত্তিত গণনা কৰা হৈছে
    switch(operator) {
        case '+':
            result = num1 + num2;  // যোগ কৰা হৈছে
            break;
        case '-':
            result = num1 - num2;  // বিয়োগ কৰা হৈছে
            break;
        case '*':
            result = num1 * num2;  // গুণ কৰা হৈছে
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;  // ভাগ কৰা হৈছে
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;  // Division by zero ৰ ক্ষেত্ৰত প্ৰোগ্ৰাম শেষ
            }
            break;
        default:
            // অপাৰেটৰ অযোগ্য হ’লে ত্ৰুটি বাৰ্তা প্ৰিন্ট কৰা হৈছে
            printf("Invalid operator.\n");
            return 1;
    }

    // গণনাৰ ফলাফল প্ৰিন্ট কৰা হৈছে
    printf("Result: %.2lf\n", result);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
