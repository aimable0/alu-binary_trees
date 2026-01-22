#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf (has no kids)
 * @node: node to check.
 *
 * Return: 1 if node is leaf and 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
if (node->left == NULL && node->right == NULL)
{
return (1);
}
return (0);
}

/**
 * binary_tree_is_full - checks if a each node has exactly two or zero children
 * @tree: binary tree to check.
 * Return: 1 if tree is full and 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

/* handle single node */
if (binary_tree_is_leaf(tree))
{
return (1);
}

if (tree->left || tree->right)
{
if (!tree->right || !tree->left)
{
return (0);
}
}

/* check left subtree if any */
if (!binary_tree_is_leaf(tree->left))
{
if (!binary_tree_is_full(tree->left))
{
return (0);
}
}

/* check right substree if any */
if (!binary_tree_is_leaf(tree->right))
{
if (!binary_tree_is_full(tree->right))
{
return (0);
}
}

return (1);
}
