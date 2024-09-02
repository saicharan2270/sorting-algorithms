//time complexity - O(nlogn)
//space complexity - since dependent hence O(n)

void merge(int arr[],int s,int mid,int e){
  int leftlen=mid-s+1;
  int rightlen=e-mid;
  int leftarr[leftlen];
  int rightarr[rightlen];
  for(int i=0;i<leftlen;i++){
    leftarr[i]=arr[s+i];
  }
  for(int i=0;i<rightlen;i++){
    rightarr[i]=arr[mid+i+1];
  }
  int leftindex=0,rightindex=0,mainindex=s;
  while(leftindex<leftlen&&rightindex<rightlen){
    if(leftarr[leftindex]<=rightarr[rightindex]){
      arr[mainindex]=leftarr[leftindex];
      leftindex++:
    }
    else{
      arr[mainindex]=rightarr[rightindex];
      rightindex++:
    }
    mainindex++;
  }
  while(leftindex<leftlen){
    arr[mainindex++]=leftarr[leftindex++];
  }
  while(rightindex<rightlen){
    arr[mainindex++]=rightarr[rightindex++];
  }
}
void mergesort(int arr[],int s,int e){
  if(s>=e)return;
  int mid=s+(e-s)/2;
  mergesort(arr,s,mid);
  mergesort(arr,mid+1,e);
  merge(arr,s,mid,e);
}
