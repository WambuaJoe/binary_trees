#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of node in binary tree
 * @tree: pointer to node to measure depth
 * Return: returns depth of node @tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	while (tree->parent != NULL)
	{
		counter += 1;
		tree = tree->parent;
	}

	return (counter);
}
