#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balanced factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (1 + binary_tree_balance(tree->left));
	if (tree->left == NULL && tree->right != NULL)
		return (binary_tree_balance(tree->right) - 1);
	return (binary_tree_balance(tree->left) + binary_tree_balance(tree->right));
}
