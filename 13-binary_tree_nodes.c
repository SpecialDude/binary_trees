#include "binary_trees.h"

/**
 * binary_tree_nodes - Returns the number of nodes with
 * at least one child
 *
 * @tree: A binary tree node
 *
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0U);

	if (tree->left == NULL && tree->right == NULL)
		return (0U);

	return (1U + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
}

