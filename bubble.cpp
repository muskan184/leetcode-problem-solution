    void bubbleSort(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                   swap(arr[j],arr[j+1]); 
                }
            }
        }
    }