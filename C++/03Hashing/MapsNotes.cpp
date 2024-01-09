/*
MAPS :

Maps are associative containers that store elements formed by a combination of a key value and a mapped value,
following a specific order.

In a map, the key values are generally used to sort and uniquely identify the elements,
while the mapped values store the content associated to this key.

The types of key and mapped value may differ, and are grouped together in member type value_type,
which is a pair type combining both:
typedef pair<const Key, T> value_type;

map containers are generally slower than unordered_map containers to access individual elements by their key, 
but they allow the direct iteration on subsets based on their order.

Maps are typically implemented as binary search trees

Container Properties : 

Associative
Elements in associative containers are referenced by their key and not by their absolute position in the 
container.

Ordered
The elements in the container follow a strict order at all times. All inserted elements are given a position 
in this order.

Map
Each element associates a key to a mapped value: Keys are meant to identify the elements whose main content 
is the mapped value.

Unique keys
No two elements in the container can have equivalent keys.

Allocator-aware
The container uses an allocator object to dynamically handle its storage needs.

Member functions
 - (constructor)	Construct map (public member function)
 - (destructor)	Map destructor (public member function)
 - operator=	Copy container content (public member function)

Iterators:
 - begin	Return iterator to beginning (public member function)
 - end	Return iterator to end (public member function)
 - rbegin	Return reverse iterator to reverse beginning (public member function)
 - rend	Return reverse iterator to reverse end (public member function)
 - cbegin	Return const_iterator to beginning (public member function)
 - cend	Return const_iterator to end (public member function)
 - crbegin	Return const_reverse_iterator to reverse beginning (public member function)
 - crend	Return const_reverse_iterator to reverse end (public member function)

Capacity:
 - empty	Test whether container is empty (public member function)
 - size	Return container size (public member function)
 - max_size	Return maximum size (public member function)

Element access:
 - operator[]	Access element (public member function)
 - at	Access element (public member function)

Modifiers:
 - insert	Insert elements (public member function)
 - erase	Erase elements (public member function)
 - swap	Swap content (public member function)
 - clear	Clear content (public member function)
 - emplace	Construct and insert element (public member function)
 - emplace_hint	Construct and insert element with hint (public member function)

Observers:
 - key_comp	Return key comparison object (public member function)
 - value_comp	Return value comparison object (public member function)

Operations:
 - find	Get iterator to element (public member function)
 - count	Count elements with a specific key (public member function)
 - lower_bound	Return iterator to lower bound (public member function)
 - upper_bound	Return iterator to upper bound (public member function)
 - equal_range	Get range of equal elements (public member function)

Allocator:
 - get_allocator	Get allocator (public member function)

*/