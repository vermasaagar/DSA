#include <iostream>
using namespace std;
//linear probing
void itrate(int value,int index,int array[])
{
    for(index;index<10;index++)
    {
        if(array[index]==-1)
        {
            array[index]=value;
            break;
        }
    }
}
void disp(int array[])
    {
        for(int i=0;i<10;i++)
        {
            cout<<"arr["<<i<<"]=";
            cout<<array[i]<<"\n";
        }
    }
int main()
{
    int arry1[5]={10,50,65,75,96};
    int array[10];

    for(int i=0;i<10;i++)
    {
        array[i]=-1;
    }
        
    for(int i=0;i<5;i++)
{
        int index=arry1[i]%10;
        itrate(arry1[i],index,array);      
    }
   disp(array);
          
   
    
   return 0;
}




