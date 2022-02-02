#include<iostream>
using namespace std;
void merge(int arr[],int s,int mid, int e)
{

    int leftArraySize=mid-s+1;

    int rightArraySize=e-mid;

    int firstArray[leftArraySize];

    int secondArray[rightArraySize];



    for(int i=0;i<leftArraySize;i++)
    {
        firstArray[i]=arr[s+i];
    }
    for(int j=0;j<rightArraySize;j++)
    {
        secondArray[j]=arr[mid+1+j];
    }
    int Index1=0;
    int Index2=0;
    int indexOfMerge=s;
    while (Index1<leftArraySize  && Index2<rightArraySize)
    {
        if(firstArray[Index1]<=secondArray[Index2])
        {
            arr[indexOfMerge]=firstArray[Index1];
            Index1++;

        }
        else{
            arr[indexOfMerge]=secondArray[Index2];
            Index2++;
        }
        indexOfMerge++;
    }
    while(Index1<leftArraySize)
    {
        arr[indexOfMerge]=firstArray[Index1];
        indexOfMerge++;
        Index1++;
    }
    while (Index2<rightArraySize)
    {
        arr[indexOfMerge]=secondArray[Index2];
        indexOfMerge++;
        Index2++;
    }
}
void mergeSort(int arr[],int s,int e)
{
    if(s<e)
    {
    int mid=s+(e-s)/2;

    mergeSort(arr,s,mid);

    mergeSort(arr,mid+1,e);

    merge(arr,s,mid,e);
    }
}
int main()
{
    int arr[]={3,7,84,2,4,52,5,3,62,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorted"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,n-1);
     cout<<"After sorted"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}