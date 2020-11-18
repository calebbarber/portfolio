
public class Raffle {
	private static Raffle raffle;
	private Machine A; 
	private Machine B;
	private long c1; // Cost of executing Machine A.
	private long c2; // Cost of executing Machine B.
	private int n;  // Range of values for raffle tickets.

	public Raffle(Machine _A, Machine _B) {
		A = _A;
		B = _B;
		c1 = A.getCost();
		c2 = B.getCost();
		n = A.getN(); // Will be the same as B.getN();
		play();
	}

	public static void main(String [] args) {
		
        raffle = new Raffle(new Machine(100000, 17), new Machine(100000, 21));

        // This is just one execution of the Raffle program. We will be testing with different cases.
		// Make sure your program is working for all cases.
	}

	private void play() {
		// TODO: Print the winning ticket with lowest cost.
		// See handout for input / output description.
        // You can acquire the next ticket from Machine A by calling A.nextInt(). Similarly from Machine B.

        long lowest = Long.MAX_VALUE;
        int win = 0;
        HashTable a = new HashTable(n);
        HashTable b = new HashTable(n);

        for (int i = 0; i < n-1; i++) {
            a.insert(A.nextInt(), i+1);
            b.insert(B.nextInt(), i+1);
                
        }

        for (int j = 0; j < n-1; j++) {
            if (a.find(j) && b.find(j) && ((long) a.findValue(j) * c1 + (long) b.findValue(j) * c2 < lowest)) {
                lowest = (long) a.findValue(j) * c1 + (long) b.findValue(j) * c2;
                win = j;    
            }
        }
                        
        System.out.println("The cheapest winning ticket is: " + win);
        System.out.println("The cost is: " + lowest);
	}
}

