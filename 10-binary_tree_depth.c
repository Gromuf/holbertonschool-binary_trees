#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth
 *
 * Return: The depth of the node, or 0 if tree is NULL
 *
 * Depth is defined as the number of edges from the root node to the
 * specified node. The root node has a depth of 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	size_t depth = binary_tree_depth(tree->parent);

	return (1 + depth);
}
