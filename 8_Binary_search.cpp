#include<iostream>
using namespace std;
int binarysearch(int arr[],int left,int right,int n){
    while (left<=right)
    {
        int mid ;
        mid=left +(right-left)/2;
        if(arr[mid]==n)
        {
            return mid;
        }
        else if (arr[mid]<n)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;
}
int main()
{   int x;
    int arr[x];
    int n;
    int left=0,right;
    int output;
    cout<<" Enter length/Size of List ";
    cin>>x;
    right =x-1;
    cout<<" Enter "<<x<<" Elements For List ";
    for (int i = 0; i < x; i++)
    {
        cin>>arr[i];
    }
    cout<<"EnterThe element you want to find : ";
    cin>>n;
    output=binarysearch(arr,left,right,n);


    if (output==-1)
    {
        cout<<"OOOPS! no element found in list";
    }
    else{
        cout<<"Element found at position " <<output+1<<endl;
    }
    return 0;
}
