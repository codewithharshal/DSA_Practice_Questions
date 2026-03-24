#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int kthSmallest(vector<int>& arr, int low, int high, int k) {
    if (k > 0 && k <= high - low + 1) {
        int pos = partition(arr, low, high);
        
        if (pos - low == k - 1)
            return arr[pos];
        
        if (pos - low > k - 1)
            return kthSmallest(arr, low, pos - 1, k);
        
        return kthSmallest(arr, pos + 1, high, k - (pos - low + 1));
    }
    return -1;
}

int main() {
    vector<int> arr = {10, 7, 8, 3, 5, 2, 1};
    int k = 3;
    
    cout << "Array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";
    
    int result = kthSmallest(arr, 0, arr.size() - 1, k);
    cout << "Kth smallest element (" << k << "): " << result << endl;
    
    return 0;
}