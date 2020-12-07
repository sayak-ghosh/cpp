// Question link : https://www.codechef.com/problems/CHEFARRP
// CODE_CHEF PROBLEM CODE : CHEFARRP

#include<iostream>
using namespace std ;
int main()
{
    int test ;
    cout << "\n How many times you want to check : " ;
    cin >> test ;

    // Test_Loop 
    for(int i = 0 ; i < test ; i++) 
    {
        int integer ;
        cout << "\n Enter how many postitive Integer you want to insert in array : " ;cin >> integer ; 
        int array[integer] ;

        // Array_Input_Loop
        for(int j =0 ;j<integer ; j++)
        {
            cout << "\n Enter the element number " << j+1 << " is  :" ;
            cin >> array[j] ;
        }
        int  count = 0;

        //Solving_loop 
        for(int j = 0 ; j < integer ; j++)
        {
            int sum_temp = 0, product_temp = 1 ;

            /* multiply and add the array elements 
               and check if they same then count if not
               then skip the if loop and continue */  
            for(int k = j ; k < integer ; k++)
            {
                sum_temp += array[k] ;
                product_temp *= array[k] ;
                if(sum_temp == product_temp)
                {
                    count ++ ;
                }
            }
        }
        // Output _statement 
        cout << "\n The number of such subarray is  : " << count << endl ;
    }
    return 0 ;
}