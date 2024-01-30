#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}

	int old_value = (parent->left)->n;
	binary_tree_t *n_node = binary_tree_node(parent, value);

	parent->left = n_node;
	binary_tree_insert_left(n_node, old_value);
	return (n_node);
}
