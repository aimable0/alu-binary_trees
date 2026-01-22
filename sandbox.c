#include <stdio.h>

int main()
{
    int bl = 0; // 0 = false
    if (!bl) // true
        printf("Hello\n");
    if (bl) // false
        printf("World!\n");
}

#include "binary_trees.h"
#include <stdio.h>


size_t binary_tree_total_nodes(const binary_tree_t *tree)
{
    size_t tot = 0;
    if (tree == NULL)
        return (0);
    tot++;
    tot += binary_tree_total_nodes(tree->left) + binary_tree_total_nodes(tree->right);
    return (tot);
}

int binary_tree_is_full(const binary_tree_t *tree)
{
    int tot_nodes = binary_tree_total_nodes(tree);
    return tot_nodes % 2 != 0 ? 1 : 0;
}
