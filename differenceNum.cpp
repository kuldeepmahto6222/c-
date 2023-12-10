#include <iostream>
#include <climits>
using namespace std;

int findSmallestDifference(int arr[], int n) {
   int mindiff = 101;
   for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
         if (abs(arr[i] - arr[j]) < mindiff) {
            mindiff = abs(arr[i] - arr[j]);
         }
      }
   }
   return mindiff;
}

int main() {
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   cout << findSmallestDifference(arr, n);
   return 0;
}
