# binary_trees

A binary tree is a k-ary {\displaystyle k=2}k=2 tree data structure in which each node has at most two children, which are referred to as the left child and the right child. A recursive definition using just set theory notions is that a (non-empty) binary tree is a tuple (L, S, R), where L and R are binary trees or the empty set and S is a singleton set containing the root. Some authors allow the binary tree to be the empty set as well. (Wikipedia)

* [binary_trees.h]() - header file with structs and prototypes for all functions created for the tasks of this project.

`mandatory tasks`

* [0-binary_tree_node.c]() - a function that creates a binary tree node

	* Prototype:`binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
	* Where `parent` is a pointer to the parent node of the node to create
	* And `value` is the value to put in the new node
	* When created, a node does not have any child
	* Your function must return a pointer to the new node, or `NULL` on failure

* [1-binary_tree_insert_left.c]() - a function that inserts a node as the left-child of another node

	* Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
	* Where `parent` is a pointer to the node to insert the left-child in
	* And `value` is the value to store in the new node
	* Your function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
	* If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

* [2-binary_tree_insert_right.c]() - a function that inserts a node as the right-child of another node

	* Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
	* Where `parent` is a pointer to the node to insert the right-child in
	* And `value` is the value to store in the new node
	* Your function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
	* If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

* [3-binary_tree_delete.c]() - a function that deletes an entire binary tree

	* Prototype: `void binary_tree_delete(binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to delete
	* If `tree` is `NULL`, do nothing

* [4-binary_tree_is_leaf.c]() - a function that checks if a node is a leaf

	* Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
	* Where `node` is a pointer to the node to check
	* Your function must return `1` if `node` is a leaf, otherwise `0`
	* If `node` is `NULL`, return `0`

* [5-binary_tree_is_root.c]() - a function that checks if a given node is a root

	* Prototype: `int binary_tree_is_root(const binary_tree_t *node);`
	* Where `node` is a pointer to the node to check
	* Your function must return `1` if `node` is a root, otherwise `0`
	* If `node` is `NULL`, return `0`

* [6-binary_tree_preorder.c]() - a function that goes through a binary tree using pre-order traversal

	* Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
	* Where `tree` is a pointer to the root node of the tree to traverse
	* And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
	* If `tree` or `func` is `NULL`, do nothing

* [7-binary_tree_inorder.c]() - a function that goes through a binary tree using in-order traversal

	* Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
	* Where `tree` is a pointer to the root node of the tree to traverse
	* And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
	* If `tree` or `func` is `NULL`, do nothing

* [8-binary_tree_postorder.c]() - a function that goes through a binary tree using post-order traversal

	* Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
	* Where `tree` is a pointer to the root node of the tree to traverse
	* And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
	* If `tree` or `func` is `NULL`, do nothing
	
* [9-binary_tree_height.c]() - a function that measures the height of a binary tree

	* Prototype: `size_t binary_tree_height(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to measure the height.
	* If `tree` is `NULL`, your function must return `0`

* [10-binary_tree_depth.c]() - a function that measures the depth of a node in a binary tree

	* Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the node to measure the depth
	* If `tree` is `NULL`, your function must return `0`

* [11-binary_tree_size.c]() - a function that measures the size of a binary tree

	* Prototype: `size_t binary_tree_size(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to measure the size
	* If `tree` is `NULL`, the function must return `0`

* [12-binary_tree_leaves.c]() - a function that counts the leaves in a binary tree

	* Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to count the number of leaves
	* If `tree` is `NULL`, the function must return `0`
	* A `NULL` pointer is not a leaf

* [13-binary_tree_nodes.c]() - a function that counts the nodes with at least 1 child in a binary tree

	* Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to count the number of nodes
	* If `tree` is `NULL`, the function must return `0`
	* A `NULL` pointer is not a node

* [14-binary_tree_balance.c]() - a function that measures the balance factor of a binary tree

	* Prototype: `int binary_tree_balance(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to measure the balance factor
	* If `tree` is `NULL`, return `0`

* [15-binary_tree_is_full.c]() - a function that checks if a binary tree is full

	* Prototype: `int binary_tree_is_full(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to check
	* If `tree` is `NULL`, your function must return `0`

* [16-binary_tree_is_perfect.c]() - a function that checks if a binary tree is perfect

	* Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to check
	* If `tree` is `NULL`, your function must return `0`

* [17-binary_tree_sibling.c]() - a function that finds the sibling of a node

	* Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
	* Where `node` is a pointer to the node to find the sibling
	* Your function must return a pointer to the sibling node
	* If `node` is `NULL` or the parent is `NULL`, return `NULL`
	* If `node` has no sibling, return `NULL`

* [18-binary_tree_uncle.c]() - a function that finds the uncle of a node

	* Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
	* Where `node` is a pointer to the node to find the uncle
	* Your function must return a pointer to the uncle node
	* If `node` is `NULL`, return `NULL`
	* If `node` has no uncle, return `NULL`


`advanced tasks`


