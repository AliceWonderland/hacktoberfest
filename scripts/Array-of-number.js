function findMinMax(arr) {
    if (arr.length === 0) {
      return "The array is empty.";
    }
  
    let smallest = arr[0];
    let largest = arr[0];
  
    for (let i = 1; i < arr.length; i++) {
      if (arr[i] < smallest) {
        smallest = arr[i];
      }
      if (arr[i] > largest) {
        largest = arr[i];
      }
    }
  
    return {
      smallest: smallest,
      largest: largest
    };
  }
  
  // Example usage:
  const numbers = [3, 1, 9, -5, 6, 0, 8];
  const result = findMinMax(numbers);
  console.log("Smallest: " + result.smallest);
  console.log("Largest: " + result.largest);
  