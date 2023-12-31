#include "binary_trees.h"

/**
 * binary_tree_inorder - go through binary tree using inorder traversal
 * @tree: ptr to root node of tree to traverse
 * @func: ptr to function to call for each node.
 *        Value in node must be passed as parameter to this function
 * Return: returns nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	(*func)(tree->n);
	binary_tree_inorder(tree->right, func);
}
