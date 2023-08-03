#include<iostream>
using namespace std;

void appendArrays(int firstArray[],int n,int secondArray[],int m){
    for(int i=0;i<n;i++){
        secondArray[m-n+i]=firstArray[i];
    }
}

                    
int main(){

    int n;
    cout<<"Enter size of first array :"<<endl;
    cin>>n;

    int firstArray[n];

    cout<<"Enter "<<n<<" elements in first array :"<<endl;
    for(int i=0;i<n;i++){
       cin>>firstArray[i];
    }
  

    int m;
    cout<<"Enter size of second array :"<<endl;
    cin>>m;

    int secondArray[m+n];

    cout<<"Enter "<<m<<" elements in second array :"<<endl;
    for(int i=0;i<m;i++){
       cin>>secondArray[i];
    }


   cout<<"Before appending second array :"<<endl;
    for(int i=0;i<m;i++){
        cout<<secondArray[i]<<" ";
    }
    
    cout<<endl;

    appendArrays(firstArray,n,secondArray,(m+n));

     cout<<"After appending second array :"<<endl;
    for(int i=0;i<(m+n);i++){
        cout<<secondArray[i]<<" ";
    }
   
  
return 0;
}