#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node in a binary
 * tree is a leaf
 *
 * @node: A binary tree node
 *
 * Return: 1 if node is a leaf otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
		if (!(node->left || node->right))
			return (1);
	return (0);
}

