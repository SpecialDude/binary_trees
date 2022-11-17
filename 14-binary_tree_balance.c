#include "binary_trees.h"

/**
 * aux_binary_tree_height - Calculates the height of a tree
 *
 * @tree: The binary tree
 *
 * Return: height of the tree
 */
size_t aux_binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0U, right = 0U;

	if (!tree)
		return (0U);

	if (tree->left == NULL && tree->right == NULL)
		return (1U);

	if (tree->left)
		left = 1U + aux_binary_tree_height(tree->left);
	if (tree->right)
		right = 1U + aux_binary_tree_height(tree->right);

	if (right > left)
		return (right);
	return (left);
}


/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: a binary tree node
 *
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (aux_binary_tree_height(tree->left) -
			aux_binary_tree_height(tree->right));
}

