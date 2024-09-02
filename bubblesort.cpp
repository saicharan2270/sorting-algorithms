// time complexity - O(n^2)
//space complexity - O(1)

void bubblesort(vector<int> arr){
  int n=arr.size();
  for(int i=0;i<n-1;i++){
    bool swapped=false;
    for(int j=i;j<n-1-i;j++){
      if(arr[j+1]<arr[i]){
        swap(arr[j+1],arr[j]);
        swapped=true;
    }
      if(!swapped)break;
  }
}
return;
}
