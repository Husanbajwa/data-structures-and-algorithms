#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
	for (int i=0;i<n-1;i++)
    {
		int min=i;
    	for (int j=i+1;j<n;j++)
    	{
    		if (arr[j]<arr[min])
    		{
    			min=j;
			}
		}
		if (min!=i)
		{
			int temp;
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<"    ";
		}
		cout<<endl;
	}
}
int main()
{   int n;
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
	selection_sort(arr,n);
		
		
    cout<<" Sorted array"<<endl;
    for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<"    ";
		}
	return 0;
}
    
