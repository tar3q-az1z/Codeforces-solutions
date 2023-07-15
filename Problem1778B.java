import java.io.*;
import java.util.*;

/*
Author: Mars_Coder
date: 2023-07-15 16:27:19
problem link: https://codeforces.com/problemset/problem/1778/B
* Rename the filename as Main before submitting if needed!
*/

public class Problem1778B{
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

        int t = 1;
        t = io.nextInt();
        while(t-- > 0){
            int n = io.nextInt();
            int m = io.nextInt();
            int d = io.nextInt();
            HashMap<Integer, Integer> map = new HashMap<>();
            for(int i = 0; i < n; ++i){
                int ai = io.nextInt();
                map.put(Integer.valueOf(ai), Integer.valueOf(i + 1));
            }
            int[] a = new int[m];
            for(int i = 0; i < m; ++i) a[i] = io.nextInt();
            int ans = Integer.MAX_VALUE;
            for(int i = 0; i < m - 1; ++i){
                int prev = map.get(a[i]);
                int next = map.get(a[i + 1]);
                if(prev > next){
                    ans = 0;
                    break;
                }
                if(next - prev > d){
                    ans = 0;
                    break;
                }
                ans = Math.min(ans, next - prev);
                if(next - prev <= d){
                    int nc = d - (next - prev) + 1;
                    int av = 0;
                    if(prev > 1) av += prev - 1;
                    if(next < n) av += n - next;
                    if(nc <= av) ans = Math.min(ans, nc);
                }
            }
            out.println(ans);
        }
        out.close();
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
