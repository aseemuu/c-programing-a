#include <stdio.h>
#include <stdlib.h>

void insertion();
void deletion();
void searching();
void sorting();
void display();

int array[100];
int num;

int main() {
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    printf("Enter the elements:\n");
    for (int i = 0; i < num; i++) {
        scanf("%d", &array[i]);
    }

    printf("The array elements are:\n");
    for (int i = 0; i < num; i++) {
        printf("%d\n", array[i]);
    }

    int choice;
    while (1) {
        printf("\nEnter option:\n1.Insertion\n2.Deletion\n3.Searching\n4.Sorting\n5.Display\n6.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertion();
                break;
            case 2:
                deletion();
                break;
            case 3:
                searching();
                break;
            case 4:
                sorting();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid option\n");
        }
    }
    return 0;
}

void insertion() {
    if (num >= 100) {
        printf("Array is full. Cannot insert more elements.\n");
        return;
    }
    int number;
    printf("Enter the number to be inserted: ");
    scanf("%d", &number);
    array[num] = number;
    num++;
    printf("The array elements after insertion are:\n");
    for (int i = 0; i < num; i++) {
        printf("%d\n", array[i]);
    }
}

void deletion() {
    if (num == 0) {
        printf("Array is empty\n");
        return;
    }
    int index;
    printf("Enter the index of element to delete (0 to %d): ", num - 1);
    scanf("%d", &index);
    if (index < 0 || index >= num) {
        printf("Invalid index\n");
        return;
    }
    for (int j = index; j < num - 1; j++) {
        array[j] = array[j + 1];
    }
    num--;
    printf("The array elements after deletion are:\n");
    for (int i = 0; i < num; i++) {
        printf("%d\n", array[i]);
    }
}

void searching() {
    int toSearch, found = 0, i;
    printf("Enter the element to search: ");
    scanf("%d", &toSearch);

    for (i = 0; i < num; i++) {
        if (array[i] == toSearch) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d is found at position %d\n", toSearch, i + 1);
    } else {
        printf("%d is not found in the array\n", toSearch);
    }
}

void sorting() {
    int i, j, temp;
    for (i = 0; i < num - 1; i++) {
        for (j = i + 1; j < num; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("The numbers arranged in ascending order are:\n");
    for (i = 0; i < num; i++) {
        printf("%d\n", array[i]);
    }
}

void display() {
    printf("The array elements are:\n");
    for (int i = 0; i < num; i++) {
        printf("%d\n", array[i]);
    }
}
  
                      
