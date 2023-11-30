#include "binary_trees.h"

/**
 * binary_tree_is_leaf - func checks if node is a leaf
 * @node: ptr to node to check
 * Return: returns 1 if node is a leaf, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	else
		return (1);
}
