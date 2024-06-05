#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - This function inserts a node as the
 * right child of another node
 * @parent: A pointer to the node to insert the right child in
 * @value: This is the date part of the new node
 * Return: A pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_r;

	if (parent == NULL)
		return (NULL);

	node_r = malloc(sizeof(binary_tree_t));
	if (node_r == NULL)
		return (NULL);

	node_r->parent = parent;
	node_r->n = value;
	node_r->left = NULL;
	node_r->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = node_r;

	parent->right = node_r;

	return (node_r);
}
