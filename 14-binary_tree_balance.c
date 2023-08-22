#include "binary_trees.h"

/**
 * binary_tree_balance - balances a binary tree
 * @tree: tree pointer to balance
 *
 * Return: 0 if NULL, tree on success
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_branch, right_branch;

	if (tree == NULL)
		return (0);
	left_branch = binary_tree_height(tree->left);
	right_branch = binary_tree_height(tree->right);

	return (left_branch - right_branch);
}

/**
 * binary_tree_height - file 9
 * @tree: file 9
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_branch, right_branch;

	if (tree == NULL)
		return (0);

	left_branch = binary_tree_height(tree->left);
	right_branch = binary_tree_height(tree->right);

	if (left_branch > right_branch)
		return (left_branch + 1);
	else
		return (right_branch + 1);
}
