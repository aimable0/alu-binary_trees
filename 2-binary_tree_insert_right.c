#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_right - Insert a node as the right child of a parent
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *node;
    if (parent == NULL)
    {
        return (NULL);
    }
    node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
    {
        return (NULL);
    }

    node->parent = parent;
    node->n = value;
    node->left = NULL;
    node->right = parent->right;

    /* Swap parents for old right child */
    if (parent->right != NULL)
    {
        parent->right->parent = node;
    }

    parent->right = node;

    return (node);
}
