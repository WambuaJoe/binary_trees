#include "binary_trees.h"

/**
 * binary_tree_postorder - go through binary tree using postorder traversal
 * @tree: ptr to root node of tree to traverse
 * @func: ptr to function to call for each node.
 *        Value in the node must be passed as parameter to this function
 * Return: returns nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}
