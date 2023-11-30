#include "binary_trees.h"

/**
 * binary_tree_preorder - go through binary tree using pre-order traversal
 * @tree: ptr to root node of tree to traverse
 * @func: ptr to funct to call for each node.
 *        Value in node must be passed as parameter to this function
 * Return: returns nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
