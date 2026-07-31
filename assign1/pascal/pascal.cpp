//
//  main.cpp
//  assignments
//
//  Created by apexpredator on 11/07/26.
//

#include <iostream>
using namespace std;

int main()
{
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;
        
    int arr[30][30];
    
        for(int i = 0; i < numRows; i++)
           {
               for(int j = 0; j <= i; j++)
               {
                   if(j == 0 || j == i)
                       arr[i][j] = 1;
                   else
                       arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
               }
           }
    
    cout << "\nPascal's Triangle:\n";

       for(int i = 0; i < numRows; i++)
       {
           for(int j = 0; j <= i; j++)
           {
               cout << arr[i][j] << " ";
           }
           cout << endl;
       }


    return 0;
}
