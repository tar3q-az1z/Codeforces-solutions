import java.io.*;
import java.util.StringTokenizer;

/*
Author: Mars_Coder
date: 2023-07-09 21:32:04
problem link: 
* Rename the filename as Main before submitting if necessary!
*/

public class Test{
    public static void main(String[] args){
        //FastIO io = new FastIO();
        FastIO io = new FastIO(new File("input.txt"));
        int n = io.nextInt();
        int a[] = new int[n];
        for(int i = 0; i < n; ++i) a[i] = io.nextInt();
        String s = io.next();
        String line = io.nextLine();
        for(int i = 0; i < n; ++i) System.out.println(a[i]);
        System.out.println(s);
        System.out.println(line);
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
