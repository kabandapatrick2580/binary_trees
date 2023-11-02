#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right child
 * @parent: pointer to insert the right child in
 * @value: value to store
 *
 * Return: created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_np;

	if (parent == NULL)
		return (NULL);

	node_np = malloc(sizeof(binary_tree_t));
	if (node_np == NULL)
		return (NULL);

	node_np->n = value;
	node_np->parent = parent;
	node_np->left = NULL;
	node_np->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = node_np;

	parent->right = node_np;

	return (node_np);
}
