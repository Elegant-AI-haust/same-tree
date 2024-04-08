//�Զ���232��-�ອ-231404010233-yuhan2318217334
#include <stdio.h>
#include <stdbool.h>

typedef struct TreeNode 
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

bool isSameTree(TreeNode* p, TreeNode* q) {
    if (p == NULL && q == NULL) 
    {
        return true;
    }
    else if (p == NULL || q == NULL) {
        return false;
    }
    else if (p->val != q->val) {
        return false;
    }
    else {
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
}
int main() {
    // ��������1
    TreeNode p1 = { 1, &(TreeNode){2,& (TreeNode){3, NULL, NULL}, NULL}, NULL };
    TreeNode q1 = { 1, &(TreeNode){2,& (TreeNode){3, NULL, NULL}, NULL}, NULL };
    printf("example1: %d ", isSameTree(&p1, &q1)); // �����true

        // ��������2
        TreeNode p2 = { 1, &(TreeNode){2, NULL, NULL}, NULL };
    TreeNode q2 = { 1, NULL, &(TreeNode){2, NULL, NULL} };
    printf("example2: %d ", isSameTree(&p2, &q2)); // �����false
        // ��������3
        TreeNode p3 = { 1, &(TreeNode){2,& (TreeNode){1, NULL, NULL}, NULL}, NULL };
    TreeNode q3 = { 1, &(TreeNode){1,& (TreeNode){2, NULL, NULL}, NULL}, NULL };
    printf("example3: %d ", isSameTree(&p3, &q3)); // �����false

        return 0;
}
