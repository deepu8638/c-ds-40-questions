// Write a C program to find the largest element in an array.
#include <stdio.h>

int main() {
    int n, i;

    // ব্যৱহাৰকাৰীৰ পৰা এৰাকেৰ আকাৰ (size) লোৱা হৈছে
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // এৰাকেৰ উপাদানবোৰ ব্যৱহাৰকাৰীৰ পৰা লোৱা হৈছে
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];  // প্ৰথম উপাদানটোকে প্ৰাথমিকভাৱে সৰ্ববৃহৎ বুলি ধৰা হৈছে

    // এৰাকেৰ সকলো উপাদানৰ সৈতে তুলনা কৰি সৰ্ববৃহৎটো বিচৰা হৈছে
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];  // নতুন সৰ্ববৃহৎ উপাদান সংৰক্ষণ কৰা হৈছে
        }
    }

    // সৰ্ববৃহৎ উপাদানটো স্ক্ৰীণত প্ৰদৰ্শন কৰা হৈছে
    printf("The largest element in the array is: %d\n", max);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
