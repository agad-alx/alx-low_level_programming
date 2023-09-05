## 0x0B. C - malloc, free
`malloc` and `free` are two important functions in the C programming language used for dynamic memory allocation and deallocation.

1. `malloc` (Memory Allocation):
   - `malloc` stands for "memory allocation."
   - It is a library function defined in the `<stdlib.h>` header.
   - `malloc` is used to allocate a block of memory in the heap (i.e., the dynamic memory area).
   - It takes one argument, which is the number of bytes to allocate.
   - It returns a pointer to the first byte of the allocated memory block.
   - If `malloc` cannot allocate the requested memory, it returns a special value `NULL`.

   Example usage:
   ```c
   int *arr;
   arr = (int *)malloc(5 * sizeof(int)); // Allocating space for an array of 5 integers
   if (arr == NULL) {
       // Handle memory allocation failure
   }
   ```

2. `free` (Memory Deallocation):
   - `free` is also a library function defined in the `<stdlib.h>` header.
   - It is used to deallocate memory previously allocated by `malloc`, `calloc`, or `realloc`.
   - When you no longer need the dynamically allocated memory, you should use `free` to release it to the system.
   - After calling `free`, the pointer is no longer valid and should not be accessed.
   
   Example usage:
   ```c
   int *arr;
   arr = (int *)malloc(5 * sizeof(int)); // Allocate memory
   if (arr == NULL) {
       // Handle memory allocation failure
   }
   // ... (use the dynamically allocated memory)

   // Free the allocated memory when done
   free(arr);
   ```

It's important to note some best practices and considerations when using `malloc` and `free`:

- Always check if `malloc` returns `NULL` to handle memory allocation failure gracefully.
- Make sure to free memory when you're done with it to prevent memory leaks.
- Avoid using a pointer after you have freed the memory it points to (dangling pointer).
- When allocating memory for arrays or data structures, consider the size of the data types you're working with and use `sizeof` to calculate the correct amount of memory to allocate.
- Be careful with pointer arithmetic and ensure that you stay within the bounds of the allocated memory.
- In modern C programming, consider using the safer alternatives like `calloc` (which initializes the allocated memory to zero) and `realloc` (which allows resizing an already allocated block of memory) as needed.
