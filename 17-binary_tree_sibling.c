#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to node
 *
 * Return: NULL if node or parent are NULL
 * NULL if node has no sibling, sibling otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if ((node->parent)->left == node)
		return ((node->parent)->right);

	else
		return ((node->parent)->left);
}
