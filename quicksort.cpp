//space complexity - O(logn)
//but here time complexity is bit different since here worst and average case are different but for the rest of the algorithms it is same .
//worst case - O(N^2) average case - O(nlogn)

#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int first,int last){
  int pivot=arr[last];
  int j=first-1;
  for(int i=first;i<=last;i++){
    if(arr[i]<pivot){
      j++;
      swap(arr[j],arr[i]);
    }
  }
  swap(arr[j+1],arr[last]);
  return j+1;
}
void quicksort(vector<int> &arr,int first,int last){
  if(first>=last)return;
  int n=arr.size();
  int pi=partition(arr,first,last);
  quicksort(arr,first,pi-1);
  quicksort(arr,pi+1,last);
  return;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
