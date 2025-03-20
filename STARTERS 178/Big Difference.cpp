// https://www.codechef.com/START178C/problems/BIGDIF

import java.util.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        
        while (T-- > 0) {
            int n = scanner.nextInt();
            int k = scanner.nextInt();
            
            Optional<int[]> result = IntStream.rangeClosed(Math.max(1, n - 1), n)
                .boxed()
                .flatMap(a -> IntStream.iterate(a % 2 == 0 ? 1 : 2, b -> b <= a - k, b -> b + 2)
                    .mapToObj(b -> new int[]{a, b}))
                .filter(pair -> Math.abs(pair[0] - pair[1]) >= k)
                .filter(pair -> {
                    int g = gcd(pair[0], pair[1]);
                    int l = (pair[0] * pair[1]) / g;
                    return Math.abs(g - l) >= 2 * k;
                })
                .findFirst();
            
            result.ifPresentOrElse(
                pair -> System.out.println(pair[0] + " " + pair[1]),
                () -> System.out.println("-1 -1")
            );
        }
        
        scanner.close();
    }
    
    private static int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
}