#include<iostream>
using namespace std;
void boubble_sort(int arr[],int n)
{
int i,j,temp;;
for (i=0;i<n;i++)
{
	for (j=0;j<(n-i-1);j++)
	{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;		
		}
		for(int k=0;k<n;k++)
		{
			cout<<arr[k]<<"    ";
		}
		cout<<"\n\n";
	}
}
}
int main()
{

	int n;
    int arr[n];
    cout<<" Enter length/Size of List "<<endl;
    cin>>n;
    cout<<" Enter "<<n<<" Elements For List "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    
    
    cout<<" Unsorted array"<<endl;
    for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<"    ";
		}
	cout<<"\n\n\n";	
	
	//call the algorithm
	boubble_sort(arr,n);
		
		
    cout<<" Sorted array"<<endl;
    for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<"    ";
			}
			return 0;
}
