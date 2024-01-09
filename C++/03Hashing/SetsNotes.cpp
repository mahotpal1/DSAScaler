/*
Notes : 

SETS 
#include <set>
std::set <data_type> set_name; 
unordered_set<datatype> UnorderedSet_Name;
 - Storing order – The set stores the elements in sorted order.
 - Values Characteristics – All the elements in a set have unique values.
 - Values Nature – The value of the element cannot be modified once it is added to the set,
   though it is possible to remove and then add the modified value of that element. 
   Thus, the values are immutable.
 - Search Technique – Sets follow the Binary search tree implementation.
 - Arranging order – The values in a set are unindexed.

Difference Between ordered and unordered set : 

            Set                                                          Unordered Set
 - Set stores elements in a sorted order	     - Unordered Set stores elements in an unsorted order
 - Set stores/acquire unique elements only       - Unordered Set stores/acquire only unique values
 - Set uses Binary Search Trees for              - Unordered Set uses Hash Tables for implementation
   implementation.
 - More than one element can be erased by        - We can erase that element for which the iterator 
   giving the starting and ending iterator	       position is given

Functions Associated with Set
Member functions
 - (constructor)	Construct set (public member function)
 - (destructor)	Set destructor (public member function)
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

Modifiers:
 - insert	Insert element (public member function)
 - erase	Erase elements (public member function)
 - swap	Swap content (public member function)
 - clear	Clear content (public member function)
 - emplace	Construct and insert element (public member function)
 - emplace_hint	Construct and insert element with hint (public member function)

Observers:
 - key_comp	Return comparison object (public member function)
 - value_comp	Return comparison object (public member function)

Operations:
 - find	Get iterator to element (public member function)
 - count	Count elements with a specific value (public member function)
 - lower_bound	Return iterator to lower bound (public member function)
 - upper_bound	Return iterator to upper bound (public member function)
 - equal_range	Get range of equal elements (public member function)

Allocator:
 - get_allocator	Get allocator (public member function)

The time complexities for doing various operations on sets are:
 - Insertion of Elements – O(log N)
 - Deletion of Elements – O(log N)

*/