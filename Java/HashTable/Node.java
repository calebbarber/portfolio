public class Node {
	
	public int key;
	public int count;
	public Node next;
	public int Value;	

	Node (int _key, Node _next) {
		key = _key;
		next = _next;
		count = 1;
	}
	
	Node (int k, int v, Node n) {
    	key = k;
	    Value = v;
	    next = n;
	}
}
