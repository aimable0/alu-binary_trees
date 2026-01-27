#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Function pointer to call for each node's value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

/* handle left substree */
if (binary_tree_is_leaf(tree->left) == 1)
func(tree->left->n);
else
binary_tree_postorder(tree->left, func);

/* handle right substree */
if (binary_tree_is_leaf(tree->right) == 1)
func(tree->right->n);
else
binary_tree_postorder(tree->right, func);

/* handle middle node */
func(tree->n);
}
