#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert on right node
 * @parent: root of tree
 * @value: value of elements in node
 *
 * Return: parent on success, NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right = node;
		(node->right)->parent = node;
	}
	else
	{
		parent->right = node;
		node->right = NULL;
	}
	return (NULL);
}
