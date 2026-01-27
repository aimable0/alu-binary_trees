#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is the root of a tree
 * @node: Pointer to the node to inspect
 *
 * Return: 1 if node has no parent, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
    {
        return (0);
    }
    if (node->parent == NULL)
    {
        return (1);
    }
    return (0);
}
