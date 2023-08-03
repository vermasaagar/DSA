#include<iostream>
using namespace std;
                    
                   
int main(){

    int size;
    cout<<"Enter size of array :"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter array elements in reverse order :"<<endl;
    for(int i=0;i<size;i++){
     cin>>arr[i];
    }

    int evenSum = 0;
    for (int i = 0; i < size;i++){
        if(arr[i]%2==0)
            evenSum = evenSum + arr[i];

    }

    int oddSum = 0;
    for (int i = 0; i < size;i++){
        if(arr[i]%2==1)
            oddSum = oddSum + arr[i];
    }

    cout << "Even sum is : " << evenSum << endl;
    cout << "Odd sum is : " << oddSum << endl;

    return 0;
}