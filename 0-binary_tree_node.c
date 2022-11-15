#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a binary tree node
 *
 * @parent: Parent of the binary tree
 * @value: value to put into node
 *
 * Return: Pointer to binary_tree_node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_b_node;

	new_b_node = malloc(sizeof(*new_b_node));

	if (!new_b_node)
		return (NULL);

	new_b_node->n = value;
	new_b_node->parent = parent;

	return  (new_b_node);
}
