# Bloom Filter

Bloom Filters are one of a class of probabilistic data structures. The Bloom Filter uses hashes and probability to determine whether a particular item is present in a set. It can do so in constant time: O(1) and sub-linear space, though technically still O(n). An important feature of a Bloom Filter is that it is guaranteed never to provide a false negative, saying an element isn't present when it is. However, it has a probability (based on the tuning of its parameters) of providing a false positive, saying an element is present when it is not. The Bloom Filter uses a multi-hash scheme. On insertion, the inserted object is run through each hash, which produces a slot number. That slot number is flipped to 1 in the bit array. During a presence check, the object is run through the same set of hashes, and if each corresponding slot is 1, the filter reports the object has been added. If any of them are 0, it reports that the object has not been added. The hashes must be deterministic and uniformly distributed over the slots for the Bloom filter to operate effectively.

## Complexity

| Operation | Average |
|-----------|---------|
| Initialize|   O(1)  |
| Insertion |   O(1)  |
| Query     |   O(1)  |
| Space     |   O(n)  |

## Steps

### Initialization

1. Bloom Filter is Initialized, with a number of hash functions that will be run against it (henceforth known as `k`), and with an array of bits of size `M` with each bit set to 0. There are 3 distinct schemes to tune these parameters.
    1. `M` and `k` are explicitly set by the user
    2. `k` and `M` are calculated based off the expected number of elements to minimize false positives.
    3. `k` and `M` are calculated based off a desired error rate.

### Insertion

1. Object is run through `k` hashes
2. For each result of the hash `n` determine the slot within the filter `m` by calculating `n % M = m`
3. Set slot `m` within the filter to 1

### Query

1. Object is run through `k` hashes
2. For each result of the hash `n` determine the slot within the filter `m` by calculating `n % M = m`
3. Check slot `m`, if `m` is set to 0 return false
4. Return true

## Example

### Initialize

As an example, let us look at a Bloom Filter of Strings, we will initialize the Bloom Filter with 10 slots an we will use 3 hashes

|slot |0|1|2|3|4|5|6|7|8|9|
|-----|-|-|-|-|-|-|-|-|-|-|
|state|0|0|0|0|0|0|0|0|0|0|

### Insert

Let's try to insert `foo`, we will run `foo` through our three hash functions

```text
h1(foo) = 2
h2(foo) = 5
h3(foo) = 6
```

With hashes run, we will flip the corresponding bits to 1

|slot |0|1|2|3|4|5|6|7|8|9|
|-----|-|-|-|-|-|-|-|-|-|-|
|state|0|0|1|0|0|1|1|0|0|0|

### Query

#### Query bar

Let's first try querying `bar`, to query `bar` we run `bar` through our three hash functions:

```text
h1(bar) = 3
h2(bar) = 4
h3(bar) = 6
```

If we look at our bit array, bits 3 and 4 are both not set, if even just 1 bit is not set, we return false, so in this case we return false. `bar` has not been added

#### Query foo

Let's now try to query `foo`, when we run `foo` through our hashes we get:

```text
h1(foo) = 2
h2(foo) = 5
h3(foo) = 6
```

Of course, since we already inserted foo, our table has each of the three bits our hashes produced set to 1, so we return true, `foo` is present

### False Positive

Let's say we inserted `bar` and the current state of our table is:

|slot |0|1|2|3|4|5|6|7|8|9|
|-----|-|-|-|-|-|-|-|-|-|-|
|state|0|0|1|1|1|1|1|0|0|0|

Let's now query `baz`, when we run baz through our hash functions we get:

```text
h1(baz) = 3
h2(baz) = 5
h3(baz) = 6
```

Notice that this does not match either the result of `foo` or `bar`, however because slots 3, 5, and 6 are already set, we report true, that baz is in the set, and therefore produce a false positive.

## Advantage Over HashSets

* Significantly more space-efficient, Both are technically O(n) space complexity, but since bloom filters will only take up several bits per item, hash sets must hold the entire item.
* Presence checks are guaranteed to be O(1) for Bloom Filters, for HashSets, the average is O(1), but worst case is O(n)

## Disadvantage v.s. Hash Sets

* Bloom Filters can report false positives. Optimally there should be about a 1% false-positive rate. 
* Bloom Filters do not store the objects inserted into it, so you cannot recover items inserted.

## Optimizing

The probability of false positives increases with the probability of hash collisions within the filter. However, you can optimize the number of collisions if you have some sense of the cardinality of your set ahead of time. You can do this by optimizing `k` and `M`, `M` should be ~ 8-10 bits per expected item, and `k` should be `(M/n) * ln2`.

## Video Explainer

[Video Explainer by Narendra L](https://www.youtube.com/watch?v=Bay3X9PAX5k)