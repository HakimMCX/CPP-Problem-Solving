#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(float arr[], int size) {

    vector<float> buckets[size];

    // Distribute elements into buckets
    for (int i = 0; i < size; i++) {

        int index = size * arr[i];

        buckets[index].push_back(arr[i]);
    }

    // Sort individual buckets
    for (int i = 0; i < size; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // Combine buckets
    int index = 0;

    for (int i = 0; i < size; i++) {

        for (int j = 0; j < buckets[i].size(); j++) {

            arr[index++] = buckets[i][j];

        }
    }
}

int main() {

    float arr[] = {0.42, 0.32, 0.23, 0.52, 0.25, 0.47, 0.51};

    int size = 7;

    bucketSort(arr, size);

    cout << "Sorted array: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}