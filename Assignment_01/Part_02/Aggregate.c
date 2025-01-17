
// --------------------------------------------------------------
// Assignment 1
// Part 2
// Question 4 and 5
// Written by: Valerie Courval 40101337 and  Brandon Tam 40100539
// --------------------------------------------------------------
//

#include <stdio.h>
#include <stdlib.h>
#include "AGGREGATE.h"

#define ARRAYLEN(ar) (int)(sizeof(ar) / (sizeof(ar[0])))

int main()
{
    float arr1[] = {11.0, 2.0, 3.0, 4.0, 5.0};

    int size1 = ARRAYLEN(arr1);
    float min1 = min(arr1, size1);
    float max1 = max(arr1, size1);
    float sum1 = sum(arr1, size1);
    float avg1 = avg(arr1, size1);
    float pseudo_avg1 = pseudo_avg(arr1, size1);

    printf("Min %f\n", min1);
    printf("Max %f\n", max1);
    printf("Sum %f\n", sum1);
    printf("Avg %f\n", avg1);
    printf("Pseudo Avg %f\n", pseudo_avg1);

    // FATAL ERROR test cases
    printf("Null array element test\n");
    min(arr1, size1 + 11);
    printf("Invalid size test case\n");
    min(arr1, -size1);

    return 0;
}
