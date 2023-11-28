<h1>0x1D. C - Binary trees</h1>
<h2>Overview</h2>
<p>
	This C project focuses on the implementation and understanding of binary trees. It covers fundamental concepts such as what a binary tree is, the difference between a binary tree and a Binary Search Tree (BST), time complexity advantages compared to linked lists, and various properties of binary trees including depth, height, size, and different traversal methods.
</p>
<h2>Learning Objectives</h2>
<ol>
	<li>
		<strong>What is a Binary Tree?</strong><br>
		A binary tree is a hierarchical data structure composed of nodes, where each node has at most 2 children, referred to as the left child & right child.
	</li>
	<li>
		<strong>Difference between a Binary Tree & a Binary Search Tree (BST)</strong><br>
		While a binary tree is a general hierarchical structure, a Binary Search Tree imposes an ordering property. In a BST, for each node, all elements in its left subtree are less than the node, and all elements in its right subtree are greater.
	</li>
	<li>
		<strong>Time Complexity Gain compared to Linked Lists</strong><br>
		Binary Trees provide efficient searching, insertion & deletion operations with a time complexity of 0(log n) on average, compared to linked lists, which have a linear time complexity of 0(n) for these operations.
	</li>
	<li>
		<strong>Properties of Binary Trees</strong><br>
		<ul>
			<li><strong>Depth:</strong> The depth of a node is the length of the path from the root to that node.</li>
			<li><strong>Height:</strong> The height of a tree is the length of the longest path from the root to a leaf node.</li>
			<li><strong>Size:</strong> The size of a binary tree is the total number of nodes in the tree.</li>
		</ul>
	</li>
	<li>
		<strong>Traversal Methods</strong><br>
		There are 3 main methods to traverse a binary tree:
		<ul>
			<li><strong>Inorder:</strong> Left, Root, Right</li>
			<li><strong>Preorder:</strong> Root, Left, Right</li>
			<li><strong>Postorder:</strong> Left, Right, Root</li>
		</ul>
	</li>
	<li>
		<strong>Types of Binary Trees</strong><br>
		<ul>
			<li><strong>Complete Binary Tree:</strong> every level is completely filled, except possibly the last level, which is filled from left to right.</li>
			<li><strong>Full Binary Tree:</strong> every node has either 0 or 2 children.</li>
			<li><strong>Perfect Binary Tree:</strong> a binary tree in which all the interior nodes have 2 children, and all leaf nodes are at the same level.</li>
			<li><strong>Balanced Binary Tree:</strong> a binary tree is said to be balanced if the height of the left & right subtrees of any node differ by no more than one.</li>
		</ul>
	</li>
</ol>
<h2>Getting started</h2>
<h3>Data structures</h3>
Basic Binary Tree<br>
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```