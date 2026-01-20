#include "binary_trees.h"
#include <stdio.h>

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left, right;

    if (tree == NULL)
        return (0);

    left = binary_tree_height(tree->left);
    right = binary_tree_height(tree->right);

    if (left > right)
        return left + 1;
    return right + 1;
}

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (binary_tree_height(tree->left) -
            binary_tree_height(tree->right));
}
