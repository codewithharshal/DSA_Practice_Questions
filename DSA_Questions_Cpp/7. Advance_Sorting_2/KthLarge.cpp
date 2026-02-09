#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j < high; j++) {
        if (arr[j] > pivot) {  // For largest elements
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int findKthLargest(vector<int>& arr, int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high);
        
        if (pi == k - 1) {
            return arr[pi];
        } else if (pi < k - 1) {
            return findKthLargest(arr, pi + 1, high, k);
        } else {
            return findKthLargest(arr, low, pi - 1, k);
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {10, 5, 8, 12, 2, 20, 1};
    int k = 3;
    
    cout << "Kth (" << k << ") largest element: " 
         << findKthLargest(arr, 0, arr.size() - 1, k) << endl;
    
    return 0;
}