#include<iostream>
using namespace std;
int main(){
    int x ;
    cout << "enter the value:";
    cin>> x;
    int arr[6] = {23 , 42, 12 , 22, 25, 33};
    int count = 0 ;
    for (int i = 0; i < 6; i++)
    {
        if (x < arr[i])
        {
            count++;
        }
        
    }
    cout << count ;
    
}