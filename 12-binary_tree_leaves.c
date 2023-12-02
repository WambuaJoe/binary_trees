#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least one child in binary tree
 * @tree: ptr to root node of tree
 * Return: returns number leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		counter++;

	counter += binary_tree_nodes(tree->left);
	counter += binary_tree_nodes(tree->right);

	return (counter);
}
