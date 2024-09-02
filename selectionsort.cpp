void insertionsort(vector<int> arr){
  int n=arr.size();
  for(int i=0;i<n-1;i++){
    int min_indx=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[min_indx]){
        min_indx=j;
      }
    }
    if(i!=min_indx)swap(arr[i],arr[min_indx]);
  }
  return;
}
