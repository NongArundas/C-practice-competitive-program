#include<iostream> // To import cin and cout
#include<cstdio>   
#include<cmath>
// Include headers as needed

using namespace std;

int main()
{
    // Write your code here
    int t;
    cin>>t; //Number of test case
    while(t--)
    {
        int n, i;
        cin>>n;
        //int rem[i]; // if no error when rem[i] is here and remove "//" 
        if(n == 0) //decimal number is 0
        {
            cout<<n<<endl; // print the zero
        }
        // decimal number is not 0 and others
        else
        {
            i = 0;
            int rem[i];// remender value store in array // if error is happened use this code
            while(n != 0)
            {
                rem[i] = n%2; // apply modulus to find the remender 
                n /= 2;
                i++;  // increasing the index of remender array
            }
            for(int k = i - 1; k >= 0; k--) // decimal to binary and reverse the array
            {
                cout<<rem[k]; // print the correct output
            }
            cout<<endl;
        }
        
    }
    
    // Return 0 to indicate normal termination
    return 0;
}
