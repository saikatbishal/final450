import java.util.Scanner;

/**
 * YoungPhysicist
 */
public class YoungPhysicist {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        var sumX = 0;
        var sumY = 0;
        var sumZ = 0;
        while (n-- != 0) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            int z = sc.nextInt();
            sumX += x;
            sumY += y;
            sumZ += z;
        }
        if (sumX == 0 && sumY == 0 && sumZ == 0)
            System.out.println("YES");
        else
            System.out.println("NO");
        sc.close();
    }
}