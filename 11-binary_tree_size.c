#include "binary_trees.h"

/**
 * binary_tree_size - measure size of binary tree
 * @tree: ptr to root node of tree to measure size
 * Return: returns size of binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter = 1;

	if (!tree)
		return (0);

	counter += binary_tree_size(tree->left);
	counter += binary_tree_size(tree->right);

	return (counter);
}
