#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes  the binary tree
 * @tree: node of tree to  do a deletion
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
