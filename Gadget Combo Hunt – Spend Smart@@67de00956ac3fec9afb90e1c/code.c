
void sort(int arr[], int n);

int maxGadgetSpend(int keyboards[], int n, int headsets[], int m, int budget) {
    sort(keyboards, n); // Sort keyboards in descending order
    sort(headsets, m);  // Sort headsets in descending order

    int maxSpend = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int sum = keyboards[i] + headsets[j];
            if (sum <= budget && sum > maxSpend) {
                maxSpend = sum; // Update maxSpend if valid
            }
        }
    }

    return maxSpend; // Return the maximum valid spend, or -1 if none found
}

void sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) { // Descending order
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
