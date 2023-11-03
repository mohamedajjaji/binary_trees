#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size (number of nodes) of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Size of the binary tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_s, right_s;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_s = binary_tree_size(tree->left);
		right_s = binary_tree_size(tree->right);
		return (1 + left_s + right_s);
	}
}
