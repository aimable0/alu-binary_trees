#include "binary_trees.h"

/**
 * max - Return the larger of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The greater value of a and b
 */
int max(int a, int b)
{
    if (a > b)
        return (a);
    return (b);
}

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL ||
        (tree->left == NULL && tree->right == NULL))
        return (0);

    return (max(binary_tree_height(tree->left),
                binary_tree_height(tree->right)) +
            1);
}
