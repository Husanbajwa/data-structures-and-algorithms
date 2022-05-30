#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
int key,i,j=0;
for (i=1;i<n;i++)
{
	key=arr[i];
	j=i-1;
	
//	cout<<"\n\n";


	while((j>=0)&&(arr[j]>key))
	{
		arr[j+1]=arr[j];
		j-=1;
	}
	arr[j+1]=key;
//	for(int k=0;k<n;k ++)
//		{
//			cout<<arr[k]<<"    ";
//		}
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
	insertion_sort(arr,n);
		
		
    cout<<" Sorted array"<<endl;
    for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<"    ";
			}
			return 0;
}
