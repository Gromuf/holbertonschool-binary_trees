#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The size of the tree, or 0 if tree is NULL
 *
 * The size of a binary tree is defined as the number of nodes in the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    size_t size_left = binary_tree_size(tree->left);
    size_t size_right = binary_tree_size(tree->right);

    return (1 + size_left + size_right);
}
