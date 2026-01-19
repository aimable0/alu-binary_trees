#include "binary_trees.h"
#include <stdbool.h>

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    /* handle left substree */
    if (binary_tree_is_leaf(tree->left) == 1)
        func(tree->left->n);
    else
        binary_tree_inorder(tree->left, func);
    /* handle middle node */
    func(tree->n);

    /* handle right substree */
    if (binary_tree_is_leaf(tree->right) == 1)
        func(tree->right->n);
    else
        binary_tree_inorder(tree->right, func);
}
