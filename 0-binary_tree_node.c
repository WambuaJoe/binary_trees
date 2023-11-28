#include "binary_trees.h"

/**
 * binary_tree_node - create binary tree node
 *
 * @parent: ptr to parent of new node to be created
 * @value: value to put in new node
 * Return: returns ptr to new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nd;

	new_nd= malloc(sizeof(binary_tree_t));

	if (new_nd == NULL)
		return (NULL);

	new_nd->n = value;
	new_nd->parent = parent;
	new_nd->left = NULL;
	new_nd->right = NULL;

	return (new_nd);
}
