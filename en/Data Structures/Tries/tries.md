# Trie

A trie (also called a prefix tree) is a tree data structure that shows order, linking parents to children. It is an efficient way of storing objects that have commonalities. A good example would be in storing phone numbers, or strings in general

For the strings example, supposing we have a list of strings to store in our data store

1. egg
2. eat
3. ear
4. end

And one of the methods we are to support is a search operation for any of the words, we can approach it the basic way - select each word, and do a string comparison, matching letter to letter. The algorithm would be as follows:


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
    while index < len(word):
        if to_find[index] != word[index]:
            break
        index += 1
    if index == len(to_find):
        print("a match has been found")

```

Without a doubt, this strategy will work, but the time complexity of doing this is *O(num of words x len of longest word)* which is quite expensive.
However, if we represent the storage of numbers in a tree such that each letter appears only once in a particular level in the tree, we can achieve a much better search time. Take, for example, the tree below

```
        e
     /  |  \
    a   n   g
   / \  |   |
  r   t d   g

```

You can see from the above representation, that all the words are in the tree, starting from the letter e, which is found at the beginning of all the words, then a, n, and g coming in the next level and so on...
The above representation is called a trie.

# Standard Trie Operations 

1) insert(): inserts the string into the trie.
2) search(): searches for the string within the trie.

# Building a Trie

## Defining a node class for the elements of the trie

To start building a trie, you first need to define a node with the revelant attributes needed for any trie.

```
class Node:
    def __init__(self, is_word: bool=False):
        self.is_word = is_word
        self.children = {}
```

Here, you can see that the class `Node` has three instance attributes:
1. is_word: *bool* = to mark whether that node in the trie marks the completion of a word
2. children: *Dict* = to hold pointers to other children nodes

Then the trie gets built by creating a node for each letter and adding it as a child to the node before it

## Building the trie itself

Start by initializing an empty node

```
class Trie:
    def __init__(self):
        self.node = Node()
```

For the insert operation, fetch the starting node, then for every letter in the word, add it to the children of the letter before it. The final node has its `is_word` attribute marked as **True** because we want to be aware of where the word ends

```   
def insert(self, word: str) -> None:
    node = self.node
    for ltr in word:
        if ltr not in node.children:
            node.children[ltr] = Node()
        node = node.children[ltr]
    node.is_word=True
```

*In the code above, the `node` variable starts by holding a reference to the null node, while the `ltr` iterating variable starts by holding the first letter in `word`. This would ensure that `node` is one level ahead of `ltr`. As they are both moved forward in the iterations, `node` will always remain one level ahead of `ltr`*

For the search operation, fetch the starting node, then for every letter in the word, check if it is present in the `children` attribute of the current node. As long as it is present, repeat for the next letter and next node. If during the search process, we find a letter that is not present, then the word does not exist in the trie. If we successfully get to the end of the iteration, then we have found what we are looking for. It is time to return a value

Take a look at the code

```
def search(self, word: str) -> bool:
    node = self.node
    for ltr in word:
        if ltr not in node.children:
            return False
        node = node.children[ltr]
    return node.is_word
```

For the return value, there are two cases:
1. we are searching for a word -> return `node.is_word` because we want to be sure it is actually a word, and not a prefix
2. we are searching for a prefix -> return **True** because whether it is a word or not, it is prefix that exists in the trie

Now here is the full code

```
class Node:
    def __init__(self, is_word: bool=False):
        self.is_word = is_word
        self.children = {}

class Trie:

    def __init__(self):
        self.node = Node()
        

    def insert(self, word: str) -> None:
        node = self.node
        for ltr in word:
            if ltr not in node.children:
                node.children[ltr] = Node()
            node = node.children[ltr]
        node.is_word=True
        

    def search(self, word: str) -> bool:
        node = self.node
        for ltr in word:
            if ltr not in node.children:
                return False
            node = node.children[ltr]
        return node.is_word
```

# Helpful links

1) [Trie Data Structure - GeeksForGeeks](https://www.geeksforgeeks.org/trie-insert-and-search/)

# Video Playlist

- [Trie Data Structure](https://www.youtube.com/watch?v=zIjfhVPRZCg)