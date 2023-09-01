## 0x09. C - Static libraries
Static libraries in C (often referred to as "archive files" or simply "static libs") are collections of object files bundled together into a single file. They are a way to package multiple object files into a single unit for distribution and linking during the compilation process. Here are some key points about static libraries in C:

1. Purpose: Static libraries are used to group related functions, classes, or code modules into a single file. They allow developers to create reusable code components that can be shared across multiple programs.

2. File Format: Static libraries are typically created using the ar (archiver) command on Unix-like systems. The resulting file has the extension .a (e.g., libexample.a). Static libraries are platform-independent and contain compiled code in the form of relocatable object files (.o files).

3. Static Linking: When you link a program with a static library, the code from the library is included directly in the executable binary. This means that the resulting executable contains a copy of all the functions and code modules from the library that your program uses. Static linking makes the program self-contained and does not rely on external library files.

4. Advantages:

* Portability: Static libraries are self-contained, making the resulting executable highly portable, as it doesn't depend on the presence of specific shared libraries on the target system.
* Performance: Static linking can result in faster startup times and reduced runtime overhead because there's no need to load shared libraries dynamically.
* Isolation: Each program can use its own version of a static library without affecting other programs on the same system.

5. Disadvantages:

* Larger Executables: Static linking can lead to larger executable files since each program that uses the library includes its own copy of the library code.
* Less Sharing: Because each program has its own copy of the library, updates or bug fixes to the library require recompilation and redistribution of all affected programs.

6. Linking with Static Libraries: To link a program with a static library, you typically use the -l flag followed by the library name when compiling. For example, to link with libexample.a, you might use the command:
> gcc -o myprogram myprogram.c -lexample
Static libraries are a fundamental part of C development and are widely used for organizing and reusing code in various C-based software projects.

