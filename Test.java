import java.io.*;
import java.util.*;

/*
Author: Mars_Coder
date: 2023-07-14 15:09:33
problem link: 
* Rename the filename as Main before submitting if needed!
*/

public class Test{
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
        //t = io.nextInt();
        while(t-- > 0){
            HashMap<String, Integer> map = new HashMap<>();
            map.put("Bd", 17);
            map.put("US", 200);
            map.put("UK", 100);
            map.put("IN", 250);
            // for(Map.Entry<String, Integer> e: map.entrySet()){
            //     out.println(e.getKey() + " -> " + e.getValue());
            // }
            Set<String> keys = map.keySet();
            for(String key: keys){
                out.println(key + " -> " + map.get(key));
            }
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
