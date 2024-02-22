#include<iostream>
using namespace std;
int main (){
    int arr[5] = {12 ,13 , 14 ,15, 17};
    int i ;
    int sum1 = 0;
    int sum2 =0;
    int diff;
    
    for (int i = 0; i < 5; i++)
    {
        if (i%2 ==0)
        {
            sum1 +=arr[i];
        }
        if (i%2 !=0)
        {
            sum2 += arr[i];
        }
        
    }
    diff = sum1 -sum2 ;
    cout << sum1<< endl ;
    cout<< sum2 << endl;
    cout << diff << endl;

    
}