# Hill Cipher

The Hill cipher was invented by [Lester S. Hill](https://en.wikipedia.org/wiki/Lester_S._Hill).

Hill cipher is a polygraphic substitution cipher based on linear algebra. Each letter is represented by a number modulo 26. Often the simple scheme `A = 0, B = 1, …, Z = 25` is used, but this is not an essential feature of the cipher. To encrypt a message, each block of `n` letters (considered as an n-component vector) is multiplied by an invertible `n × n` matrix, against modulus 26. To decrypt the message, each block is multiplied by the inverse of the matrix used for encryption.

## Example

Suppose we take an example as:
Plain Text (PT):ACT
key:`GYBNQKURP`

## Steps

### Encryption

1. We have to write key as an `n × n` matrix as

 ```
    [6 24 1]
    [13 16 10]
    [20 17 15]
```
2. Same way convert PT into a vector as

``` 
    [0]
    [2]
    [19]
```
3. Now, we need to encipher the vector by just multiplying these two matrices

```
    [6 24 1]        [0]         [67]        [15]
    [13 16 10]  *   [2]     =   [222]   ≈   [4]   (mod 26)
    [20 17 15]      [19]        [319]       [7]
```
So we will get the encrypted text as **POH**.

### Decryption

1. We need to first inverse our key matrix 
 ```
            -1 
    [6 24 1]        [8 5 10]
    [13 16 10]   ≈  [21 8 21]  (mod 26) 
    [20 17 15]      [21 12 8]
 ```
2. For the previous Cipher Text **POH**

```
    [8 5 10]      [15]      [260]     [0]
    [21 8 21]  *  [14]  ≈   [574]  ≈  [2]    (mod 26)  ≈ ACT
    [21 12 8]     [7]       [539]     [19]
```

## Implementations

[**Python**](https://github.com/TheAlgorithms/Python/blob/master/ciphers/hill_cipher.py)

## Video Explanation

[Video explanation of the Hill Cipher](https://www.youtube.com/watch?v=6T46sgty4Mk)
