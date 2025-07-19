# Complete LeetCode Study Guide

## 📌 Fundamental Concepts

### Algorithmic Complexity
- **Time Complexity**: Measure of algorithm execution time relative to input size
- **Space Complexity**: Amount of memory space an algorithm uses
- **Best, Average, Worst Case**: Different scenarios for algorithm performance

### Big-O Cheat Sheet
| Operation | Array | Linked List | Hash Table | Binary Tree | Heap |
|-----------|-------|-------------|------------|-------------|------|
| Access | O(1) | O(n) | O(1) | O(log n) | O(1) |
| Search | O(n) | O(n) | O(1) | O(log n) | O(n) |
| Insertion | O(n) | O(1) | O(1) | O(log n) | O(log n) |
| Deletion | O(n) | O(1) | O(1) | O(log n) | O(log n) |

### Bit Manipulation Techniques
- **Basic Operations**: AND (&), OR (|), XOR (^), NOT (~), Left Shift (<<), Right Shift (>>)
- **Common Tricks**:
  - Check if number is power of 2: `n & (n-1) == 0`
  - Toggle i-th bit: `n ^ (1 << i)`
  - Set i-th bit: `n | (1 << i)`
  - Clear i-th bit: `n & ~(1 << i)`

### Sorting Algorithms
- **Bubble Sort**: O(n²) - Simple but inefficient
- **Selection Sort**: O(n²) - Find minimum and swap
- **Insertion Sort**: O(n²) - Build sorted array one element at a time
- **Merge Sort**: O(n log n) - Divide and conquer approach
- **Quick Sort**: O(n log n) average, O(n²) worst - Partition-based sorting
- **Heap Sort**: O(n log n) - Uses heap data structure

### Linked List
- **Dummy Node Technique**: Create a dummy node to simplify edge cases
- **Common Operations**: Insertion, deletion, reversal, cycle detection
- **Key Patterns**: Fast/slow pointers, reversal in groups

### Queues
- **FIFO (First In, First Out)** data structure
- **Applications**: BFS, level-order traversal, scheduling
- **Implementation**: Array-based or linked list-based

### Stacks
- **LIFO (Last In, First Out)** data structure
- **Applications**: DFS, expression evaluation, parentheses matching
- **Monotonic Stack**: Maintains elements in sorted order

### Hash Tables
- **Key-Value pairs** with O(1) average access time
- **Collision Handling**: Chaining, open addressing
- **Applications**: Frequency counting, memoization, caching

### Heaps
- **Complete Binary Tree** with heap property
- **Min Heap**: Parent ≤ children
- **Max Heap**: Parent ≥ children
- **Applications**: Priority queues, finding kth largest/smallest

### Recursion
- **Base Case**: Condition to stop recursion
- **Recursive Case**: Function calls itself with modified parameters
- **Applications**: Tree traversal, factorial, Fibonacci

### Backtracking
- **Trial and Error** approach with systematic exploration
- **Template**: Choose → Explore → Unchoose
- **Applications**: N-Queens, Sudoku solver, permutations

### Trees
- **Binary Tree**: Each node has at most 2 children
- **Binary Search Tree**: Left < Root < Right
- **Balanced Trees**: AVL, Red-Black trees
- **Traversals**: Inorder, Preorder, Postorder, Level-order

### Tries
- **Prefix Tree** for string operations
- **Applications**: Autocomplete, spell checker, IP routing
- **Operations**: Insert, search, startsWith

### Binary Search
- **Divide and Conquer** on sorted data
- **Template**: 
  ```
  while left <= right:
      mid = (left + right) // 2
      if target == arr[mid]: return mid
      elif target < arr[mid]: right = mid - 1
      else: left = mid + 1
  ```

### Greedy Algorithm
- **Local Optimal Choice** leads to global optimal solution
- **Applications**: Activity selection, Huffman coding, coin change
- **Key**: Prove greedy choice property

### Dynamic Programming
- **Optimal Substructure** + **Overlapping Subproblems**
- **Approaches**: Top-down (memoization), Bottom-up (tabulation)
- **Steps**: Define state, recurrence relation, base cases

