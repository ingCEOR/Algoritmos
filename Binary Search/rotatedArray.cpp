int searchMin(const vector<int> &arr);
int Solution::findMin(const vector<int> &A) {
    return searchMin(A);;
}

int searchMin(const vector<int> &arr){
    int left = 0;
    int right = arr.size() - 1;
    int mid = 0;
    int sol = 0;
    
    while(left <= right){
    mid=(left + right) / 2;
        if(mid<=0){
            return arr[0];
        }
        if(arr[mid + 1] < arr[mid]){
            return arr[mid + 1];
        }
        
        else if(arr[mid - 1]>arr[mid]){
            return arr[mid];
        }
        
        else if(arr[mid]>arr[right]){
            left = mid + 1;
        }
        
        else {
           right = mid - 1; 
        }
    }

}