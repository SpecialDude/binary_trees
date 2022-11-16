#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 *
 * @node: a binary tree node
 *
 * Return: 1 if node is a root node otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
		if (node->parent == NULL)
			return (1);
	return (0);
}

