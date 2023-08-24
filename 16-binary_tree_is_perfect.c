#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: tree pointer
 *
 * Return: tree on success, 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;
	size_t left_size, right_size;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left != right)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	if (left_size != right_size)
		return (0);

	if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}
