

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findFloor(int arr[], int n, int x){
	int s= 0;
	int e = n-1;
	int mid = s + (e-s)/2;
	int floorValue = -1;
	
	while(s <= e){
		
		if(arr[mid] <= x){
			floorValue = arr[mid];
			s = mid + 1;
		}else{
			e = mid - 1;
		}
		  mid = s + (e-s)/2;
		}
		return floorValue;
		
	}

int findCeil(int arr[], int n, int x){
	int s= 0;
	int e = n-1;
	int mid = s + (e-s)/2;
	int ceilValue = -1;
	
	while(s <= e){
	   if(arr[mid] >= x){
		 ceilValue = arr[mid];
			e = mid - 1;
		}else{
			s = mid + 1;
		}
		mid = s + (e-s)/2;
		
		}
		return ceilValue;
		
	}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	
    int f = findFloor(arr, n, x);
	int c = findCeil(arr, n, x);
	return make_pair(f, c);
}
int main() {
    int arr[] = {1, 3, 10, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    pair<int, int> result = getFloorAndCeil(arr, n, x);

    cout << "Floor: " << result.first << endl;
    cout << "Ceil: " << result.second << endl;

    return 0;
}
