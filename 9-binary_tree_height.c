#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a tree
 *
 * @tree: The binary tree
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0U, right = 0U;

	if (!tree)
		return (0U);

	if (tree->left)
		left = 1U + binary_tree_height(tree->left);
	if (tree->right)
		right = 1U + binary_tree_height(tree->right);

	if (right > left)
		return (right);
	return (left);
}

