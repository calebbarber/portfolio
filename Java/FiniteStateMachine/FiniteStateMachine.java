import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class FiniteStateMachine {
    private final static int[][] STATE_TABLE = {
        {  3,  1, 0, 9 },
        {  3,  1, 2, 9 },
        {  3,  7, 0, 9 },
        {  6,  4, 0, 9 },
        {  3,  1, 5, 9 },
        {  3,  8, 7, 9 },
        {  6,  4, 7, 9 },
        {  7,  7, 7, 9 },
		{  8,  8, 8, 9 },
        {  9,  9, 9, 9 },
    };

    private BufferedReader in;

    public FiniteStateMachine() {
        in = new BufferedReader(
                 new InputStreamReader(System.in));
    }

    public void run() throws IOException {
        char ch;
        int  state;
        for (;;) {
            System.out.println("Enter your string: ");
            ch = (char) in.read();

            // set state to start state
            state = 0;   
                   
            while (ch != '\n') 
            {
               state = STATE_TABLE[state][charToColumn(ch)];
               ch = (char) in.read();
            }
            
            // determine whether to accept or reject
            if (state == 7 || state == 8) { 
                System.out.println("Accept\n");
            } else {
                System.out.println("Reject\n");
            }
        }
    }
    public int charToColumn(char ch) {
        // column 3 is for some unexpected character
        int column = 3;

        switch( ch ) {
        case 'a':
            column = 0;
            break;

        case 'b':
            column = 1;
            break;
            
		case 'c':
			column = 2;
			break;
        }

        return column;
    }

    public static void main(String[] args) {
        try {
            FiniteStateMachine fsm = new FiniteStateMachine();
            fsm.run();
        } catch (IOException ex) {
            ex.printStackTrace();
            System.exit(1);
        }
    }
}
