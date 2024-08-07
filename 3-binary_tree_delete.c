#include "binary_trees.h"
#include<stdio.h>
/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: A pointer to the root node of the tree to delete
 *
 * Description: This function uses a recursive approach to delete all nodes
 * of a binary tree by traversing it in post-order fashion (left-right-root)
 * and freeing the memory allocated for each node.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    /* Recursively delete the left and right subtrees */
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    /* Free the current node */
    free(tree);
}

