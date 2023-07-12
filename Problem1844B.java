import java.io.*;
import java.util.StringTokenizer;

/*
Author: Mars_Coder
date: 2023-07-11 21:35:08
problem link: https://codeforces.com/contest/1844/problem/B
* Rename the filename as Main before submitting if needed!
*/

public class Problem1844B{
    static boolean prime[] = new boolean[200001];
    public static void main(String[] args){
        FastIO io;
        PrintWriter out = new PrintWriter(System.out);
        /* out.println(), out.print(), out.printf() */
        if(System.getProperty("ONLINE_JUDGE") == null){
            io = new FastIO(new File("input.txt"));
            try{
                out = new PrintWriter(new FileWriter("output.txt"));
            }catch(Exception e){
                e.getStackTrace();
            }
        }else{
            io = new FastIO();
        }
        ckPrime();
        int t = 1;
        t = io.nextInt();
        while(t-- > 0){
            int n = io.nextInt();
            if(n <= 2){
                if(n == 1) out.println(1);
                else out.println("2 1");
                continue;
            }
            int ans[] = new int[n];
            int[] notPrime = new int[n];
            int k = 0, k2 = 0;
            for(int i = 1; i <= n; ++i){
                if(prime[i]){
                    ans[k] = i;
                    ++k;
                }else{
                    notPrime[k2] = i;
                    ++k2;
                }
            }
            int pos = 0;
            for(int i = k - 1; i >= k / 2; --i, ++pos) out.printf("%d ", ans[i]);
            for(int i = k2 - 1; i > 0; --i, ++pos){
                if(pos == n / 2) {
                    out.printf("%d ", 1);
                    ++i;
                }
                else out.printf("%d ", notPrime[i]);
            }
            for(int i = k / 2 - 1; i >= 0; --i, ++pos){
                if(pos == n / 2) {
                    out.printf("%d ", 1);
                    ++i;
                }
                else out.printf("%d ", ans[i]);
            }
            out.println("");
        }
        out.close();
    }
    public static void ckPrime(){
        for(int i = 2; i <= 200000; ++i) prime[i] = true;
        prime[0] = prime[1] = false;
        for(int i = 2; i * i <= 200000; ++i){
            if(prime[i] == true){
                for(int j = i * i; j <= 200000; j += i){
                    prime[j] = false;
                }
            }
        }
    }
    public static class FastIO{
        BufferedReader br;
        StringTokenizer st;
        public FastIO(){
            br = new BufferedReader(new InputStreamReader(System.in));
        }
        public FastIO(File fileName){
            try{
                br = new BufferedReader(new FileReader(fileName));
            }catch(FileNotFoundException e){
                //System.out.println("I/O error: " + e);
                e.printStackTrace();
            }
        }
        String next(){
            while(st == null || !st.hasMoreTokens()){
                try{
                    st = new StringTokenizer(br.readLine());
                }catch(IOException e){
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
        int nextInt(){return Integer.parseInt(next());}
        Long nextLong(){return Long.parseLong((next()));}
        double nextDouble(){return Double.parseDouble(next());}
        String nextLine(){
            String str = "";
            try{
                if(st.hasMoreTokens()) str = st.nextToken("\n");
                else str = br.readLine();
            }catch(IOException e){
                e.printStackTrace();
            }
            return  str;
        }
    }
}
