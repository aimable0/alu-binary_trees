#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{   size_t tot = 0;
    if (tree == NULL)
        return 0;

    tot++; /* parent node */
    tot += binary_tree_size(tree->left) + binary_tree_size(tree->right);
    return tot;
}
