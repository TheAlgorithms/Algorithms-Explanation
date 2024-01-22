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
        print("a match has been found")

```

Without a doubt, this strategy will work, but the time complexity of doing this is *O(num of words x len of longest word)* which is quite expensive.
However, if we represent the storage of numbers in a tree such that each letter appears only once in a particular level in the tree, we can achieve a much better search time

```
        e
     /  |  \
    a   n   g
   / \  |   |
  r   t d   g

```

You can see from the above tree representation, that all the words are in the tree, starting from the letter e, which starts all the words, then a, n, and g coming next and so on...
The above representation is called a trie.

# Standard Trie Operations 

1) insert(): inserts the string into the trie.
2) search(): searches for the string within the stack.

# Building a Trie

To start building a trie, you first need to define a node with the revelant properties needed for any trie.

```
class Node:
    def __init__(self, val:string=None, isword:bool=False):
        self.val = val
        self.isword = isword
        self.children = {}
```

Here, you can see that the class `Node` has three instance attributes:
1. val:*string* = to hold the value / text of the node
2. isword:*bool* = to mark whether that node in the trie marks the completion of a word
3. children:*Dict* = to hold pointers to other children nodes

Then the trie gets built by creating a node for each letter and adding it as a child to the node before it

Start by initializing an empty node

```
class Trie:
    def __init__(self):
        self.node = Node(None)
```

```   
def insert(self, word: str) -> None:
    node = self.node
    for ltr in word:
        if ltr not in node.children:
            node.children[ltr] = Node(ltr)
        node = node.children[ltr]
    node.isword=True
```




```
def search(self, word: str) -> bool:
    node = self.node
    for ltr in word:
        if ltr not in node.children:
            return False
        node = node.children[ltr]
    return node.isword
```