#include "binary_trees.h"

/**
 * binary_tree_height - measure height of binary tree
 * @tree: ptr to root node of tree to measure height
 * Return: returns height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hei_l;
	size_t hei_r;

	if (!tree)
		return (0);

	hei_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	hei_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (hei_l > hei_r ? hei_l : hei_r);

}
