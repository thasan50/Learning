import java.util.ArrayList;
import java.util.Scanner;

public class Trebuchet{
    public static void main(String[] args) {
        ArrayList<String> input = new ArrayList<String>();
        File p = new File("input.txt");
        Scanner sc = new Scanner(p);
        while (sc.hasNextLine()) {
            input.add(sc.nextLine());
        }
        int first; int second;
        for (int i = 0; i < input.size(); i++) {
            for (int j = 0; j < input.get(i).length; j++) {
                
            }
        }
    }
}