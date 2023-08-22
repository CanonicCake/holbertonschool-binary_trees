#include "binary_trees.h"

/**
 * binary_tree_size - size of a tree
 * @tree: pointer to tree
 *
 * Return: tree size if not NULL, 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);

	i += binary_tree_size(tree->left);
	i += binary_tree_size(tree->right);

	return (i + 1);
}
