#include "binary_trees.h"

/* helper function */
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

/**
 * binary_tree_uncle - get's the sibling a node's parent (if there's).
 * @node: node whose uncle is returned
 *
 * Return: bt node (uncle) if found or NULL otherwise.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (NULL);
}

return (binary_tree_sibling(node->parent));
}
