/* 
QUESTION:
Write a program to print the given pattern.

Input Format:
Input consists of a single integer.

Output Format:
Refer sample output.

Sample Input:
5

Sample Output:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 1;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<=i;j++)
	    {
	        if(j==i)
	        {
	            cout << count;
	        }
	        else
	        {
	            cout << count << " ";
	        }
	    }
	    count++;
	    cout << endl;
  	}
}
