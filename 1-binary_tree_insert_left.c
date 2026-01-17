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

    node->n = value;
    node->left = NULL;
    node->right = NULL;
    node->parent = parent;

    /* if no old child */
    if (parent->left == NULL)
    {
        parent->left = node;
    }
    else /* parent has old child */
    {
        temp = parent->left;
        parent->left = node;
        node->left = temp;
        temp->parent = node;
    }

    return (node);
}
