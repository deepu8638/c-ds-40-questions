// Write a C program to merge two files into a third file.
#include <stdio.h>

int main() {
    FILE *file1, *file2, *file3;
    char ch;

    // প্ৰথমখন ফাইল read মোডত খুলা হৈছে
    file1 = fopen("file1.txt", "r");

    // দ্বিতীয়খন ফাইল read মোডত খুলা হৈছে
    file2 = fopen("file2.txt", "r");

    // তৃতীয়খন ফাইল write মোডত খুলা হৈছে (merge কৰিবলৈ)
    file3 = fopen("merged.txt", "w");

    // যিকোনো ফাইল খুলিবলৈ ব্যর্থ হ'লে ত্ৰুটি দেখুওৱা হৈছে
    if (file1 == NULL || file2 == NULL || file3 == NULL) {
        printf("Error opening one of the files.\n");
        return 1;
    }

    // file1.txt ৰ সকলো অক্ষৰ merged.txt লৈ কপি কৰা হৈছে
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file3);
    }

    // file2.txt ৰ সকলো অক্ষৰ merged.txt লৈ কপি কৰা হৈছে
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file3);
    }

    // সকলো ফাইল বন্ধ কৰা হৈছে
    fclose(file1);
    fclose(file2);
    fclose(file3);

    // সফলতা বাৰ্তা প্ৰিন্ট কৰা হৈছে
    printf("Files merged successfully into merged.txt\n");

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
