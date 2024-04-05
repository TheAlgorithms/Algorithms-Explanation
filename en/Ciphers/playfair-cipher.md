# Playfair Cipher

The Playfair cipher was invented in 1854 by [Charles Wheatstone](https://en.wikipedia.org/wiki/Charles_Wheatstone) but was named after Lord Playfair who promoted the use of the cipher.

The Playfair cipher was the first practical digraph substitution cipher. In Playfair cipher unlike traditional cipher, we encrypt a pair of alphabets(digraphs) instead of a single alphabet. A `5 × 5` grid of alphabets was used as the key-square. Each of the 25 alphabets is unique and one letter of the alphabet (usually J) is omitted from the table. If the plaintext contains J, then it is replaced by I or vice-versa. The initial alphabets in the key square are the unique alphabets of the key in the order in which they appear followed by the remaining letters of the alphabet in order.

## Example

Suppose we take an example as:

Plain Text (PT): instruments, key: `monarchy`

## Rules

1. If both the letters are in the same column, take the letter below each one (going back to the top if at the bottom).

```
    Diagraph: "me"
    Encrypted Text: cl
    Encryption: 
      m -> c
      e -> l
```

2. If both the letters are in the same row, take the letter to the right of each one (going back to the leftmost only if it's at the rightmost position).

```
    Diagraph: "st"
    Encrypted Text: tl
    Encryption: 
      s -> t
      t -> l
```

3. If neither of the above rules is true, form a rectangle with the two letters, and take the letters on the horizontal opposite corner of the rectangle.

```
    Diagraph: "nt"
    Encrypted Text: rq
    Encryption: 
      n -> r
      t -> q
```

The rules above are used for Encryption. Can be applied vice-versa for Decryption.

## Steps

### Encryption

1. We have to generate a `5 × 5` matrix from the key as

 ```
    [m o n a r]
    [c h y b d]
    [e f g i k]
    [l p q s t]
    [u v w x z]
```

2. Split the plaintext in digraphs(pair of two). If there is an odd number of letters, an X is added to the last letter. Pairs cannot be made with same letter. If this occurs, split the pair by adding an X between the duplicate letters.

``` 
   'in' 'st' 'ru' 'me' 'nt' 'sx'
```

3. Now, we need to follow the rules for encrypting and do as follows:

```
    Plain Text: instrumentsx
    key: monarchy
    Encryption: 
      i -> g
      n -> a
      s -> t
      t -> l
      r -> m
      u -> z
      m -> c
      e -> l
      n -> r
      t -> q
      s -> x
      x -> a
```
So we will get the encrypted text as **gatlmzclrqxa**.

### Decryption

1. We have to generate a `5 × 5` matrix from the key as

 ```
    [m o n a r]
    [c h y b d]
    [e f g i k]
    [l p q s t]
    [u v w x z]
```

2. We need to split the ciphertext as done for plaintext while encrypting
 ```
    'ga' 'tl' 'mz' 'cl' 'rq' 'xa'
 ```
 
3. For the previous Cipher Text **gatlmzclrqxa**, by following the rules we get:

```
    Plain Text: gatlmzclrqtx
    key: monarchy
    Decryption:
      ga -> in
      tl -> st
      mz -> ru
      cl -> me
      rq -> nt
      xa -> sx
```
So we will get the encrypted text as **instrumentsx**.

## Video Explanation

- [**Video explanation of the Playfair Cipher algorithm**](https://www.youtube.com/watch?v=UURjVI5cw4g)
