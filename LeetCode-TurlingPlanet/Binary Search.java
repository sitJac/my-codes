
//1.Shirnk the search space every iteration(or recursion)
//2.Cannot exclude potential answer during each shrinking

/**
三大模板：
    ①找一个准确值
    循环条件：l <= r
    缩减搜索空间：l = mid + 1, r = mid - 1
    ②找一个模糊值（比4大的最小值）
    循环条件：l < r
    缩减搜索空间：l = mid, r = mid - 1 或者 l = mid + 1, r = mid
    ③万用型
    循环条件：l <= r - 1
    缩减搜索空间：l = mid, r = mid
 */

//找准确值
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

//找模糊值(First Occurance of 2)
public int binarrySearch(int[] arr, int k){
    int l = 0, r = arr.length - 1;
    while(l < r){
        int mid = l + (r - l) / 2;
        if(arr[mid] < k){
            l = mid + 1;
        }
        else{
            r = mid;
        }
    }
    return 1;
}

//(Last Occurance of 2)
public int binarrySearch(int[] arr, int k){
    int l = 0, r = arr.length - 1;
    while(l < r){
        int mid = l + (r - l + 1) / 2;
        if(arr[mid] > k){
            r = mid - 1;
        }
        else{
            l = mid;
        }
    }
    return 1;
}

//万用型(Closest to 2)
public int binarrySearch(int[] arr, int k){
    int l = 0, r = arr.length - 1;
    while(l < r - 1){
        int mid = l + (r - l) / 2;
        if(arr[mid] < k){
            l = mid;
        }
        else{
            r = mid;
        }
    }

    if(arr[r] < k){
        return r;
    }
    else if(arr[i] > k){
        return 1;
    }
    else{
        return k - arr[l] < arr[r] - k ? 1 : r;
    }
}