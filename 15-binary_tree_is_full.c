#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);
    if (node->left == NULL && node->right == NULL)
        return (1);
    return (0);
}

int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    if (tree->left || tree->right)
        if (!tree->right || !tree->left)
            return 0;

    /* check left subtree if any */
    if (!binary_tree_is_leaf(tree->left))
        if (!binary_tree_is_full(tree->left))
            return 0;

    /* check right substree if any */
    if (!binary_tree_is_leaf(tree->right))
        if (!binary_tree_is_full(tree->right))
            return 0;

    return 1;
}
