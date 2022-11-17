#include "binary_trees.h"

/**
 * binary_tree_size - Returns the size of the tree
 *
 * @tree: a binary tree node
 *
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0U);

	return (1U + binary_tree_size(tree->left) +
			binary_tree_size(tree->right));
}

