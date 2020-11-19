// QUESTION LINK : https://www.codechef.com/problems/FLOW014 // 


#include<iostream>
using namespace std ;
int main()
{
    int test ;
    cin >> test ;
    for(int i=0;i<test ;i++)
    {
        cout << " \nmaterial no. :" << i+1 << endl;
        float hardness, tensile ;
        float carbon;
        
        cin >> hardness  >> carbon >> tensile ;
        if(hardness >50 && carbon < 0.7 && tensile > 5600 )
            cout <<  " 10 ";
        else if (hardness >50 && carbon < 0.7)
                {      cout << " 9 " ;     }
        else if (carbon < 0.7 && tensile > 5600)
                {      cout << " 8 " ;     }
        else if (hardness >50 &&  tensile > 5600) 
                {       cout << " 7 " ;    }
        else if (hardness >50 || carbon < 0.7 || tensile > 5600)
                {       cout << " 6 " ;    }
        else cout << " 5 " ;

    } 
}
