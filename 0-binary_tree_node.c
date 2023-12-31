#include "binary_trees.h"

/**
 * binary_tree_node - node of a binary tree
 * @parent: root of tree
 * @value: value
 *
 * Return: node on success, NULL otherwise
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
