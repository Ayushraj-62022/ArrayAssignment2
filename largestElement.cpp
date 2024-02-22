#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the size of array :";
    cin>> n;
    int arr[n];
    cout << "enter the elements of array ;";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max1, max2 ,max3 ;
    max1 = max2 = max3 = arr[0];
    for (int i = 0; i <n; i++)
    {
        if (max1<arr[i])
        {   max3 = max2;
            max2 = max1;
           max1 =arr[i];
           
        }
        else if ( max2 < arr[i]){
            max3= max2;
            max2 = arr[i];
            
        }
        else if ( max3 < arr[i]){
            max3 = arr[i];

        }
        
    }
    cout << max1 << endl;
    cout << max2 << endl;
    cout << max3 << endl;
    
    

    

}