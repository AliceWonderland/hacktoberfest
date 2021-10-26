   JavaScript - The Arrays Object
   The Array object lets you store multiple values in a single variable. It stores a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.

Syntax
Use the following syntax to create an Array object −

var fruits = new Array( "apple", "orange", "mango" );
The Array parameter is a list of strings or integers. When you specify a single numeric parameter with the Array constructor, you specify the initial length of the array. The maximum length allowed for an array is 4,294,967,295.

You can create array by simply assigning values as follows −

var fruits = [ "apple", "orange", "mango" ];
You will use ordinal numbers to access and to set values inside an array as follows.

fruits[0] is the first element
fruits[1] is the second element
fruits[2] is the third element
Array Properties
Here is a list of the properties of the Array object along with their description.

Sr.No.	Property & Description
1	constructor
Returns a reference to the array function that created the object.

2	
index

The property represents the zero-based index of the match in the string

3	
input

This property is only present in arrays created by regular expression matches.

4	length
Reflects the number of elements in an array.

5	prototype
The prototype property allows you to add properties and methods to an object.

In the following sections, we will have a few examples to illustrate the usage of Array properties.

Array Methods
Here is a list of the methods of the Array object along with their description.

Sr.No.	Method & Description
1	concat()
Returns a new array comprised of this array joined with other array(s) and/or value(s).

2	every()
Returns true if every element in this array satisfies the provided testing function.

3	filter()
Creates a new array with all of the elements of this array for which the provided filtering function returns true.

4	forEach()
Calls a function for each element in the array.

5	indexOf()
Returns the first (least) index of an element within the array equal to the specified value, or -1 if none is found.

6	join()
Joins all elements of an array into a string.

7	lastIndexOf()
Returns the last (greatest) index of an element within the array equal to the specified value, or -1 if none is found.

8	map()
Creates a new array with the results of calling a provided function on every element in this array.

9	pop()
Removes the last element from an array and returns that element.

10	push()
Adds one or more elements to the end of an array and returns the new length of the array.

11	reduce()
Apply a function simultaneously against two values of the array (from left-to-right) as to reduce it to a single value.

12	reduceRight()
Apply a function simultaneously against two values of the array (from right-to-left) as to reduce it to a single value.

13	reverse()
Reverses the order of the elements of an array -- the first becomes the last, and the last becomes the first.

14	shift()
Removes the first element from an array and returns that element.

15	slice()
Extracts a section of an array and returns a new array.

16	some()
Returns true if at least one element in this array satisfies the provided testing function.

17	toSource()
Represents the source code of an object

18	sort()
Sorts the elements of an array

19	splice()
Adds and/or removes elements from an array.

20	toString()
Returns a string representing the array and its elements.

21	unshift()
Adds one or more elements to the front of an array and returns the new length of the array.

In the following sections, we will have a few examples to demonstrate the usage of Array methods.
We've talked in the past about different ways of iterating over arrays. But in this drip we'll take a look at one way not to do it.

JavaScript's for...in loop iterates over the enumerable properties of an object like so:

var tMinus = {
    two: "Two",
    one: "One",
    zero: "Blast off!"
};

var countdown = "";

for (var step in tMinus) {
    countdown += tMinus[step] + "\n";
}

console.log(countdown);
// => "Two
//    One
//    Blast Off!
//    "
Because for...in operates on any JavaScript object, it is also possible to use it with arrays. For example:

var tMinus = [
    "Two",
    "One",
    "Blast off!"
];

var countdown = "";

for (var step in tMinus) {
    countdown += tMinus[step] + "\n";
}

console.log(countdown);
// => "Two
//    One
//    Blast Off!
//    "
However, there are three problems with using this approach on arrays. First, the for...in also iterates over an object's prototype properties if those properties are enumerable. For example:

Array.prototype.voice = "James Earl Jones";

var tMinus = [
    "Two",
    "One",
    "Blast off!"
];

var countdown = "";

for (var step in tMinus) {
    countdown += tMinus[step] + "\n";
}

console.log(countdown);
// => "Two
//    One
//    Blast Off!
//    James Earl Jones
//    "
We've talked in the past about different ways of iterating over arrays. But in this drip we'll take a look at one way not to do it.

