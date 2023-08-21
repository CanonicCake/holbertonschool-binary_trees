#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes
 * @tree: tree to count from
 *
 * Return: child node count, 0 is tree is NULL,
 * NULL if pointer is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		i++;

	i += binary_tree_nodes(tree->left);
	i += binary_tree_nodes(tree->right);

	return (i);
}
