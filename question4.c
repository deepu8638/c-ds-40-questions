// Write a C program to swap two number using a temporary variable
#include <stdio.h>

int main() {
    int a, b, temp;

    // দুটা সংখ্যা input লোৱা হৈছে
    printf("প্ৰথম সংখ্যা দিয়ক: ");
    scanf("%d", &a);

    printf("দ্বিতীয় সংখ্যা দিয়ক: ");
    scanf("%d", &b);

    // সলনি কৰাৰ আগৰ অৱস্থা দেখুওৱা হৈছে
    printf("সলনি কৰাৰ আগত - a = %d, b = %d\n", a, b);

    // এটা অস্থায়ী ভেৰিয়েব্‌ল ব্যৱহাৰ কৰি সলনি কৰা হৈছে
    temp = a;
    a = b;
    b = temp;

    // সলনি কৰাৰ পাছতৰ অৱস্থা দেখুওৱা হৈছে
    printf("সলনি কৰাৰ পাছত - a = %d, b = %d\n", a, b);

    return 0;
}
