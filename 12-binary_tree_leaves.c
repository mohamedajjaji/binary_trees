#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaf nodes in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of leaf nodes in the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
	return (0);
}
