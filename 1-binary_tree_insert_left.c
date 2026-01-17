#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node;
    binary_tree_t *temp;

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

    /* parent has old child */
    if (parent->left != NULL)
    {
        temp = parent->left;
        node->left = temp;
        temp->parent = node;
    }
    parent->left = node;

    return (node);
}
