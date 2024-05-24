/*  NLDS : Not aranged in sequential order
           Exists hierarchial relationship
           Ex : Trees,Graphs
    TREES : A tree is a non linear and a hierarchial data structure consisting of a collection of nodes
            such that each node of the tree stores a value and a list of references to other nodes(the "children")
                  60
  
           99   33    41   27
            |        /  \
           12       48  64  

    TERMINOLOGY : 

                  10
                 /  \
                20  30
              / |   | \
             40 50  60 70
             | 
             80   

         Parent Node : The node which is an immmediate predecessor of another node (For 20 : 10 is the parent node)

         Child Node  : Immediate successor of a node (20,30 are child nodes of 10)

         Root Node   : Top most node of a tree / Node which does not have any parent node (10 is the root node)
                       A non-empty tree must contain exactly one root node and exactly one path from the root
                       to all other nodes of the tree
        
         Leaf/External Node : Nodes which do not have any children (80,50,60,70 are leaf nodes)

         Ancestor of a Node : Any predecessor nodes on the path from the root to that node (20,10 are ancestors of 50)

         Descendant of a Node : Any successor nodes on the path from the leaf node to that node(For 30 : 60,70 are descendants) 

         Siblings    : Children of the same parent node (Siblings of 40 : 50)

         Level of a Node : The count of edges on the path from the root node to that node
                           Root Node LEVEL : 0
                           Level of 40     : 2
                           Level of 80     : 3

         Levels of a Tree : 
                            LEVEL 0 : 10
                            LEVEL 1 : 20 30
                            LEVEL 2 : 40 50 60 70
                            LEVEL 3 : 80
              
         Neighbours of a Node : 
                          
         Subtree   : Any node of the tree along with its descendants is called as a subtree 

    PROPERTIES OF A TREE : 

       Number of edges  : An edge can be defined as the connection between two nodes
                         N nodes --> (N-1) edges

       Depth of a Node  : Length of the path / Number of edges from root to that node

       Height of a Node : The number of edges on the longest downward path between that node and a leaf
                          Height of Node 20 : 2

       Degree of a Node : Number of children the node is having 
                          Degree of 20 : 2
                          Degree of 80 : 0

    TYPES OF TREES : 
       1) General tree (N-ary)   : It has no restriction on the number of nodes
                                   It means the parent node can have any number of child nodes

       2) Binary tree            : A node can have a maximum of two child nodes
                                   Binary tree is a tree in which each node will contain at most 2 nodes
                                   As there will be atmost 2 children for any given parent , we will call them 
                                   as left child and right child
                                 
       3) Binary Search tree(BST): In a BST , every node's left part contains the nodes with value less than that of the node
                                   And right part contains the nodes with value greater than that of the node
                                   In other words , 
                                       In a BST , if you consider a node N with value V , its left part contains nodes with value < V
                                       and right part contains nodes with value > V
       Example of BST :                            
                 8
                / \
               4   10
              / \  / \ 
             2  5  6  12
            / \       / \
           1  8      10 15

                                                                         




*/