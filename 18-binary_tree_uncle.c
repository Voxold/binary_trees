#include "binary_trees.h"
/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parents, *grandparent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parents = node->parent;
	grandparent = parents->parent;
	if (grandparent)
	{
		if (grandparent->left == parents)
			return (grandparent->right);
		return (grandparent->left);
	}
	return (NULL);
}
