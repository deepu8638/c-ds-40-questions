// Write a C program to delete an element from an array.
#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    // ব্যৱহাৰকাৰীৰ পৰা এৰেকেৰ আকাৰ লোৱা হৈছে
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // এৰেকেৰ উপাদানবোৰ লোৱা হৈছে
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // মোচন কৰিবলৈ ইচ্ছা কৰা উপাদানটোৰ অৱস্থান লোৱা হৈছে
    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // যদি অৱস্থান সঠিক নহয়, তেন্তে ত্ৰুটি প্ৰদৰ্শন কৰা হৈছে
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        // নিৰ্দিষ্ট অৱস্থানৰ উপাদানটো আঁতৰোৱা হৈছে আৰু পিছৰ উপাদানবোৰ আগলৈ সরোৱা হৈছে
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;  // উপাদান সংখ্যাটো ১ ৰে হ্ৰাস কৰা হৈছে

        // মোচন কৰাৰ পিছত নতুন এৰেকেৰ উপাদানবোৰ প্ৰিন্ট কৰা হৈছে
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
