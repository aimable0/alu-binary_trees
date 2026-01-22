#include "binary_trees.h"

/**
 * binary_tree_sibling - yields a node's sibling (if any)
 * @node: node whose sibling is to be returned.
 *
 * Return: sibling node if found or NULL otherwise.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (NULL);
}

if (node->parent->left == node)
{
return ((node->parent->right == NULL) ? NULL : node->parent->right);
}
else
{
return ((node->parent->left == NULL) ? NULL : node->parent->left);
}
}
