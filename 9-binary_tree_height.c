#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (binary_tree_height(tree->left) >= binary_tree_height(tree->right))
		return (1 + binary_tree_height(tree->left));
	return (1 + binary_tree_height(tree->right));
}
