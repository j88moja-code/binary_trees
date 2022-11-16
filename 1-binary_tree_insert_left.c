#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_insert_left - function to create left child.
 * @parent: parent node.
 * @value: value of each node's n.
 * Return: number of nodes
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

binary_tree_t *left_child;

left_child = malloc(sizeof(binary_tree_t));

if (left_child == NULL)
{
return (NULL);
}

left_child->n = value;
left_child->parent = parent;
left_child->right = NULL;
left_child->left = NULL;

if (parent == NULL)
{
free(left_child);
return (NULL);
}

if (parent->left != NULL)
{
left_child->left = parent->left;
left_child->left->parent = left_child;
}

parent->left = left_child;
return (left_child);
}
