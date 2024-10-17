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
In C++, both pointers `(*)` and references `(&)` can be used to refer to another variable. However, they have different properties and are best used in different situations.

* Use a pointer (Weapon *weapon) when:

You want the ability to reassign the pointer to a different object. In your HumanB class, the _weapon member is a pointer, which allows the setWeapon method to change the weapon that HumanB is holding.
You need to express that the object might not exist. A pointer can be nullptr, indicating that it doesn't point to any object. This can be useful for optional members, or before the object has been created.
* Use a reference (Weapon &weapon) when:

You want to ensure that the reference always refers to a valid object. References cannot be nullptr, and once a reference is initialized to an object, it cannot be changed to refer to a different object. This is used in your HumanA class, where each HumanA always has a weapon, and the weapon cannot be changed after the HumanA is created.
You want to avoid dealing with pointer syntax. References can be used just like the original variable, without needing to dereference them.\
In this exersice, HumanA uses a reference to Weapon because each HumanA is always created with a weapon, and that weapon can not be changed. HumanB uses a pointer to Weapon because a HumanB can be created without a weapon, and a weapon can be assigned later with setWeapon.
# ex04
# ex05
# ex06
