#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int loc;
    int n;
    cout<<" Enter 5 Elements For List ";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"EnterThe element you want to find : ";
    cin>>n;
    for (int i = 0; i < 5; i++)
    {loc=NULL;
        if (n==arr[i]){
            loc=i+1;
            break;
        }
    }
    if (loc==NULL)
    {
        cout<<"OOPS no element fonnd list";
    }
    else{
        cout<<"Element found at position " <<loc<<endl;
    }
    return 0;
}
