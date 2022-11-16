#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree
 *
 * @tree: the binary tree to be deleted
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left_child, *right_child;

	if (tree == NULL)
		return;

	left_child = tree->left;
	right_child = tree->right;

	free(tree);

	if (left_child)
		binary_tree_delete(left_child);
	if (right_child)
		binary_tree_delete(right_child);

}

