int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int result = INT_MAX;
  
    for(int i = 1; i < arr.size(); i++){
        int d = arr[i] - arr[i-1]; //minimum absolute difference will always lie between two values in a sorted array
        result = min(d, result);
    }
    return result;
}

//O(n) time complexity
