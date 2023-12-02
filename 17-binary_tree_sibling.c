#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of node
 * @node: ptr to node to find sibling of
 * Return: returns pointer to sibling, else NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->right && node->parent->left)
	{
		if (node == node->parent->right)
			return (node->parent->left);
		else
			return (node->parent->right);
	}
	else
		return (NULL);
}
