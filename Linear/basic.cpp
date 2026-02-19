// #include<iostream>
// using namespace std;
// int  main(){  // C++ → int main() compulsory
 //void main() → non-standard / error dega modern compiler me.
 //error: '::main' must return 'int'
 //void main() kyu use nahi kar sakte?
 // C++ standard ke according main ka return type int hi hona chahiye.
 // OS ko program ka exit status chahiye hota hai (0 = success).
 // Isliye void main() invalid hai. 
 // cout<<"hello"<<endl;

// }

 // Binary Basic 
// ## Linear Search (Basic → Complete Understanding)

// ### 1. What is Linear Search?

// Linear Search is the simplest searching technique.
// It checks **each element one by one from start to end** until:

// * The element is found
// * OR the list ends

// No sorting required.

// ---

// ## 2. How It Works (Step-by-Step Example)

// Example array:

// ```
// arr = [10, 25, 33, 47, 59]
// target = 47
// ```

// Steps:

// 1. Compare 10 with 47 → Not equal
// 2. Compare 25 with 47 → Not equal
// 3. Compare 33 with 47 → Not equal
// 4. Compare 47 with 47 → Found

// Return index = 3

// ---

// ## 3. Basic Algorithm (Logic)

// 1. Start from index 0
// 2. Compare element with target
// 3. If equal → return index
// 4. Else → move to next index
// 5. If loop ends → return -1

// ---

// # 4. c++ Code
#include <iostream>      // For input and output
using namespace std;     // To avoid writing std:: again and again

// Function to perform linear search
int linearSearch(int arr[], int size, int target)
{
    // Loop through each element of the array
    for (int i = 0; i < size; i++)
    {
        // Check if current element equals target
        if (arr[i] == target)
        {
            // If found, return index
            return i;
        }
    }

    // If element not found after full loop
    return -1;
}

int main()
{
    int arr[] = {10, 25, 33, 47, 59};  // Array elements
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate number of elements
    int target = 47;   // Element to search

    // Call linear search function
    int result = linearSearch(arr, size, target);

    // Check result
    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;  // End of program
}



// # Linear Search Function



// # Example usage
// arr = [10, 25, 33, 47, 59]   # List of elements
// target = 47                 # Element we want to search

// result = linear_search(arr, target)

// # Check result
// if result != -1:
//     print("Element found at index:", result)
// else:
//     print("Element not found")
// ```



// # 6. Time Complexity

// Worst Case → O(n)
// (Because it checks every element)

// Best Case → O(1)
// (If element is found at first position)

// Average Case → O(n)



// # 7. Space Complexity

// O(1)
// (No extra memory used)

// ---

// # 8. When to Use Linear Search?

// Use when:

// * Data is small
// * Data is unsorted
// * Simplicity is important

// Do NOT use when:

// * Data is large
// * Frequent searching required
// * Data is sorted (Binary Search better)

// ---

// # 9. Dry Run (Manual Execution)

// Array: `[4, 8, 2, 9]`
// Target: `2`

// Iteration 1 → 4 ≠ 2
// Iteration 2 → 8 ≠ 2
// Iteration 3 → 2 = 2 → return index 2

// ---

// # 10. Common Mistakes

// ❌ Forgetting to return -1
// ❌ Using `for element in arr` and not tracking index
// ❌ Stopping loop incorrectly

// ---

// # 11. Variant: Returning Boolean Instead of Index

// ```python
// def linear_search_exists(arr, target):
//     for element in arr:
//         if element == target:
//             return True
//     return False
// ```

// ---

// # 12. Variant: Searching in String

#include <iostream>
using namespace std;

void linearSearchAll(int arr[], int size, int target)
{
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Found at index: " << i << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Element not found";
}

int main()
{
    int arr[] = {5, 2, 7, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    linearSearchAll(arr, size, 2);

    return 0;
}

// Example:
// search_in_string("rahul", "h") → 2




// # 13. Edge Cases You Must Understand

// 1. Empty array → returns -1
// 2. Single element
// 3. Duplicate elements → returns first occurrence
// 4. Negative numbers
// 5. Searching for None

// ---

// # 14. Real Life Analogy

// Searching for a name in an unsorted attendance register —
// You check one by one until you find it.




