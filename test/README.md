7-main.c:
// Illustrates passing func parameters by reference
// Added pritnf's to verify the hypothesis

16-main.c
// Illustrates that varaible of an array points to the address of the first element in an array

17-main.c
// Illustrates array type decay
// Uses a function that takes a pointer as argument

14-main.c
Out: sizeofarray
// array type decay doesn't work with sizeof
// sizeof treats array name as object

18-main.c
Out: address-of_array
// array type decay doesn't work with address-of operator
// illustrates arrayname == address of first element in array
// however, &arrayname and arrayname aren't of the same type
// &arrayname - pointer to an array
// arrayname - pointer to first element of an array

19-main.c
Out: 19-out
// sizeof "array" > size of the elements of the array
// sizeof "pointer-to-element" > size of a pointer (8 bytes)

pointers.c
Out: pointers
// *ppx -> pointer to an int
// **ppx -> pointer to a pointer to an it