### Graph Theory
- **Vertices and Edges** representing relationships
- **Types**: Directed/Undirected, Weighted/Unweighted, Cyclic/Acyclic
- **Representations**: Adjacency matrix, adjacency list, edge list

### Important Graph Algorithms
- **Shortest Path**: Dijkstra, Bellman-Ford, Floyd-Warshall
- **Minimum Spanning Tree**: Kruskal, Prim
- **Topological Sort**: DFS-based, Kahn's algorithm
- **Strongly Connected Components**: Kosaraju, Tarjan

### DFS Traversal
- **Depth-First Search** using stack (recursive or iterative)
- **Applications**: Path finding, cycle detection, topological sort
- **Time Complexity**: O(V + E)

### BFS Traversal
- **Breadth-First Search** using queue
- **Applications**: Shortest path in unweighted graph, level-order traversal
- **Time Complexity**: O(V + E)

### Union-Find
- **Disjoint Set** data structure
- **Operations**: Union, Find with path compression and union by rank
- **Applications**: Detecting cycles, Kruskal's algorithm

### Dijkstra Algorithm
- **Single-source shortest path** in weighted graphs
- **Requirements**: Non-negative edge weights
- **Time Complexity**: O((V + E) log V) with priority queue

### Minimum Spanning Tree
- **Subgraph** connecting all vertices with minimum total edge weight
- **Algorithms**: Kruskal (union-find), Prim (greedy)
- **Applications**: Network design, clustering

## 🚀 Patterns

### 15 Leetcode Patterns
1. **Two Pointers**: Two Sum, 3Sum, Container With Most Water
2. **Sliding Window**: Longest Substring, Maximum Sum Subarray
3. **Fast & Slow Pointers**: Cycle Detection, Middle of Linked List
4. **Merge Intervals**: Overlapping Intervals, Insert Interval
5. **Cyclic Sort**: Missing Number, Find Duplicate
6. **In-place Reversal**: Reverse Linked List, Reverse Sublist
7. **Tree BFS**: Level Order Traversal, Zigzag Traversal
8. **Tree DFS**: Path Sum, Diameter of Tree
9. **Two Heaps**: Find Median, Sliding Window Median
10. **Subsets**: Generate Subsets, Permutations
11. **Modified Binary Search**: Search in Rotated Array
12. **Top K Elements**: Kth Largest, Top K Frequent
13. **K-way Merge**: Merge K Sorted Lists
14. **Dynamic Programming**: Knapsack, Longest Common Subsequence
15. **Topological Sort**: Course Schedule, Alien Dictionary

### 20 DP Patterns
1. **0/1 Knapsack**: Classic knapsack problem
2. **Unbounded Knapsack**: Coin change variations
3. **Fibonacci Numbers**: Climbing stairs, house robber
4. **Palindromic Subsequence**: Longest palindromic subsequence
5. **Longest Common Substring**: Edit distance variations
6. **Longest Increasing Subsequence**: Stock prices, patience sorting
7. **Longest Common Subsequence**: Text comparison problems
8. **Matrix Chain Multiplication**: Optimal parenthesization
9. **Kadane's Algorithm**: Maximum subarray problems
10. **Coin Change**: Minimum coins, number of ways
11. **Rod Cutting**: Maximize profit from cutting rod
12. **Egg Dropping**: Minimum trials with eggs
13. **Palindrome Partitioning**: Minimum cuts for palindromes
14. **Catalan Numbers**: Binary trees, valid parentheses
15. **Digit DP**: Numbers with constraints
16. **Bitmask DP**: Traveling Salesman, Hamiltonian Path
17. **Tree DP**: Diameter, path sums in trees
18. **String DP**: Word break, interleaving
19. **Game Theory DP**: Minimax problems
20. **Probability DP**: Expected value problems

### Two Pointers Pattern
- **Use Case**: Sorted arrays, palindromes, pairs with target sum
- **Template**:
  ```python
  left, right = 0, len(arr) - 1
  while left < right:
      if condition: return result
      elif arr[left] + arr[right] < target: left += 1
      else: right -= 1
  ```

### Sliding Window Pattern
- **Use Case**: Contiguous subarrays/substrings with conditions
- **Template**:
  ```python
  left = 0
  for right in range(len(arr)):
      # Expand window
      while window_condition_broken:
          # Contract window
          left += 1
      # Update result
  ```

