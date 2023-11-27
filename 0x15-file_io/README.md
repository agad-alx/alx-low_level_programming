# File I/O README

## Overview

File Input/Output (I/O) is a crucial aspect of operating systems and programming, involving the creation, opening, reading, writing, and closing of files. Understanding file descriptors is essential in managing these operations. This README provides an overview of these fundamental concepts.

## 1. Creating and Opening Files

- In programming languages like C, file creation often involves using the `fopen()` function.
- In Unix-like environments, the `open()` system call is employed to open or create a file, returning a file descriptor (an integer representing the file).

## 2. Closing Files

- In C, file closure is accomplished using the `fclose()` function.
- Unix-like systems use the `close()` system call for closing files, releasing associated resources.

## 3. Reading and Writing Files

- In C, file reading and writing are achieved with functions like `fread()` and `fwrite()`.
- Unix-like systems utilize `read()` and `write()` system calls, requiring the file descriptor as an argument.

## 4. File Descriptors

- File descriptors are integers representing open files in Unix-like operating systems.
- They serve as references to files in the operating system's internal data structures, enabling file management.

## 5. Standard File Descriptors

- Unix-like systems have three standard file descriptors:
  - 0 (stdin): Standard input for reading from the keyboard or other sources.
  - 1 (stdout): Standard output for normal writing.
  - 2 (stderr): Standard error for writing error messages.
- POSIX names: STDIN_FILENO, STDOUT_FILENO, and STDERR_FILENO.

## 6. I/O System Calls

- Key system calls (`open()`, `close()`, `read()`, and `write()`) interact with files.
- `open()` takes filename, mode, and optional flags, returning a file descriptor.
- `close()` takes a file descriptor, closing the associated file.
- `read()` and `write()` require a file descriptor, a buffer, and the number of bytes to read/write.

## 7. File Flags (O_RDONLY, O_WRONLY, O_RDWR)

- Flags used with `open()` to specify file access mode.
- O_RDONLY: Read-only access.
- O_WRONLY: Write-only access.
- O_RDWR: Both reading and writing.

## 8. File Permissions

- Unix-like systems use file permissions to determine read, write, and execute access.
- Permissions are set during file creation with `open()` using octal values (e.g., 0644).

## 9. System Calls

- System calls are requests to the operating system kernel to perform specific operations, such as file I/O or process management.
- They act as an interface between user-level programs and the kernel.

## 10. Difference Between a Function and a System Call

- Functions are part of a program's user-level code, callable within the program.
- System calls are requests to the operating system kernel, involving a context switch from user mode to kernel mode. They perform privileged operations like file I/O and process management, serving as a lower-level interface than functions.

## Summary

In summary, file operations involve creating, opening, reading, writing, and closing files, with file descriptors serving as references. System calls provide a means for user-level programs to interact with the operating system, while functions are part of a program's code, handling various tasks within the program's logic.
