#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child of another node
 * @parent: ptr to node to insert right child in
 * @value: value to put in new node
 * Return: returns ptr to new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_nd, *tempo;

	if (parent == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		tempo = parent->right;
		right_nd = binary_tree_node(parent, value);
		if (right_nd == NULL)
			return (NULL);
		parent->right = right_nd;
		right_nd->right = tempo;
		tempo->parent = right_nd;
		tempo->right = NULL;
	}
	else
	{
		right_nd = binary_tree_node(parent, value);
		if (right_nd == NULL)
			return (NULL);
		parent->right = right_nd;

	}

	return (right_nd);
}