### Prefix Sum Pattern
- **Use Case**: Range sum queries, subarray sum problems
- **Template**:
  ```python
  prefix_sum = [0]
  for num in arr:
      prefix_sum.append(prefix_sum[-1] + num)
  # Range sum [i,j] = prefix_sum[j+1] - prefix_sum[i]
  ```

### Fast and Slow Pointers Pattern
- **Use Case**: Cycle detection, finding middle element
- **Template**:
  ```python
  slow = fast = head
  while fast and fast.next:
      slow = slow.next
      fast = fast.next.next
      if slow == fast: return True  # Cycle detected
  ```

### Top 'K' Elements Pattern
- **Use Case**: Kth largest/smallest, top K frequent elements
- **Techniques**: Heap, Quickselect, Sorting
- **Template**: Use min/max heap of size K

### Kadane's Algorithm
- **Use Case**: Maximum sum subarray and variations
- **Template**:
  ```python
  max_sum = current_sum = arr[0]
  for i in range(1, len(arr)):
      current_sum = max(arr[i], current_sum + arr[i])
      max_sum = max(max_sum, current_sum)
  ```

### Linked List In-place Reversal Pattern
- **Use Case**: Reverse linked list, reverse in groups
- **Template**:
  ```python
  prev, curr = None, head
  while curr:
      next_temp = curr.next
      curr.next = prev
      prev = curr
      curr = next_temp
  ```

### Monotonic Stack Pattern
- **Use Case**: Next greater/smaller element, largest rectangle
- **Template**:
  ```python
  stack = []
  for i, num in enumerate(arr):
      while stack and arr[stack[-1]] > num:
          # Process popped element
          stack.pop()
      stack.append(i)
  ```

### Overlapping Intervals Pattern
- **Use Case**: Merge intervals, insert interval, meeting rooms
- **Template**:
  ```python
  intervals.sort(key=lambda x: x[0])
  merged = [intervals[0]]
  for current in intervals[1:]:
      if current[0] <= merged[-1][1]:
          merged[-1][1] = max(merged[-1][1], current[1])
      else:
          merged.append(current)
  ```

### Backtracking Pattern
- **Use Case**: Generate combinations, permutations, N-Queens
- **Template**:
  ```python
  def backtrack(path, choices):
      if is_valid_solution(path):
          result.append(path[:])
          return
      for choice in choices:
          path.append(choice)
          backtrack(path, new_choices)
          path.pop()  # Backtrack
  ```

### Modified Binary Search Pattern
- **Use Case**: Search in rotated array, find peak element
- **Key**: Identify which half to search based on conditions

### Tree Patterns

#### Tree Iterative Traversal
- **Inorder**: Left → Root → Right
- **Preorder**: Root → Left → Right  
- **Postorder**: Left → Right → Root
- **Level-order**: BFS using queue

#### Tree Question Pattern
- **Recursive**: Define base case and recursive relation
- **Common**: Path sums, diameter, depth, validation

### Graph Patterns
- **Representation**: Adjacency list vs matrix
- **Traversal**: DFS for paths, BFS for shortest distance
- **Cycle Detection**: DFS with colors, Union-Find

### DFS + BFS Patterns (1)
- **DFS Applications**: Topological sort, strongly connected components
- **BFS Applications**: Shortest path, level-by-level processing

### DFS + BFS Patterns (2)
- **Bidirectional Search**: Meet in the middle
- **Multi-source BFS**: Multiple starting points
- **Graph Coloring**: Bipartite graph detection

## 📝 Must-Read Leetcode Articles

### Sliding Window Template
- Framework for solving substring/subarray problems
- Fixed size vs variable size windows
- Optimization techniques and edge cases

### Two Pointers Patterns
- Opposite directional vs same directional
- Fast/slow pointer technique
- Multiple pointers for complex problems

### Collections of Important String Questions
- Pattern matching algorithms
- String manipulation techniques
- Palindrome and anagram problems

### Substring Problem Template
- General approach to substring problems
- Hash map usage for character frequency
- Sliding window optimization

