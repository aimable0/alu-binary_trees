#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_node - Allocate and initialize a new binary tree node
 * @parent: Pointer to the node that will be the parent of the new node
 * @value: Integer value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on allocation failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
    {
        return (NULL);
    }
    node->parent = parent;
    node->n = value;
    node->left = NULL;
    node->right = NULL;

    return (node);
}
