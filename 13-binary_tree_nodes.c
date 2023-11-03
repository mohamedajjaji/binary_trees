#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at least one child
 * in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of nodes with at least one child or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		n = 1;
	}

	n += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (n);
}
