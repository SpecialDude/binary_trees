#include "binary_trees.h"

/**
 * binary_tree_leaves - Returns the number of leaves in a tree
 *
 * @tree: A binary tree node
 *
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0U);

	if (tree->left == NULL && tree->right == NULL)
		return (1U);

	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}

