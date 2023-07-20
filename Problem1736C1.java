import java.io.*;
import java.util.*;

/*
Author: Mars_Coder
date: 2023-07-19 08:43:31
problem link: https://codeforces.com/problemset/problem/1736/C1
* Rename the filename as Main before submitting if needed!
*/

public class Problem1736C1{
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
            int a[] = new int[n];
            for(int i = 0; i < n; i++) a[i] = io.nextInt();
            int l = 1, r = 0;
            long ans = 0L;
            for(int i = 0; i < n; ++i){
                if(r == n){
                    ans += r - i;
                    continue;
                }
                l = r - i + 1;
                for(int j = r; j < n; ++j){
                    if(a[j] >= l){
                        ++r;
                        ++l;
                    }else break;
                }
                ans += r - i;
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
