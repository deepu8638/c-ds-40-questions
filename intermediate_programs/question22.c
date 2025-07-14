// 	Write a C program to perform matrix multiplication.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    // প্ৰথম আৰু দ্বিতীয় ম্যাট্ৰিক্সৰ শাৰী আৰু স্তম্ভৰ সংখ্যা লোৱা হৈছে
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // যদি প্রথমৰ স্তম্ভ আৰু দ্বিতীয়ৰ শাৰী সমান নহয়, তেন্তে গুণফল সম্ভৱ নহয়
    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];

    // প্ৰথম ম্যাট্ৰিক্সৰ উপাদান লোৱা হৈছে
    printf("Enter elements of the first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // দ্বিতীয় ম্যাট্ৰিক্সৰ উপাদান লোৱা হৈছে
    printf("Enter elements of the second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // গুণফল ম্যাট্ৰিক্সটো শূন্যেৰে আৰম্ভ কৰা হৈছে
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // দুইটো ম্যাট্ৰিক্সৰ গুণফল গণনা কৰা হৈছে
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // গুণফল ম্যাট্ৰিক্সটো প্ৰিন্ট কৰা হৈছে
    printf("Resultant matrix after multiplication:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
