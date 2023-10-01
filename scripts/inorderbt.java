import java.util.*;

class Node {
    int data;
    Node left, right;
    Node(int data) {
        this.data = data;
        left = null;
        right = null;
    }
}
class inorderbt {

    static void inOrderTrav(Node curr, ArrayList < Integer > inOrder) {
        if (curr == null)
            return;

        inOrderTrav(curr.left, inOrder);
        inOrder.add(curr.data);
        inOrderTrav(curr.right, inOrder);
    }



    public static void main(String args[]) {

        Node root = new Node(12);
        root.left = new Node(5);
        root.right = new Node(31);
        root.left.left = new Node(11);
        root.left.right = new Node(19);
        root.left.right.left = new Node(66);
        root.right.left = new Node(1);
        root.right.right = new Node(99);
        root.right.right.left = new Node(14);
        root.right.right.right = new Node(17);

        ArrayList < Integer > inOrder = new ArrayList < > ();
        inOrderTrav(root, inOrder);

        System.out.println("The inOrder Traversal is : ");
        for (int i = 0; i < inOrder.size(); i++) {
            System.out.print(inOrder.get(i) + " ");
        }
    }
}
