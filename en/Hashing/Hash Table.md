### Hashing

Hashing is an important data structure designed to solve the problem of efficiently finding and storing data in an array. It is a technique of mapping a large chunk of data into small tables using a hashing function. It is also known as the message digest function. 
It is a technique that uniquely identifies a specific item from a collection of similar items.
<br>
<img src = "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRArVLOkUUEu3PbJ2W5Nl5Deovck78vLFbW7Q&usqp=CAU" />
### Process

Hashing in a data structure is a two-step process.

The hash function converts the item into a small integer or hash value. This integer is used as an index to store the original data.
It stores the data in a hash table. You can use a hash key to locate data quickly.

### Hash Function

The hash function in a data structure maps arbitrary size of data to fixed-sized data. It returns the following values:  a small integer value (also known as hash value), hash codes, and hash sums.

```hash = hashfunc(key)```

```index = hash % array_size```

<u>The has function must satisfy the following requirements:</u>

- A good hash function is easy to compute.
- A good hash function never gets stuck in clustering and distributes keys evenly across the hash table.
- A good hash function avoids collision when two elements or items get assigned to the same hash value.

### Hash Table Generation

Hashing in data structure uses hash tables to store the key-value pairs. The hash table then uses the hash function to generate an index. Hashing uses this unique index to perform insert, update, and search operations.
Let us understand hashing in a data structure with an example. Imagine you need to store some items (arranged in a key-value pair) inside a hash table with 30 cells.
The values are: (3,21) (1,72) (40,36) (5,30) (11,44) (15,33) (18,12) (16,80) (38,99)

The hash table will look like the following:

|Serial Number |	Key	   |      Hash     | Array Index |
|--------------|---------|---------------|-------------|
|       1	     |   3	   |   3%30 = 3    |      3      |
|       2	     |   1     |   1%30 = 1	   |      1      |
|       3	     |   40	   |   40%30 = 10	 |      10     |
|       4	     |    5	   |    5%30 = 5	 |      5      |
|       5	     |   11	   |   11%30 = 11  |      11     |
|       6	     |   15	   |   15%30 = 15  |      15     |
|       7	     |   18	   |   18%30 = 18	 |      18     |
|       8	     |   16	   |   16%30 = 16	 |      16     |
|       9	     |   38	   |   38%30 = 8	 |       8     |

### Time Complexity

|Algorithm		|Average	|Worst case|
|-------------|---------|----------|
|Space		    |O(n)	|O(n)|
|Search		    |O(1)	|O(n)|
|Insert		    |O(1)	|O(n)|
|Delete		    |O(1)	|O(n)|

### Problems

Hashing in data structure falls into a collision if two keys are assigned the same index number in the hash table. The collision creates a problem because each index in a hash table is supposed to store only one value.

### Solution
- Linear Probing
  -  The hash(n) is the index computed using a hash function and T is the table size.<br>
     If slot ```index = ( hash(n) % T)``` is full, then we look for the next slot index by adding 1 ```((hash(n) + 1) % T)```. <br>
     If ```(hash(n) + 1) % T``` is also full, then we try ```(hash(n) + 2) % T```. <br>
     If ```(hash(n) + 2) % T``` is also full, then we try ```(hash(n) + 3) % T``` and so on.
     
Example:

|Serial Number |	Key	   |      Hash     | Array Index |  Array Index after Linear Probing |
|--------------|---------|---------------|-------------|-----------------------------------|
|       1	     |   3	   |   3%30 = 3    |      3      |                 3                 |
|       2	     |   1     |   1%30 = 1	   |      1      |                 1                 |
|       3	     |   40	   |   40%30 = 10	 |      10     |                 4                 |
|       4	     |    5	   |    5%30 = 5	 |      5      |                 5                 |
|       5	     |   11	   |   11%30 = 11  |      11     |                 11                |
|       6	     |   15	   |   15%30 = 15  |      15     |                 15                |
|       7	     |   18	   |   18%30 = 18	 |      18     |                 18                |
|       8	     |   16	   |   16%30 = 16	 |      16     |                 16                |
|       9	     |   38	   |   38%30 = 8	 |       8     |                 17                |

- Double Hashing
  - The double hashing technique uses two hash functions. <br>
    The second hash function comes into use when the first function causes a collision. It provides an offset index to store the value.<br>
    The formula for the double hashing technique is as follows: <br>
    ``` (firstHash(key) + i * secondHash(key)) % sizeOfTable ```
    Where i is the offset value. This offset value keeps incremented until it finds an empty slot.
    For example, you have two hash functions: h1 and h2. You must perform the following steps to find an empty slot:<br>
    
    Verify if ```hash1(key)``` is empty. If yes, then store the value on this slot.<br>
    If ```hash1(key)``` is not empty, then find another slot using hash2(key).<br>
    
    Verify ```if hash1(key) + hash2(key)``` is empty. If yes, then store the value on this slot.<br>
    Keep incrementing the counter and repeat with ```hash1(key)+2hash2(key)```, ```hash1(key)+3hash2(key)```, and so on, until it finds an empty slot.

### Resources for more information

- [Wikipedia](https://en.wikipedia.org/wiki/Hash_table#:~:text=In%20computing%2C%20a%20hash%20table,desired%20value%20can%20be%20found)
- [TutorialsPoint](https://www.tutorialspoint.com/data_structures_algorithms/hash_data_structure.htm)
- [HackerEarth](https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/tutorial/)


