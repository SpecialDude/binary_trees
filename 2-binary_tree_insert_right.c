#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node to
 * the right of a parent node
 *
 * @parent: Parent node to attach a new node
 * @value: value of the new node to be created;
 *
 * Return: pointer to the created node or NULL or failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if (parent == NULL)
		return (NULL);

	new_right_node = binary_tree_node(parent, value);

	if (new_right_node == NULL)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = new_right_node;
		new_right_node->right = parent->right;
	}

	new_right_node->parent = parent;
	parent->right = new_right_node;

	return (new_right_node);
}

