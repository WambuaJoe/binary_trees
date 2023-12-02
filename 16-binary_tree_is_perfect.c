#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: ptr to root node
 * Return: returns 1 if tree is perfect, else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t right_nd = 0, left_nd = 0;
	size_t right_height = 0, left_height = 0;

	if (!tree)
		return (0);

	left_nd = binary_tree_size(tree->left);
	right_nd = binary_tree_size(tree->right);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
		if (left_nd == right_nd)
			return (1);
	return (0);
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

	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_left > height_right ? height_left : height_right);

}

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
