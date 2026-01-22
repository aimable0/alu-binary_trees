#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * i.e all kids have the same depth
 * @tree: tree to check if it's perfect
 *
 * Return: 1 if perfect or 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    /* on the same level, if one is leaf, others are leaves as well & vice-versa */
    if (tree->left != NULL && tree->right != NULL)
    {
        if (tree->left->left == NULL &&
            tree->left->right == NULL &&
            tree->right->left == NULL &&
            tree->right->right == NULL)
        {
            return (1);
        }
    }

    if (tree->left && tree->right)
    {
        return (binary_tree_is_perfect(tree->left)
            && binary_tree_is_perfect(tree->right));
    }

    return (0);
}
