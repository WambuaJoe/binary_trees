#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle of node
 * @node: ptr to node to find uncle
 * Return: returns ptr to uncle, else NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent && node->parent->parent)
	{
		if (node->parent == node->parent->parent->left)
			return (node->parent->parent->right);
		else
			return (node->parent->parent->left);
	}
	else
		return (NULL);
}
