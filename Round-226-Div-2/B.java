/**
 *
 * @author ashish1610
 */
import java.io.*;
import java.util.*;
import java.math.*;
public final class BearStrings 
{
    public static void main(String[] args)throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        String str=br.readLine();
        int ans=0;
        for(int i=0;i<str.length();++i)
        {
            for(int j=i+3;j<str.length();++j)
            {
                if(str.charAt(j)=='r' && str.charAt(j-1)=='a' && str.charAt(j-2)=='e' && str.charAt(j-3)=='b')
                {
                    ans+=(str.length()-j);
                    break;
                }
            }
        }
        System.out.println(ans);
    }
}
