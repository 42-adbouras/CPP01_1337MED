## ToC
- [ex00](#ex00)
- [ex01](#ex01)
- [ex02](#ex02)
- [ex03](#ex03)
- [ex04](#ex04)
- [ex05](#ex05)
- [ex06](#ex06)

# ex00
In this exersice we have to implement a `Zombie` class, with a string private attribute `name` and a member function `void announce( void );` so a zombie can announce themselves as follows:
```
<name>: BraiiiiiiinnnzzzZ...
```
Then, we have to implement the two following functions:\
`Zombie* newZombie( std::string name );` It creates a zombie, name it, and return it so you can use it outside of the function scope.\
`void randomChump( std::string name );` It creates a zombie, name it, and the zombie announces itself.\
The aim of this exersice is we  have to determine in what case it’s better to allocate the zombies on the stack or heap.\
### Zombie class implementation:
```cpp
class Zombie
{
public:
	void	announce( void );
	str	get_name( void );	// str is an alias for std::string
	Zombie	( void ){};
	Zombie	(str name);
	~Zombie	( void );
private:
	std::string	name;	
};
```
### Dynamic Memory Allocation:
Memory allocation in C++ can be categorized into two main types: `static` and `dynamic` memory allocation. Each type serves different purposes and has distinct characteristics. Here’s a detailed explanation of both:

**1. Static Memory Allocation**\
Static memory allocation occurs when the size of the memory required is known at compile time. The memory is allocated on the stack or in the data segment of the program.

**Characteristics:**\
Memory size must be known at compile time.\
Allocated memory remains until the program ends.\
Faster allocation and deallocation since it's managed by the compiler.

**2. Dynamic Memory Allocation**
Dynamic memory allocation allows you to allocate memory at runtime using the heap. This is useful when the size of data structures cannot be determined at compile time.

**Characteristics:**\
Memory is allocated during program execution.\
The programmer is responsible for deallocating memory to prevent memory leaks.\
More flexible but can be slower due to overhead.

*Functions Used:*\
`new`: Allocates memory.\
`delete`: Deallocates memory.\
`new[]`: Allocates memory for arrays.\
`delete[]`: Deallocates memory for arrays.\
Examples:
```cpp
#include <iostream>

int main() {
    int *arr = new int[10]; // Dynamic allocation of an array of 10 integers
    delete[] arr; // Deallocate the memory
}

```

# ex01
# ex02
# ex03
# ex04
# ex05
# ex06
