int firstOccurence(vector<int> arr, int n, int x){
        int s = 0;
		int e = n-1;
        int mid = s + (e-s)/2;
        int first = -1;
        while(s <= e){
            if(arr[mid] == x){
                first = mid;
               e = mid - 1;
            }else if(x > arr[mid]){
                s = mid + 1;
            }else if(x < arr[mid]){
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return first;
    }
int lastOccurence(vector<int> arr, int n, int x){
        int s = 0;
		int e = n-1;
        int mid = s + (e-s)/2;
        int last = -1;
        while(s <= e){
            if(arr[mid] == x){
               last = mid;
               s = mid + 1;
            }else if(x > arr[mid]){
                s = mid + 1;
            }else if(x < arr[mid]){
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return last;
    }
pair<int, int> countOccurence(vector<int>& arr, int n, int x){
	int first = firstOccurence(arr, n, x);
	if(first == -1) return {-1, -1};
	int last = lastOccurence(arr, n, x);
	return {first, last};
}

int count(vector<int>& arr, int n, int x) {
	pair<int,int> ans =  countOccurence(arr, n, x);
	if(ans.first == -1) return 0;
	return {ans.second - ans.first + 1};  //first ans last are the method of pair 
}
