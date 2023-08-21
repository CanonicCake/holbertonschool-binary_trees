#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert lower value on left
 * @parent: root of tree
 * @value: value to be manipulated
 *
 * Return: parant on success, NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left = node;
		(node->left)->parent = node;
	}
	else
	{
		parent->left = node;
		node->left = NULL;
	}
	return (node);
}
