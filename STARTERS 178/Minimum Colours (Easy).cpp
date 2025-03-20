// https://www.codechef.com/START178C/problems/MINCOL

import java.util.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        
        while (T-- > 0) {
            int N = scanner.nextInt();
            int[] A = new int[N + 1];
            
            for (int i = 1; i <= N; i++) {
                A[i] = scanner.nextInt();
            }
            
            int[] dp = new int[N + 1];
            int INF = 1_000_000_000;
            int bestAll = dp[0];
            int best0 = INF;
            int[] bestColor = new int[N + 1];
            Arrays.fill(bestColor, INF);
            
            for (int i = 1; i <= N; i++) {
                if (A[i] == 0) {
                    best0 = Math.min(best0, dp[i - 1]);
                } else {
                    bestColor[A[i]] = Math.min(bestColor[A[i]], dp[i - 1]);
                }
                
                bestAll = Math.min(bestAll, dp[i - 1]);
                
                if (A[i] == 0) {
                    dp[i] = 1 + bestAll;
                } else {
                    int candidate = Math.min(best0, bestColor[A[i]]);
                    dp[i] = 1 + candidate;
                }
            }
            
            System.out.println(dp[N]);
        }
        
        scanner.close();
    }
}
