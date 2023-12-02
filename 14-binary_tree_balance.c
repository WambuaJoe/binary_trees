#include "binary_trees.h"

/**
 * binary_tree_balance - measure balance factor of binary tree
 * @tree: ptr to root node
 * Return: returns balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_nd = 0, right_nd = 0;

	if (!tree)
		return (0);

	left_nd = binary_tree_height(tree->left);
	right_nd = binary_tree_height(tree->right);

	return (left_nd - right_nd);
}

/**
 * binary_tree_height - measure height of binary tree
 * @tree: ptr to root node of tree to measure height
 * Return: returns height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (!tree)
		return (0);

	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return (height_left > height_right ? height_left : height_right);

}
