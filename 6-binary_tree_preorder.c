#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a tree pre-orderly
 *
 * @tree: The root node of the binary tree
 * @func: Function to call on value of each node
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}

