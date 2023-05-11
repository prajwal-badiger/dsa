## Big O
1. growth is w.r.t. the input
2. constants are dropped
3. worst case is usually the way we measure


## Data Stuctures

### Arrays

- contiguous memory space
- fixed size
- all operations in array take O(1), time taken for each cannot grow when input grows
- a[n]  = address of a + offset(n) * width of type

## Algorithms

### Search

1. Linear Search
- go through each value in the array and check if its the required value
- O(N), grows linearly with input

2. Binary Search
- array should be ordered
- divide the array and check which half the key is present.
- O(logN)

### Two crystall ball problem
given two crystall balls that will break if droped from high enough distance,
determine the exact spot in which it will break in the most optimized way.


### Sorting
- array is sorted if any x[i] <= x[i + 1]

1. Bubble Sort
- iterate over the array and check if x[i] > x[i + 1] then swap each other
- for each iteration the largest item is sorted
- N(N+1)/2 = N^2 + N => O(N^2) // here N is insignificant

