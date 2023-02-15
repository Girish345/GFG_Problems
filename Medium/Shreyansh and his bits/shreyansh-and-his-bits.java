//{ Driver Code Starts
//Initial Template for Java

//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            String input_line[] = read.readLine().trim().split("\\s+");
            long  N = Long.parseLong(input_line[0]);
            Solution ob = new Solution();
            System.out.println(ob.count(N));
        }
    }
}



// } Driver Code Ends


//User function Template for Java

class Solution{  

    long count(long n)

    {

        // Code Here

        long result = 0;

        int setBits = 0;

        for(int i = 0; i < 64; i++){

            if((n & 1) == 1){

                setBits++;

                long csb_res = csb(i, setBits);

                result = result + csb_res;

            }

            n = n >> 1;

        }

        return result;

    }

    

    public static long csb(long n, long k){

            

        if(n == 0 || n < k)

            return 0;

        long result = 1;

        if(k > n-k){

            k = n - k;

        }

        

        for(int i = 0; i < k; i++){

            result *= (n-i);

            result /= (i + 1);

        }

            

        return result;

    }

}