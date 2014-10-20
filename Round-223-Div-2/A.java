/**
 *
 * @author ashish1610
 */
import java.io.*;
import java.util.*;
public final class Sereja_Dima 
{    
    public static void main(String[] args)throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(br.readLine());
        ArrayList<Integer> ar=new ArrayList();
        String[] str=br.readLine().split(" ");
        for(int i=0;i<n;++i)
        {
            int temp=Integer.parseInt(str[i]);
            ar.add(temp);
        }
        int sereja_sum=0;
        int dima_sum=0;
        int turn=0;
        for(int i=0;i<n;++i)
        {
            if(turn==0)
            {
                int index;
                sereja_sum+=Math.max(ar.get(0), ar.get(ar.size()-1));
                if(ar.get(0)>ar.get(ar.size()-1))
                    index=0;
                else
                    index=ar.size()-1;
                ar.remove(index);
                turn=1;
            }
            else
            {
                int index;
                dima_sum+=Math.max(ar.get(0), ar.get(ar.size()-1));
                if(ar.get(0)>ar.get(ar.size()-1))
                    index=0;
                else
                    index=ar.size()-1;
                ar.remove(index);
                turn=0;
            }
        }
        System.out.println(sereja_sum+" "+dima_sum);
    }
}
