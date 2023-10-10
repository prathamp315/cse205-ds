class Solution {
public:
void merge(vector<int> &arr, int l, int mid, int r) {
        int n1 = mid - l + 1;
        int n2 = r - mid;

        vector<int> left(n1);
        vector<int> right(n2);

        for (int i = 0; i < n1; i++) {
            left[i] = arr[l + i];
        }
        for (int j = 0; j < n2; j++) {
            right[j] = arr[mid + 1 + j];
        }

        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                arr[k] = left[i];
                i++;
            } else {
                arr[k] = right[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            arr[k] = left[i];
            i++;
            k++;
        }

        while (j < n2) {
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    void mergeSort(vector<int> &arr, int l, int r) {
        if (l < r) {
            int mid = l + (r - l) / 2;

            mergeSort(arr, l, mid);
            mergeSort(arr, mid + 1, r);

            merge(arr, l, mid, r);
        }
    }
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>vec;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr2[i]==arr1[j])vec.push_back(arr1[j]);
                
            }
        }
       vector<int>veccopy=vec;
       vector<int>d;
       mergeSort(veccopy,0,veccopy.size()-1);
       mergeSort(arr1,0,arr1.size()-1);
       set_difference(arr1.begin(), arr1.end(), veccopy.begin(), veccopy.end(), back_inserter(d));
       for(int i=0;i<d.size();i++){
           vec.push_back(d[i]);
       }
       return vec;
    }
};