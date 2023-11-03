#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary is perfect
 * @tree: root node of the tree
 *
 * Return: 1 if tree is perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t longeur, feuilles;

	if (tree == NULL)
		return (0);

	longeur = binary_tree_height(tree);
	feuilles = (size_t)1 << longeur;

	return (binary_tree_is_full(tree) && feuilles == binary_tree_height(tree));
}
