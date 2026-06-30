# Sliding Window Pattern

## Idea
Instead of recalculating results for every subarray, we maintain a "window" that slides through the array efficiently.

---

## When to Use
- Subarray problems
- String problems
- Continuous range problems

---

## Key Insight
We reduce nested loops (O(n²)) → O(n)

---

## Complexity
- Time: O(n)
- Space: O(1) or O(k)
