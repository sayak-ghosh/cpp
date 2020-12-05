//  Question link : https://www.codechef.com/problems/ATM2 
//  Problem Code: ATM2

#include<iostream>
using namespace std;
int main()
{
    int test ;
    cout << " \nHow many times you want to check : " ; 
    cin >> test ; 

    // TEST COUNTING LOOP 
    for(int i = 0 ; i< test ;i++)
    {
        int people , unit ;
        cout << " \nEnter the numbers of people " ;
        cin >> people; 
        cout << " \nEnter the amount of money in atm machine " ;
        cin >> unit ;
        int money[people] ;

        // INPUT LOOP
        for(int j = 0; j<people ;j++) 
        {
            cout << " \nenter the amount of money that " << i+1 << "  want to withdraw : " ;
            cin >> money[j] ;
        }

        // SOLVING LOOP 
        for(int j = 0 ;j< people ; j++)
        {
            if(unit - money[j] >= 0 )
                {
                   unit = unit - money[j] ;
                    money[j] = 1 ;
                    
                }
            else money[j] = 0 ;
        }
        
        // OUTPUT LOOP
        for(int j =0 ; j< people ; j++)
        {
            cout << "\n" << money[j] << endl ;
        }
    }
}