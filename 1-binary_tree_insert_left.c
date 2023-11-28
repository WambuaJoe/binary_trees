#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left child of another node
 * @parent: ptr to node to insert left child in
 * @value: value to put in new node
 * Return: returns ptr to new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_nd, *tempo;

	if (parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		tempo = parent->left;
		left_nd = binary_tree_node(parent, value);
		if (left_nd == NULL)
			return (NULL);
		parent->left = left_nd;
		left_nd->left = tempo;
		tempo->parent = left_nd;
		tempo->left = NULL;
	}
	else
	{
		left_nd = binary_tree_node(parent, value);
		if (left_nd == NULL)
			return (NULL);
		parent->left = left_nd;
	}

	return (left_nd);
}
