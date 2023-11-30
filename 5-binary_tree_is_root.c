#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is a root
 * @node: ptr to node to check
 * Return: returns 1 if node is a root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	else
		return (1);
}
