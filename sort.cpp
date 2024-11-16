#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

void sort(int arr[], int count) {
    int a;
    int j = 0;
    while (j < count) {
        int m = 0;
        while (m < count - j - 1) {
            if (arr[m] < arr[m + 1]) {
                a = arr[m];
                arr[m] = arr[m + 1];
                arr[m + 1] = a;
            }
            m++;
        }
        j++;
    }
}

int main(int argc, char *argv[]) {
    printf("sort.cpp is running !\n");
    int arr[argc - 1];
    int k = 0; 
    int count = 0;
    int i = 1;
    while (i < argc) {
        arr[k] = atoi(argv[i]);
        k++;
        count++;
        i++;
    }

    sort(arr, count);

    int n = 0;
    while (n < count) {
        printf("%d\n", arr[n]);
        n++;
    }

    return 0;
}

