// Write a C program to implement dynamic memory allocation using malloc() and free().
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    // ব্যৱহাৰকাৰীৰ পৰা উপাদানৰ সংখ্যা (size) লোৱা হৈছে
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // malloc() ব্যৱহাৰ কৰি ডাইনামিক মেম'ৰী এল'কেচন কৰা হৈছে
    arr = (int*) malloc(n * sizeof(int));

    // যদি malloc() ব্যৰ্থ হয়, তেন্তে ত্ৰুটি বাৰ্তা দেখুওৱা হৈছে
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // ব্যৱহাৰকাৰীৰ পৰা এৰেকেৰ উপাদানবোৰ লোৱা হৈছে
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // দিয়া উপাদানবোৰ স্ক্ৰীণত প্ৰিন্ট কৰা হৈছে
    printf("The entered elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // free() ব্যৱহাৰ কৰি ডাইনামিক মেম'ৰী মুক্ত কৰা হৈছে
    free(arr);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
