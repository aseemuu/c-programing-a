#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void readarray(int a[], int n);
void printarray(int a[], int n);
void merge(int a[], int b[], int c[], int m, int n);

int main()   // use int main() instead of void main()
{
    int ar1[20], ar2[20], ar3[40];
    int m, n;

    printf("No. of elements in 1st array [1-20]: ");
    scanf("%d", &m);

    printf("Enter elements of 1st array in non-decreasing order:\n");
    readarray(ar1, m);

    printf("No. of elements in 2nd array [1-20]: ");
    scanf("%d", &n);

    printf("Enter elements of 2nd array in non-decreasing order:\n");
    readarray(ar2, n);

    merge(ar1, ar2, ar3, m, n);

    printf("Merged array:\n");
    printarray(ar3, m + n);

    return 0;
}

// Function to read array
void readarray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

// Function to print array
void printarray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

// Function to merge two sorted arrays
void merge(int a[], int b[], int c[], int m, int n)
{
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < m)
        c[k++] = a[i++];

    while (j < n)
        c[k++] = b[j++];
}

