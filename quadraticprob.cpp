#include <iostream>
using namespace std;
//quadratic probing
void itrate(int value,int index,int array[])
{
    int counter=0,ind=index;
    for(index;index<10;index++)
    {
       if(array[index]==-1)
       {
        array[index]=value;
        break;
       }
       else
       {
        for(index;array[index]!=-1;index++)
        {
            counter++;
        }
       }
       
    }
    int new_index=index+(counter*counter);
        array[new_index]=value;
        
}
void disp(int array[])
    {
        for(int i=0;i<10;i++)
        {
            cout<<array[i]<<"\n";
        }
    }
int main()
{
    int arry1[5]={10,50,65,75,96};
    int array[1000];
for(int i=0;i<1000;i++)
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
