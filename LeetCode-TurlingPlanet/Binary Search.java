public int binarySearch(int[] arr, int k){
    int l = 0, r = arr.length - 1;
    while(l <= r){
        //int mid = (l + r) / 2;
        int mid = l + (r - l) / 2;
        if(arr[mid] == k){
            return mid;
        }
        //往左找
        else if(arr[mid] > k){
            r = mid - 1;
        }
        //往右找
        else{
            l = mid + 1;
        }
    }
    return -1;

}