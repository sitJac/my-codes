#include<stdio.h>
#include "min.h"
#include "max.h"

int main() {
    int arr[5] = {9, 3, 5, 7, 6};
    int max = find_max(arr, 5);
    int min = find_min(arr, 5);
    printf("min = %d, max = %d\n", min, max);
    return 0;
}
