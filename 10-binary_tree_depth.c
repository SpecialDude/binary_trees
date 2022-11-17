#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of a tree
 *
 * @tree: A tree node
 *
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0U);

	if (tree->parent)
		return (1U + binary_tree_depth(tree->parent));

	return (0U);
}

