#include "binary_trees.h"
#include <stdbool.h>

int max(int a, int b)
{
    if (a > b) return a;
    return b;
}

size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    // What I think I should do:
    // calculate height for left sub tree
    // calculate height for right sub tree
    // return biggest between the two
    
    return max(binary_tree_height(tree->left), binary_tree_height(tree->right)) + 1;
}
