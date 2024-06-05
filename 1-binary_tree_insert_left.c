#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - This function inserts a node as the left
 * child of another node
 * @parent: The root node used to access it
 * @value: The data part of the new node
 * Return: A pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_l;

	if (parent == NULL)
		return (NULL);

	node_l = malloc(sizeof(binary_tree_t));
	if (node_l == NULL)
		return (NULL);

	node_l->parent = parent;
	node_l->n = value;
	node_l->left = parent->left;
	node_l->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = node_l;

	parent->left = node_l;

	return (node_l);
}
