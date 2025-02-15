## Problem Statement

Given an array of strings `words`, return the first palindromic string in the array. If there is no such string, return an empty string `""`.

A string is palindromic if it reads the same forward and backward.

---

### Example 1:

**Input:**  
```plaintext
words = ["abc","car","ada","racecar","cool"]
```

**Output:**  
```plaintext
"ada"
```

**Explanation:**  
The first string that is palindromic is "ada".  
Note that "racecar" is also palindromic, but it is not the first.

---

### Example 2:

**Input:**  
```plaintext
words = ["notapalindrome","racecar"]
```

**Output:**  
```plaintext
"racecar"
```

**Explanation:**  
The first and only string that is palindromic is "racecar".

---

### Example 3:

**Input:**  
```plaintext
words = ["def","ghi"]
```

**Output:**  
```plaintext
""
```

**Explanation:**  
There are no palindromic strings, so the empty string is returned.

---

## Constraints:

- `1 <= words.length <= 100`
- `1 <= words[i].length <= 100`
- `words[i]` consists only of lowercase English letters.
