#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value of the new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_np;

	node_np = malloc(sizeof(binary_tree_t));

	if (node_np == NULL)
		return (NULL);

	node_np->n = value;
	node_np->parent = parent;
	node_np->left = NULL;
	node_np->right = NULL;

	return (node_np);
}
