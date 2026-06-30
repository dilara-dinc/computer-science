# Hash Table

Hash table implementation using separate chaining.

## Purpose

Understanding key-value storage with fast average-time operations.

## Key Idea

- Keys are mapped to indexes using a hash function
- Collisions are handled using chaining (linked lists)

## Operations

- insert → O(1) average
- search → O(1) average
- delete → O(1) average

## Note

Worst case can degrade to O(n) if collisions increase.
