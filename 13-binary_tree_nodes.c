#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: the number of no-leaf nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
