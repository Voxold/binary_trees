#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @value: value of the new node to be created
 * @parent: a pointer to the parent node of the node to create
 * Return: A pointer to the newly allocated node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
