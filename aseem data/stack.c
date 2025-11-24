#include <stdio.h>
#include <stdlib.h>

// Define a node of the linked list
struct node {
    int data;
    struct node *next;
};

// Global pointer to top of stack
struct node *sp = NULL;

// Push an item onto the stack
void push(int item) {
    struct node *t = (struct node*) malloc(sizeof(struct node));
    if (t == NULL) {
        printf("Memory allocation failed. Cannot push.\n");
        return;
    }
    t->data = item;
    t->next = sp;
    sp = t;
}

// Pop an item from the stack
// status is set: 1 for success, 0 if stack was empty
int pop(int *status) {
    struct node *t;
    int item;
    if (sp == NULL) {
        *status = 0;
        printf("Stack is empty\n");
        return 0;  // return value doesn’t matter if status = 0
    } else {
        item = sp->data;
        t = sp;
        sp = sp->next;
        free(t);
        *status = 1;
        return item;
    }
}

// Search for an item; returns position (1-based) from top, or 0 if not found
int search(int item) {
    struct node *t = sp;
    int count = 0;
    while (t != NULL) {
        ++count;
        if (t->data == item)
            return count;
        t = t->next;
    }
    return 0;
}

int main() {
    int item, opt, ans, status;
    do {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Search\n");
        printf("4. Exit\n");
        printf("Option: ");
        if (scanf("%d", &opt) != 1) {
            // input failure
            printf("Invalid input. Exiting.\n");
            break;
        }
        switch (opt) {
            case 1:
                printf("Enter data to push: ");
                if (scanf("%d", &item) != 1) {
                    printf("Invalid input.\n");
                } else {
                    push(item);
                    printf("%d pushed onto stack.\n", item);
                }
                break;
            case 2:
                item = pop(&status);
                if (status != 0) {
                    printf("Deleted item is %d\n", item);
                }
                break;
            case 3:
                printf("Enter item to search: ");
                if (scanf("%d", &item) != 1) {
                    printf("Invalid input.\n");
                } else {
                    ans = search(item);
                    if (ans == 0)
                        printf("Item not found.\n");
                    else
                        printf("Found at position %d from top.\n", ans);
                }
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
        printf("\n");
    } while (1);
    
    return 0;
}

