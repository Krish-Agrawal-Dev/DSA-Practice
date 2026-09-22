# Sliding Window

A collection of LeetCode problems solved while learning and practicing the **Sliding Window** pattern in C++.

## What I Learned

* Fixed-size sliding windows
* Variable-size sliding windows
* Maintaining window invariants
* Frequency/count tracking inside a window
* Using two pointers (`left` and `right`)
* Counting valid subarrays using `right - left + 1`
* Converting **Exactly K** problems into:
  `atMost(K) - atMost(K - 1)`
* Optimizing frequency comparisons using a `match` counter
* Finding maximum frequency within a window
* Applying sliding window to problems where the window represents a **potential benefit**, rather than just a raw sum

## Problems Solved

| #    | LeetCode Problem                                                              | Difficulty |
| ---- | ----------------------------------------------------------------------------- | ---------- |
| 643  | Maximum Average Subarray I                                                    | Easy       |
| 209  | Minimum Size Subarray Sum                                                     | Medium     |
| 1456 | Maximum Number of Vowels in a Substring of Given Length                       | Medium     |
| 1343 | Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold | Medium     |
| 1876 | Substrings of Size Three with Distinct Characters                             | Easy       |
| 1423 | Maximum Points You Can Obtain from Cards                                      | Medium     |
| 2461 | Maximum Sum of Distinct Subarrays With Length K                               | Medium     |
| 904  | Fruit Into Baskets                                                            | Medium     |
| 1493 | Longest Subarray of 1's After Deleting One Element                            | Medium     |
| 1208 | Get Equal Substrings Within Budget                                            | Medium     |
| 567  | Permutation in String                                                         | Medium     |
| 438  | Find All Anagrams in a String                                                 | Medium     |
| 1004 | Max Consecutive Ones III                                                      | Medium     |
| 930  | Binary Subarrays With Sum                                                     | Medium     |
| 1052 | Grumpy Bookstore Owner                                                        | Medium     |

**Total: 15 problems**

## Key Techniques

### Fixed-Size Window

Maintain a window of exactly `k` elements.

```text
right - left + 1 == k
```

Instead of recalculating the entire window, remove the element leaving the window and add the new element entering it.

### Variable-Size Window

Expand the window using `right` and shrink it using `left` whenever the window violates the required condition.

General structure:

```cpp
while (right < n) {
    // add nums[right]

    while (window is invalid) {
        // remove nums[left]
        left++;
    }

    // process valid window
    right++;
}
```

### Counting Subarrays

When every subarray ending at `right` and starting between `left` and `right` is valid:

```cpp
count += right - left + 1;
```

### Exactly K → At Most K

For problems asking for exactly `K`:

```text
exactly(K) = atMost(K) - atMost(K - 1)
```

This was applied in **LC930 — Binary Subarrays With Sum**.

### Frequency Tracking

Frequency arrays/maps can maintain character or element counts inside the current window.

This was used in problems such as:

* LC567 — Permutation in String
* LC438 — Find All Anagrams in a String
* LC424 — Longest Repeating Character Replacement

### Benefit-Based Windows

Not every sliding-window problem asks for the largest sum or longest length directly.

In **LC1052 — Grumpy Bookstore Owner**, the window represented the **additional customers that could be satisfied** by using the secret technique.

This reinforced the idea that the value maintained inside a window can be a **derived benefit** rather than simply the original array values.

## Complexity

Most sliding-window solutions operate in:

* **Time:** `O(n)`
* **Space:** `O(1)` or `O(k)` depending on the data structure used

The main reason the approach is efficient is that each element generally enters and leaves the window at most once.

## Status

**Sliding Window — COMPLETE ✅**

This topic is now part of my DSA foundation in C++ and will be revisited through future problems when necessary.
