## 0x0A. C - argc, argv
In the C programming language, argv and argc are commonly used to access and process command-line arguments when running a C program.

1. argc (Argument Count):

* argc is an integer variable that represents the number of command-line arguments provided when running a C program.
* It always has a value of at least 1, as the first argument (element argv[0]) is the name or path of the program itself.

2. argv (Argument Vector):

* argv is an array of strings (typically represented as an array of pointers to characters) that contains the actual command-line arguments passed to the program.
* Each element of argv is a string, and argv[0] usually contains the name or path of the program, while argv[1] through argv[argc-1] contain the additional arguments.
* The strings in argv are null-terminated, which means they end with a null character ('\0').

When you run this program with command-line arguments, like ./myprogram arg1 arg2, argc will be 3, argv[0] will be "./myprogram", argv[1] will be "arg1", and argv[2] will be "arg2".
