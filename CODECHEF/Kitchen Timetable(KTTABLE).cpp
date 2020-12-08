// Question link : https://www.codechef.com/problems/KTTABLE
//  PROBLEM CODE : KTTABLE 

#include<iostream>
using namespace std ;
int main()
{
    int test ;
    cout << "\nHow mant times you want to check : "  ;
    cin >> test ;
    // TEST COUNT LOOP 
    for(int j = 0; j<test ;j++)
    {
        int num ;
        cout <<"\nHow many students are there for cook : " ; 
        cin >> num ;
        int Times_have[num] ;
        int Times_require[num] ;
 
        // INPUT LOOP FOR TIMES HAVE FOR EACH STUDENT
        for(int i=0 ;i<num ;i++)
        {
            cout << "\nTimes have for student " << i+1  << " is : ";
            cin >> Times_have[i] ;;  
        }

        // INPUT LOOP FOR TIMES REQUIRE FOR EACH STUDENT
        for(int i=0 ;i<num ;i++)
        {
            cout << "\nTimes require for student  " << i+1 <<" is : "; 
            cin  >> Times_require[i] ; 
        }

        // SOLVING LOOP (IF THE TIMES_HAVE ARRAY IS GRATER THAN TIMES_REQUIRE ARRAY IT WILL BE COUNTING OTHERWISE SKIP AND CONTINUE)
        int count = 0 ;
        for(int i=0 ;i<num ;i++)
        {
            if(i==0)
            {   
                 
                if(Times_have[i]>=Times_require[i])
                {
                    count++;
                }
            }
            else 
            {
                    if(Times_have[i] - Times_have[i-1]>=Times_require[i])
                    {
                        count ++ ;
                    }
            }

        }
        // OUTPUT STATEMENT 
        cout << "\nThe number of students that will be able to finish the cooking is : " << count << endl;
    }
}