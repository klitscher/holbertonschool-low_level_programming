#include "binary_trees.h"

/**
 * binary_tree_uncle - Finding the uncle of a given node
 * @node: pointer of node to find uncle of
 *
 * Return: return pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	else if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (NULL);
}
