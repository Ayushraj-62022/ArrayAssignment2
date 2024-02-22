#include<iostream>
using namespace std;
int main(){
    int arr[5] = {12 ,13 ,19 ,8 , 21};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i-1] > arr[i])
        {
            cout << "NO"<<endl;
            return 0;
        }
        // No unsorted pair found
        cout << "YES "<< endl;
        return 0;
    }
    


}
