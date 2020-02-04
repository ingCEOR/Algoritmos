int upperSearch(const vector<int> &L , int target){
    int sol = 0;
    int left = 0;
    int right = L.size()-1;
    int mid = (left + right) / 2;
    //lower bound binary search
    while(left <= right){
        mid = (left + right) / 2;
        if(target >= L[mid] ){
            sol = mid;
            left = mid + 1;
        }
          
        else {
            
            right = mid - 1;
        }
    }
      
    if(L[sol] != target){
       return -1; 
    }
    
    else{
        return sol + 1;
    }
} 

int lowerSearch(const vector<int> &U , int target){
    int sol = 0;
    int left = 0;
    int right = U.size() - 1;
    int mid = (left + right) / 2;
    //upper bound binary search
    while(left <= right){
        mid = (left + right) / 2;
        
        if(target <= U[mid] ){
            sol = mid;
            right = mid - 1;
            
        }else {
          left = mid + 1;
      }
    }
    if(U[sol] != target){
       return -1; 
    }
    
    else{
        return sol;
    }
}

int Solution::findCount(const vector<int> &A, int B) {
    int sol1 = 0;
    int sol2 = 0;
    
    //sol1 = lowerSearch(A,B);
    sol2 = upperSearch(A,B);
    sol1 = lowerSearch(A,B);
    
    // cout << sol1 << endl;
    //cout << sol2 << endl;
    
    if(sol1 == -1 || sol2 == -1){
        return 0;
    }
    
    if(sol1 == sol2){
        return 1;
        
    }
    else{
     return sol2 - sol1;   
    }
    

}  