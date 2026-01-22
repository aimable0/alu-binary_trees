#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a each node has exactly two or zero children
 * @tree: binary tree to check.
 * Return: 1 if full or 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

/* If leaf node */
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}

/* check if both kids exist and check subtrees if any */
if (tree->left && tree->right)
{
return (binary_tree_is_full(tree->left) &&
binary_tree_is_full(tree->right));
}

/* Once child only */
return (0);
}
