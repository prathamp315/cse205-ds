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
   
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        mergeSort(arr,0,arr.size()-1);
        vector<vector<int>>p;
        int m=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            int x=arr[i+1]-arr[i];
            m=min(x,m);

        }
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]==m){
                p.push_back({arr[i],arr[i+1]});
            }

        }
        return p;
    }
};