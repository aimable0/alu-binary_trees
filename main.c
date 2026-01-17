#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t root;

    root.n = 98;
    root.parent = NULL;
    root.left = NULL;
    root.right = NULL;
    binary_tree_insert_right(&root, 54);
    binary_tree_insert_left(&root, 154);
    binary_tree_print(&root);

    return (0);
}
