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
Zombie class implementation:
```cpp
class Zombie
{
public:
	void	announce( void );
	str		get_name( void );	// str is an alias for std::string
	Zombie			( void ){};
	Zombie			(str name);
	~Zombie			( void );
private:
	std::string	name;	
};

```
# ex01
# ex02
# ex03
# ex04
# ex05
# ex06
