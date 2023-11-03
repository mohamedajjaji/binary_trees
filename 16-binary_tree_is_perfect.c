#include "binary_trees.h"

/**
 * check_perfect - Helper function to check if a tree is perfect
 * @tree: Current node being checked
 * @depth: Depth of the current node
 * @leaf_depth: Depth of the first leaf node encountered
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int check_perfect(const binary_tree_t *tree, int depth, int *leaf_depth)
{
	if (tree == NULL)
	{
		if (*leaf_depth == -1)
		{
			*leaf_depth = depth;
			return (1);
		}
		return (depth == *leaf_depth);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		if (*leaf_depth == -1)
		{
			*leaf_depth = depth;
		}
		return (depth == *leaf_depth);
	}

	if (tree->left && tree->right)
	{
		return (check_perfect(tree->left, depth + 1, leaf_depth) &&
			   check_perfect(tree->right, depth + 1, leaf_depth));
	}

	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0;
	int leaf_depth = -1;

	if (tree == NULL)
	{
		return (0);
	}

	return (check_perfect(tree, depth, &leaf_depth));
}
