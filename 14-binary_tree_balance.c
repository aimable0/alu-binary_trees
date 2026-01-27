#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - calculates the binary tree height.
 * @tree: the tree whose height is to be calculated.
 *
 * Return: height of tree (size_t) or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left, right;

    if (tree == NULL)
    {
        return (0);
    }

    left = binary_tree_height(tree->left);
    right = binary_tree_height(tree->right);

    if (left > right)
    {
        return (left + 1);
    }
    return (right + 1);
}

/**
 * binary_tree_balance - checks if a binary tree is balanced
 * @tree: tree to check if balanced
 *
 * Return: 1 if balance and 0 otherwise.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    return (binary_tree_height(tree->left) -
            binary_tree_height(tree->right));
}
