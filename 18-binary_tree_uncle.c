#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of tree
 * @node: node pointer
 *
 * Return: uncle node on success, NULL if NULL or no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

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
