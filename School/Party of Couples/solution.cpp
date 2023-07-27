//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{

    public:
    int findSingle(int N, int arr[]){

        //code here

        //as a complexity of O(N) is needed we can only have one loop at the program
        //so the solution is to use the xor operator to return the missing number 

        int answer = 0;

        for (int i = 0; i < N; i++){

            answer ^= arr[i];
        }

        return {answer};

    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.findSingle(N, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends