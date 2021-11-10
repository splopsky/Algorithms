#include <iostream>
#include <string>
using namespace std;

// Returns the greatest Fibonacci Numberr smaller than
// or equal to n.
int nearestSmallerEqFib(int n)
{
    // Corner cases
    if (n == 0 || n == 1)
        return n;

    const int N = 44;
    //피보나치 수열 배열 생성
    int F[N];

    for (int i = 0; i < N; i++)
    {
        if (i == 0) F[i] = 0;
        else if (i == 1) F[i] = 1;
        else F[i] = F[i - 1] + F[i - 2];
    }
    
    // Find the greatest Fibonacci Number smaller
    // than n.


  
    for (int i = 0; i < 44; i++)
    {
        if (F[i] <= n && n < F[i + 1]) { return i; }
    }
    

}

// Prints Fibonacci Representation of n using
// greedy algorithm
void printFibRepresntation(int n)
{

    const int N = 44;
    //피보나치 수열 배열 생성
    int F[N];

    for (int i = 0; i < N; i++)
    {
        if (i == 0) F[i] = 0;
        else if (i == 1) F[i] = 1;
        else F[i] = F[i - 1] + F[i - 2];
    }

    int sum = 0;
    while (n > 0) {
        // Find the greates Fibonacci Number smaller
        // than or equal to n
        int k = nearestSmallerEqFib(n);

        // Print the found fibonacci number
        //cout << k << " ";

        if (k == 1) {k++; sum += F[k-1];}
        else
        sum += F[k-1];
        // Reduce n
        n = n - F[k];
    }
    cout << sum << endl; 
}

// Driver method to test
int main()
{
    int n ;
    string input;
    cin >> input;
    n = stoi(input);
    //cout << "Non-neighbouring Fibonacci Representation of " << n << " is \n";
    printFibRepresntation(n);
    
    return 0;
}
