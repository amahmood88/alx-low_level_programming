#ifndef _FUNC_PTR_H_
#define _FUNC_PTR_H_

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* _FUNC_PTR_H_ */
