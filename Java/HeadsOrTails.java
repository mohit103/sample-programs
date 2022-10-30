/**
 * HeadsOrTails
 */
import java.io.*;

public class HeadsOrTails {

    static String numToString(int num) {
        switch (num) {
            case 0:
                return "Heads";
            case 1:
                return "Tails";
            default:
                return "";
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Please input the number of trials: ");
        int n = Integer.parseInt(br.readLine());
        int h, t;
        h = t = 0;
        System.out.println("Calculating...");
        for (int i = 0; i < n; i++) {
            int o = (int) (Math.random() * 2);
            // System.out.println(numToString(o));
            if (o == 0)
                h++;
            else
                t++;
        }
        System.out.println("Heads: " + h + ", Tails: " + t);
        double ph = (double) h / n;
        double pt = (double) t / n;
        System.out.println("P(Heads) = " + ph + " and P(Tails) = " + pt);
    }
}
