 #include "binary_trees.h"

/**
 * a_binary_tree_height - Calculates the height of a tree
 *
 * @tree: The binary tree
 *
 * Return: height of the tree
 */
size_t a_binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0U, right = 0U;

	if (!tree)
		return (0U);

	if (tree->left == NULL && tree->right == NULL)
		return (1U);

	if (tree->left)
		left = 1U + a_binary_tree_height(tree->left);
	if (tree->right)
		right = 1U + a_binary_tree_height(tree->right);

	if (right > left)
		return (right);
	return (left);
}


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: a binary tree is perfect
 *
 * Return: 1 if perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (a_binary_tree_height(tree->left) ==
				a_binary_tree_height(tree->right));

	return (0);
}
