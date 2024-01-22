# Trie - dont forget to update name to tries.md.
# Using readme.md because that is only what grip accepts

A trie (also called a prefix tree) is a tree data structure that shows order, linking parents to children. It is an efficient way of storing objects that have commonalities. A good example would be in storing phone numbers, or strings in general

For the strings example, supposing we have a list of strings to store in our data store

1. egg
2. eat
3. ear
4. end

And one of the methods we are to support is a search operation for any of the words, we can approach it the basic way - select each word, and do a string comparison, matching letter to letter. The algorithm would be as follows


```
## searching for ear in data store

data_store = ["egg", "eat", "ear", "end"]
to_find = "ear"

## pick each word
## do a string match letter by letter
## when you find a mismatch, move to the next string
## continue this process
## if at the end of an iteration, index has been increased to
## the length of the word to find, we have found a match

for word in data_store:
    index = 0
    while index < len("egg"):
        if to_find[index] != word[index]:
            break
        index += 1
    if index == len(to_find):
        print(True)

```

Without a doubt, this strategy will work, however, the time complexity of doing this is *O(num of words x len of longest word)*.
However, if we represent the storage of numbers in a tree such that each letter appears only once in a particular level in the tree, we can achieve a much better search time

```
        e
     /  |  \
    a   n   g
   / \  |   |
  r   t d   g

```



# Standard Stack Operations 

1) push(): inserts the element at the top of the stack.
2) pop(): When we delete the element at the top of the stack
3) isEmpty(): It determines whether the stack is empty.
4) isFull(): determines whether the stack is full or not
5) peek(): Gets the value of the top element without removing it

# Working with Stacks

A pointer called TOP is used to keep track of the top element in the stack. When initializing the stack, we set its value to -1 so that we can check if the stack is empty by comparing TOP == -1. On pushing an element, we increase the value of TOP and place the new element in the position pointed to by TOP. On popping an element, we return the element pointed to by TOP and reduce its value. Before pushing, we check if the stack is already full before popping, we check if the stack is already empty.

# Source

1) [Stack Data Structure - GeeksForGeeks](https://www.geeksforgeeks.org/stack-data-structure/) 
2) [DS-Stack JavaPoint](https://www.javatpoint.com/data-structure-stack)
3) [Stack Data Structure](https://www.programiz.com/dsa/stack)

# Video Playlist

- [Stack Data Structure](https://youtu.be/F1F2imiOJfk)
