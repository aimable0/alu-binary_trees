#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
    {
        return (NULL);
    }

    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
    {
        return (NULL);
    }
    node->n = value;
    node->left = NULL;
    node->right = NULL;

    if (parent == NULL)
    {
        parent->left = node;
    }
    else
    {
        binary_tree_t *temp = parent->left;
        parent->left = node;
        node->left = temp;
    }

    return (node);
}
