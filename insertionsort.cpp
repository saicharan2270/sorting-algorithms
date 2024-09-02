//time complexity - O(n^2)
//space complexity - O(1)

//logic entante first element is always sorted ankovali inka migtha unna elements unsorted so we have to sort it from there//
void insertionsort(vector<int> arr){
  int n=arr.size();
  for(int i=1;i<n-1;i++){
    int j=i-1;
    int curr_ele=arr[i];
    while(j>=0&&arr[j]>curr_ele){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=curr_ele;
  }
  return;
}