JavaScript's for...in loop iterates over the enumerable properties of an object like so:

var tMinus = {
    two: "Two",
    one: "One",
    zero: "Blast off!"
};

var countdown = "";

for (var step in tMinus) {
    countdown += tMinus[step] + "\n";
}

console.log(countdown);
// => "Two
//    One
//    Blast Off!
//    "
Because for...in operates on any JavaScript object, it is also possible to use it with arrays. For example:

var tMinus = [
    "Two",
    "One",
    "Blast off!"
];

var countdown = "";

for (var step in tMinus) {
    countdown += tMinus[step] + "\n";
}

console.log(countdown);
// => "Two
//    One
//    Blast Off!
//    "
However, there are three problems with using this approach on arrays. First, the for...in also iterates over an object's prototype properties if those properties are enumerable. For example:

Array.prototype.voice = "James Earl Jones";

var tMinus = [
    "Two",
    "One",
    "Blast off!"
];

var countdown = "";

for (var step in tMinus) {
    countdown += tMinus[step] + "\n";
}

console.log(countdown);
// => "Two
//    One
//    Blast Off!
//    James Earl Jones
//    "
We've talked in the past about different ways of iterating over arrays. But in this drip we'll take a look at one way not to do it.

JavaScript's for...in loop iterates over the enumerable properties of an object like so:

var tMinus = {
    two: "Two",
    one: "One",
    zero: "Blast off!"
};

var countdown = "";

for (var step in tMinus) {
    countdown += tMinus[step] + "\n";
}

console.log(countdown);
// => "Two
//    One
//    Blast Off!
//    "
Because for...in operates on any JavaScript object, it is also possible to use it with arrays. For example:

var tMinus = [
    "Two",
    "One",
    "Blast off!"
];

var countdown = "";

for (var step in tMinus) {
    countdown += tMinus[step] + "\n";
}

console.log(countdown);
// => "Two
//    One
//    Blast Off!
//    "
However, there are three problems with using this approach on arrays. First, the for...in also iterates over an object's prototype properties if those properties are enumerable. For example:

Array.prototype.voice = "James Earl Jones";

var tMinus = [
    "Two",
    "One",
    "Blast off!"
];

var countdown = "";

for (var step in tMinus) {
    countdown += tMinus[step] + "\n";
}

console.log(countdown);
// => "Two
//    One
//    Blast Off!
//    James Earl Jones
//    "
That can be solved by using hasOwnProperty to exclude prototype properties.

Array.prototype.voice = "James Earl Jones";

Array.prototype.voice = "James Earl Jones";

var tMinus = [
    "Two",
    "One",
    "Blast off!"
];

var countdown = "";

for (var step in tMinus) {
    if (tMinus.hasOwnProperty(step)) {
        countdown += tMinus[step] + "\n";
    }
}

console.log(countdown);
// => "Two
//    One
//    Blast Off!
//    "
Second, according to the specification for...in loops may iterate over an object's values in an arbitrary order.

That's not really a problem for an ordinary object whose values are inherently unordered anyway. But you probably don't want your JavaScript engine handing back array values in a random order, because you could get unexpected results like this:

console.log(countdown);
// => "Blast Off!
//    One
//    Two
//    "
The third problem is that for...in iterates over all enumerable properties, not just the array's elements. As we've discussed before, it is possible to store additional properties on an array. This can also lead to unexpected results.

var tMinus = [
    "Two",
    "One",
    "Blast off!"
];

tMinus.announcer = "Morgan Freeman";

var countdown = "";

for (var step in tMinus) {
    if (tMinus.hasOwnProperty(step)) {
        countdown += tMinus[step] + "\n";
    }
}

console.log(countdown);
// => "Two
//    One
//    Blast Off!
//    Morgan Freeman
//    "
Because of these problems you will almost never want iterate over arrays with for...in loops. Instead, use an ordinary for loop, or one of the built-in array iteration methods like forEach or map.

Now you know one more quirk to avoid as you write safe and clean JavaScript.

Thanks for reading!
Manish kumar


