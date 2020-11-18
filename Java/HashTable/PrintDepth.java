
public class PrintDepth {
	private static int printdepth; // The depth to print all the elements.


	public static void main(String [] args) {
		MyTree T = new MyTree(); // Gets a Tree object.
		TreeNode root = T.getRoot(); // Gets the root of the tree.
               
		printdepth = 111; // sets the tree to depth 111
        print(root, printdepth);    
    }


    public static void print (TreeNode root, int level) {
        // TODO: Please write a recursive function to print all nodes at level (or depth) 111, all sorted from right to left
        if (root != null) {
            if (level == 0) System.out.println(root.key);
    
            else {    
                print(root.right, level - 1);
                print(root.left, level - 1);                
            }                
        }                    
    }	
}
