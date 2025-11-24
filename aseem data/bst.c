#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *lchild, *rchild;
};

struct node *insert(struct node *root, int data) {
    struct node *t1, *t2, *t;
    t1 = root;
    t2 = NULL;

    while (t1 != NULL && t1->data != data) {
        t2 = t1;
        if (data < t1->data)
            t1 = t1->lchild;
        else
            t1 = t1->rchild;
    }

    if (t1 != NULL) {
        printf("Duplicate!!\n");
    } else {
        t = (struct node *)malloc(sizeof(struct node));   // FIXED TYPO (structnode)
        t->data = data;
        t->lchild = t->rchild = NULL;

        if (root == NULL) {
            root = t;
        } else {
            if (data < t2->data)
                t2->lchild = t;
            else
                t2->rchild = t;
        }
        printf("%d is inserted\n", data);
    }
    return root;
}

void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->lchild);
        printf("%d\t", root->data);
        inorder(root->rchild);
    }
}

struct node *search(struct node *root, int item) {
    struct node *t = root;

    while (t != NULL) {
        if (item == t->data)
            return t;
        else if (item < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    return NULL;
}

struct node *delete(struct node *root, int item) {
    struct node *t = root, *par = NULL, *suc, *sucpar;

    // Search for node
    while (t != NULL && t->data != item) {
        par = t;
        if (item < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }

    if (t == NULL) {
        printf("Item not found!\n");
        return root;
    }

    // Case 1: Node with two children
    if (t->lchild != NULL && t->rchild != NULL) {
        suc = t->rchild;
        sucpar = t;

        while (suc->lchild != NULL) {
            sucpar = suc;
            suc = suc->lchild;
        }

        t->data = suc->data;
        t = suc;
        par = sucpar;
    }

    // Case 2 & 3: One child or no child
    struct node *child;
    if (t->lchild != NULL)
        child = t->lchild;
    else
        child = t->rchild;

    if (par == NULL)
        root = child;
    else if (t == par->lchild)
        par->lchild = child;
    else
        par->rchild = child;

    free(t);
    printf("%d deleted.\n", item);
    return root;
}

int main() {
    struct node *root = NULL;
    int choice, item;

    while (1) {
        printf("\n1.Insert\n2.Inorder\n3.Search\n4.Delete\n5.Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter item: ");
                scanf("%d", &item);
                root = insert(root, item);
                break;

            case 2:
                inorder(root);
                printf("\n");
                break;

            case 3:
                printf("Enter item to search: ");
                scanf("%d", &item);
                if (search(root, item))
                    printf("Found\n");
                else
                    printf("Not Found\n");
                break;

            case 4:
                printf("Enter item to delete: ");
                scanf("%d", &item);
                root = delete(root, item);
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
	
