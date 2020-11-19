// QUESTION_LINK :  https://www.codechef.com/problems/POTATOES //

#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    int test ; 
    cin >> test ; 
    for(int i =0 ; i <test ; i++)
    {
        int f1,f2,f3 ;
        cin >> f1 >> f2 ;
        
        for(int j = 1 ; j < 100 ; j++ )
        {
            f3 = f1+ f2 + j ;
            int flag = 0 ;   
            for(int k = 2 ; k <= sqrt(f3) ; k++)
            {  
                if (f3 % k == 0 )
                {
                    flag = 1 ; 
                    break ; 

                }
            }
            if (flag == 0 )
                {   cout << j ;
                    break ;
                }

        }  
    }
}
