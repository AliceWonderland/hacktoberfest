
let unsortedIntegers = [5, 1, 4, 2, 8]



// Add your code below:
var totalSwaps = 0
var passes = 0
var currentSwaps = 0
var array = unsortedIntegers

for i in 1..<array.count{
    print("Pass: \(passes), Swaps: \(currentSwaps)/\(totalSwaps), Array: \(array)")
    passes += 1
    var index = i
    var flag = false
    currentSwaps = 0
    while array[index] < array[index-1]{
        let placeHolder = array[index]
        array[index] = array[index-1]
        array[index-1] = placeHolder
        currentSwaps += 1
        totalSwaps += 1
        index -= 1
        if index == 0{
            flag = true
            break
        }
        if flag{
            break
        }
    }
    
}
print("Pass: \(passes), Swaps: \(currentSwaps)/\(totalSwaps), Array: \(array)")
