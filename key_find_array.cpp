//code to find keys in an array
//this code will also represent number of keys found
#include<iostream>
using namespace std;
int main()
{
    int A[7]={1,4,6,3,9,12,6};
    int foundkeys[]={};
    int j=0;
    int key=6;
    int count=0;
    for(int i=0;i<7;i++)
    {
        if(A[i]==key)
        {
            count+=1;
            foundkeys[j]=A[i];
            j++;           
        }           
    }
    cout<<"---------------------------------\n---------------------------------\n";
    cout<<"The search is completed\n";
    cout<<count<<" Match found successfully. Keys are:-"<<endl;
    for(int i=0;i<count;i++)
    {
        cout<<"key"<<i+1<<":"<<foundkeys[i]<<endl;
    }

     cout<<"---------------------------------\n---------------------------------\n";
    
    
}