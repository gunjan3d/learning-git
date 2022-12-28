#include<bits/stdc++.h>
using namespace std;
void sort(int* arr, int &size)
{
    int zero=0,one=0,two=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]==1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    for(int i=0;i<size;i++)
    {
        if(zero!=0)
        {
            arr[i]=0;
            zero--;
        }
        else if(one!=0)
        {
            arr[i]=1;
            one--;
        }
        else
        {
            arr[i]=2;
        }
    }
}
int main()
{
    int arr[]={0,2,0,1,2,1,0,2,1,0,2,1,0,2,0};
    int size=sizeof(arr)/sizeof(int);
    sort(arr,size);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}