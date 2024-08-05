#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int d = depth(tree);

	return (is_perfect_rec(tree, d, 0));
}

/**
 * depth - Calculates the depth of the leftmost leaf.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The depth of the leftmost leaf.
 */
int depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * is_perfect_rec - Recursively checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * @depth: The depth of the leftmost leaf.
 * @level: The current level of the node.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int is_perfect_rec(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_rec(tree->left, depth, level + 1) &&
			is_perfect_rec(tree->right, depth, level + 1));
}
