
void sort(int arr[], int n);

int maxGadgetSpend(int keyboards[], int n, int headsets[], int m, int budget) {
    sort(keyboards, n); 
    sort(headsets, m);  

    int maxSpend = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int sum = keyboards[i] + headsets[j];
            if (sum <= budget && sum > maxSpend) {
                maxSpend = sum; 
            }
        }
    }

    return maxSpend; 
}

void sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) { r
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
