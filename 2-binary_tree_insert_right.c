#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = binary_tree_node(parent, value);

	if (parent == NULL)
	{
		free(n_node);
		return (NULL);
	}

	if (parent->right == NULL)
	{
		parent->right = n_node;
		return (n_node);
	}

	binary_tree_insert_right(n_node, (parent->right)->n);
	n_node->right->left = parent->right->left;
	n_node->right->right = parent->right->right;
	parent->right = n_node;
	return (n_node);
}
