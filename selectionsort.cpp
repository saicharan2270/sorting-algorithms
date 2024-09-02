//selection  sort logic entante manam first i ni minimum element ankuntam tharuvatha j ni i+1 nunchi n dhaka traverse chstham andhulo okavela min element dhorikithe swap chstham
void selectionsort(vector<int> arr){
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
