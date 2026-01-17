#include "binary_trees.h"
#include <stdbool.h>

/* helper function */


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    static bool got_left_leaf = false;
    if (tree == NULL || func == NULL)
    {
        return;
    }
    if (binary_tree_is_leaf(tree) && got_left_leaf == false)
    {
        got_left_leaf = true;
        func(tree);
    }
    binary_tree_inorder(tree->left, func);
    binary_tree_inorder(tree, func);
    binary_tree_inorder(tree->right, func);
}
