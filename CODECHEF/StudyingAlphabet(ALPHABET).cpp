// Question Link : https://www.codechef.com/problems/ALPHABET
// PROBLEM CODE : ALPHABET 

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string letter ;
   // INPUT LETTER WHICH JEFF KNOW 
    cout << " \nEnter letters that jeff can read : " ; cin >> letter ;
    // HOW MANY NUMBERS ARE IN TH BOOK 
    int test ;
    cout << " \nEnter the number of words in the Book : " ; cin >> test ;
    while(test --)
    {  
        int count = 0 ; 
        string random ;
        cout << "\n Enter The random letters that have in that book : " ; cin >> random ;
        
        // SOLVING LOOP (IF JEFF KNOWN THE RANDOM LETTER OUTPUT WILL BE YES ELSE NO )
        for(int i = 0 ; i < random.size(); i++)
        {
            for(int j = 0 ; j < letter.size() ; j++)
            {
                if(tolower(random[i]) == tolower(letter[j]))  
                {   count++ ; 
                    break ; 
                }
            }
        }

        // OUTPUT STATEMENT 
        if(count == random.size())
            cout << " \nYES !! " ; 
        else cout << " \nNO !! " ;
    }

}