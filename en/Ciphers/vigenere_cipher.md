# Vigenere Cipher


Vigenere cipher is a famous toy cipher. The cipher was invented in 1553 by the Italian cryptographer Giovan Battista Bellaso but for centuries was attributed to the 16th-century French cryptographer Blaise de Vigenère, who devised a similar cipher in 1586.


It is easy to encrypt and decrypt but at the same time, it is easy to intercept and crack this cipher. It is a polyalphabetic substitution cipher, meaning that the same letter of the alphabet can be replaced by  different letters depending on the key. The key is a word or a phrase that is repeated to match the length of the message. Then the letters of the key are used to shift the letters of the message.


## Improvement over Ceasar cipher
The vigenere cipher is an improvement over the ceasar cipher. In ceaser cipher we use a single character as the key to shift the message. But in vigenere cipher, we use a word or a phrase as the key. This means that the same character occurring at different positions in the message will be shifted by different amounts. This makes it harder to crack the cipher.


## Setup
1. Choose the message space you are going to use. In our case, we will use all lowercase letters of the English language. But we can use ASCII characters as well. Let us denote the size of the message space as `n`. In our case, `n=26`.
2. Assign a numerical value to each letter of the message space. For example, a=1, b=2, c=3 and so on.
3. Choose a key.


## Encryption
1. Repeat the key to match the length of the message. For example, if the message is "checktheking" and the key is "chess", the key is repeated to match the length of the message. The key is now "chesschessch".


2. Now, the letters of the key are used to shift the letters of the message. Let a be 1, b be 2 and so on. Then, the message is encrypted using the following formula:


    `Cipher[i] = (Value[Message[i]] + Value[Key[i]]) % n`


    where `Cipher[i]` is the encrypted letter at position `i`, `Value[Message[i]]` is the numerical value of the letter at position `i` in the message, `Value[Key[i]]` is the numerical value of the letter at position `i` in the key and `n` is the size of the message space.
    And `%` is the modulo operator.




| message | c | h | e | c | k | t | h | e | k | i | n | g |
|---------|---|---|---|---|---|---|---|---|---|---|---|---|
| value   | 3 | 8 | 5 | 3 | 11| 20| 8 | 5 | 11| 9 | 14| 7 |
| Key     | c | h | e | s | s | c | h | e | s | s | c | h |
| Shift   | 3 | 8 | 5 | 19| 19| 3 | 8 | 5 | 19| 19| 3 | 8 |
| Cipher  | f | p | j | q | z | w | p | j | z | z | c | p |


So the encrypted message is "fpjqzwjpzzcp".


## Decryption
1. Decryption is the reverse of encryption. The decryption is done by subtracting the shift value from the cipher value. The decryption of the above example is:


    `Message[i] = (Cipher[i] - Value[Key[i]]) % n`


    where `Message[i]` is the decrypted letter at position `i`, `Cipher[i]` is the encrypted letter at position `i`, `Value[Key[i]]` is the numerical value of the letter at position `i` in the key and `n` is the size of the message space.
    And `%` is the modulo operator.


| Cipher  | f | p | j | q | z | w | p | j | z | z | c | p |
|---------|---|---|---|---|---|---|---|---|---|---|---|---|
| Key     | c | h | e | s | s | c | h | e | s | s | c | h |
| Shift   | 3 | 8 | 5 | 19| 19| 3 | 8 | 5 | 19| 19| 3 | 8 |
| Value   | 3 | 8 | 5 | 3 | 11| 20| 8 | 5 | 11| 9 | 14| 7 |
| Message | c | h | e | c | k | t | h | e | k | i | n | g |


So the decrypted message is "checktheking".




## Complexity Analysis


### Encryption


The encryption is done by adding the shift value to the message value. So the time complexity is `O(n)` where `n` is the length of the message. We use a linear data structure such as an array to store the message and the key. So the space complexity is `O(n)`.


1. Time Complexity: `O(n)`
2. Space Complexity: `O(n)`


### Decryption


Decryption is similar to encryption except for the subtraction operation. So time and space complexity is the same as encryption.


1. Time Complexity: `O(n)`
2. Space Complexity: `O(n)`


## Cryptanalysis and caution


1. It is a toy cipher. It is easy to crack. It is not secure.
2. There are several key finding methods such as
    - [Kasiski examination](https://en.wikipedia.org/wiki/Kasiski_examination)
    - [Index of coincidence](https://en.wikipedia.org/wiki/Index_of_coincidence)
3. Once key length is found, we can use [frequency analysis](https://en.wikipedia.org/wiki/Frequency_analysis) to find the key and hence crack the cipher.
4. Therefore, this cipher should not be used to encrypt any important data.


## Implementation
- [C++](https://github.com/TheAlgorithms/Python/blob/master/ciphers/vigenere_cipher.py)
- [Python](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/ciphers/vigenere_cipher.cpp)
- [Javascript](https://github.com/TheAlgorithms/JavaScript/blob/master/Ciphers/VigenereCipher.js)




