#ifndef MAIN_H
#define MAIN_H

/* Function prototype for binary_to_uint */
unsigned int binary_to_uint(const char *b);

/* Function prototype for print_binary */
void print_binary(unsigned long int n);

/* Function prototype for get_bit */
int get_bit(unsigned long int n, unsigned int index);

/* Function prototype for set_bit */
int set_bit(unsigned long int *n, unsigned int index);

/* Function prototype for clear_bit */
int clear_bit(unsigned long int *n, unsigned int index);

/* Function prototype for flip_bits */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Function prototype for get_endianness */
int get_endianness(void);

/* Function prototype for _putchar */
int _putchar(char c);

#endif /* MAIN_H */