### Binary Search Template
- Three different templates for various scenarios
- Handling edge cases and infinite loops
- Search space reduction techniques

### A General Approach to Backtracking Questions
- Problem identification and solution structure
- Pruning techniques for optimization
- Common backtracking patterns

### Monotonic Stack Template
- When and how to use monotonic stacks
- Increasing vs decreasing monotonic stacks
- Applications in various problem types

### Heap Patterns
- Min heap vs max heap usage
- Two heap technique for median problems
- K-way merge using heaps

### Bit Manipulation Patterns
- Common bit tricks and techniques
- Bitwise operations for optimization
- Bit manipulation in DP problems

### Dynamic Programming Patterns
- Pattern recognition in DP problems
- State definition and transition
- Space optimization techniques

### Stock Series Patterns
- Buy/sell stock problem variations
- State machine approach
- Transaction limit handling

## ✅ Curated Problems

### AlgoMaster 300
- Comprehensive collection of 300 essential problems
- Organized by patterns and difficulty
- Progressive learning approach

### Blind 75
- 75 most important LeetCode problems
- Essential for technical interviews
- Covers all major patterns and data structures

### Leetcode Top 100 Liked
- Community's most liked problems
- High-quality problem set
- Balanced difficulty distribution

### Leetcode Top Interview 150
- Most frequently asked interview questions
- Company-specific problem collections
- Real interview experience based

## 📺 YouTube Playlist

### AlgoMaster LeetCode Pattern Playlist
- Pattern-based problem solving approach
- Clear explanations with examples
- Code walkthroughs and optimizations

### Abdul Bari's Algorithms Playlist
- Comprehensive algorithms course
- Mathematical foundations
- Visual explanations and proofs

### William Fiset's Data Structure Playlist
- In-depth data structure implementations
- Performance analysis and comparisons
- Practical applications and use cases

### William Fiset's Graphs Playlist
- Complete graph algorithms coverage
- Implementation details and optimizations
- Real-world graph problem solving

### Tushar Roy's Dynamic Programming Playlist
- DP pattern recognition and solution
- Step-by-step problem breakdown
- Advanced DP techniques and optimizations

## 📇 Courses

### Coursera - Algorithms, Part I
- Princeton University course by Robert Sedgewick
- Fundamental algorithms and data structures
- Programming assignments in Java

### Coursera - Algorithms, Part 2
- Advanced algorithms and data structures
- Graph algorithms and string processing
- Network flow and linear programming

## 📚 Books

### Data Structures And Algorithms Made Easy
- Comprehensive coverage of DSA concepts
- Problem-solving techniques and patterns
- Interview preparation focused content

### Cracking the Coding Interview
- 189 programming questions and solutions
- Interview strategies and tips
- Big-O analysis and optimization techniques

## 📩 Newsletter

### AlgoMaster Newsletter
- Weekly algorithm and data structure insights
- New problem patterns and techniques
- Interview tips and career guidance

## 🔎 Visualization

### VisuAlgo
- Interactive visualization of algorithms
- Step-by-step algorithm execution
- Multiple programming languages supported

### Algo-lens: Visualize leetcode problems
- Visual representation of LeetCode problems
- Better understanding through graphics
- Interactive problem exploration

## 📎 LeetCode Extensions

### LeetCode Timer
- Time tracking for practice sessions
- Automatic difficulty-based time setting
- Performance analytics and insights

### LeetCode Video Solutions
- Free video solutions on problem pages
- Multiple solution approaches
- Expert explanations and tips

### LeetCode Format
- Code formatting using Prettier
- Consistent code style across problems
- Improved code readability

### LeetHub v2
- Automatic GitHub integration
- Submission tracking and organization
- Progress monitoring across platforms

### LeetCode VS Code Extension
- Solve problems directly in VS Code
- Local development environment
- Enhanced debugging and testing capabilities

---

*Your contributions are most welcome! This guide is a living document that evolves with the community's needs and feedback.*

<!---LeetCode Topics Start-->
# LeetCode Topics
## Database
|  |
| ------- |
| [0584-find-customer-referee](https://github.com/Shxam/DSA/tree/master/0584-find-customer-referee) |
<!---LeetCode Topics End-->