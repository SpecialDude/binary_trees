#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node to
 * the left of a parent node
 *
 * @parent: the parent node
 * @value: value of the new node to be created
 *
 * Return: the newly inserted node or NULL on error
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
		return (NULL);

	new_left_node = binary_tree_node(parent, value);

	if (new_left_node == NULL)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = new_left_node;
		new_left_node->left = parent->left;
	}

	parent->left = new_left_node;
	new_left_node->parent = parent;

	return (new_left_node);
}
