#include "binary_trees.h"

/**
 * binary_tree_height - messure the hieght of a binary tree
 * @tree: tree pointer
 *
 * Return: size of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_branch, left_branch;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	else
	{
		left_branch = binary_tree_height(tree->left);
		right_branch = binary_tree_height(tree->right);
		
		if (left_branch > right_branch)
		{
			return (left_branch + 1);
		}
		if (left_branch < right_branch)
		{
			return (right_branch + 1);
		}
	}
	return (0);
}
