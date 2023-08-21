#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves
 * @tree: pointer to the tree
 *
 * Return: NULL if not a leaf, 0 if tree is NULL,
 * and leaf count otherwise
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		leaves += 1;
	leaves += binary_tree_leaves(tree->right);
	leaves += binary_tree_leaves(tree->left);
	return (leaves);
}
