#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    binary_tree_t *temp;

    if (parent == NULL)
    {
        free(node);
        return (NULL);
    }

    if (node == NULL)
    {
        return (NULL);
    }
    node->n = value;
    node->left = NULL;
    node->right = NULL;

    if (parent->left == NULL)
    {
        parent->left = node;
        node->parent = parent;
    }
    else
    {
        temp = parent->left;
        parent->left = node;
        node->left = temp;
        node->parent = parent;
    }

    return (node);
}
