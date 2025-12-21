#include <stdio.h>
#include <stdlib.h>

typedef struct tnode* Treeptr;

struct tnode
{
    int data;
    Treeptr left;
    Treeptr right;
};

Treeptr addTree(Treeptr p, int x)
{
    if (p == NULL)
    {
        Treeptr new_tree = malloc(sizeof(struct tnode));
        new_tree->data = x;
        new_tree->left = NULL;
        new_tree->right = NULL;
        return new_tree;
    }
    else
    {
        if(p->data == x) return p;
        
        if (p->data < x)
        {
            Treeptr new_right = addTree(p->right, x);
            p->right = new_right;
        }
        else
        {
            Treeptr new_left = addTree(p->left, x);
            p->left = new_left;
        }
    }
}

void treeprint(Treeptr p)
{
    if (p == NULL) return;

    treeprint(p->left);
    printf("%d\n", p->data);
    treeprint(p->right);
}

int main()
{

    Treeptr root = NULL;
    int current_grade;
    do
    {
        printf("Enter grade (-1 to stop): ");
        scanf("%d", &current_grade);
        if(current_grade != -1)
        {
            if (root == NULL)
            {
                root = addTree(root, current_grade);
            }
            else
            {
                addTree(root, current_grade);
            }
        }
    } while (current_grade != -1);

    treeprint(root);

    return 0;
}