#include "binary_trees.h"

/**
 * binary_tree_height - measuring height of a tree
 * @tree: root node of tree to do measurement
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_droite = 0;
	size_t r_height = 0;

	if (tree == NULL)
		return (0);

	l_droite = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (l_droite > r_height ? l_droite : r_height);
}
