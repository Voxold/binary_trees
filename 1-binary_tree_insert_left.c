#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts
 * a node as the left-child of another node
 * @value: value of the new node to be created
 * @parent: a pointer to the parent node of the node to create
 * Return: A pointer to the newly allocated node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (!parent->left)
		parent->left = new_node;
	else
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	return (new_node);
}
