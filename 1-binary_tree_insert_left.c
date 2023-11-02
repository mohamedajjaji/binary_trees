#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Pointer to the node to insert the left child in
 * @value: Value to store in the new node
 *
 * Return: A pointer to the created node, or NULL on failure
 *         or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nd;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_nd = binary_tree_node(parent, value);

	if (new_nd == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		new_nd->left = parent->left;
		parent->left->parent = new_nd;
	}

	parent->left = new_nd;

	return (new_nd);
}
