//5. Write a C++ program to find the second smallest elements in a given array of integers(all elements of array are distinct)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0;i<n;i++) 
	cin>>a[i];
    int fst=a[0],snd=a[1];
    if(snd<fst) 
	swap(fst,snd);
    for(int i=2;i<n;i++)
	{
        if(a[i]<fst)
		{
            snd=fst;
            fst=a[i];
        }
		 else if(a[i]<snd)
		{
            snd=a[i];
        }
    }
    cout<<"Second smallest element: "<<snd;
    return 0;
}

