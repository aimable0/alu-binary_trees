#include "binary_trees.h"
#include <stdlib.h>

void binary_tree_delete(binary_tree_t *tree)
{
    binary_tree_t *temp_left;
    binary_tree_t *temp_right;
    if (tree == NULL)
    {
        return;
    }
    temp_left = tree->left;
    temp_right = tree->right;
    free(tree);

    binary_tree_delete(temp_left);
    binary_tree_delete(temp_right);
}
