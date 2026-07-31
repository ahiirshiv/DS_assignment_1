//
//  main.cpp
//  majority num
//
//  Created by apexpredator on 12/07/26.
//

#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout<< "Enter size of array: ";
    cin>> n;
    
    int* arr = new int[n];
    
    cout<< "Enter array elements: \n";
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
        {
            int count = 1;

            for(int j = i + 1; j < n; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }
            }
            if (count > n / 2)
                   {
                       cout << "Majority Element = " << arr[i];
                       cout << "\n";
                       delete[] arr;
                       return 0;
                   }
               }
    cout << "No Majority Element";
    delete[] arr;
    return 0;
}
