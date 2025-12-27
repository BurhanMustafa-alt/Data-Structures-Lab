#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* create(int item) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* root, int item) {
    if (root == NULL)
        return create(item);
    if (item < root->data)
        root->left = insert(root->left, item);
    else
        root->right = insert(root->right, item);
    return root;
}

void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct node* root = NULL;
    int n, i, item;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &item);
        root = insert(root, item);
    }

    printf("Inorder Traversal: ");
    inorder(root);
    return 0;
}
