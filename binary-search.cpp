//Take input array, left, right & x
//START LOOP – while(left greater than or equal to right)
//mid = left + (right-left)/2
//if(arr[mid]==x) then
//return m
//else if(arr[mid] less than x) then
//left = m + 1
//else
//right= mid – 1
//END LOOP
//return -1

#include <iostream>
  using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int main() {
  int myarr[10];
  int num;
  int output;

  cout << "Please enter 5 elements ASCENDING order" << endl;
  for (int i = 0; i < 5; i++) {
    cin >> myarr[i];
  }
  cout << "Please enter an element to search" << endl;
  cin >> num;

  output = binarySearch(myarr, 0, 9, num);

  if (output == -1) {
    cout << "No Match Found" << endl;
  } else {
    cout << "Match found at position: " << output << endl;
  }

  return 0;
}
