// Optimized Bubble sort in C++
// perform the bubble sort
void bubbleSort(int arr[], int size) {
 
  // // loop over array elements
  for (int i = 0; i < size - 1; ++i) {
    
    // loop to compare array elements
    for (int j = 0; j < size - i - 1; ++j) {
      
      // compare adjacent elements
      if (arr[j] > arr[j + 1]) {
        
        // swap if out-of-order
     // using std::swap() method for swapping
        swap(arr[j], arr[j+1]);
      }
    }
  }
}
