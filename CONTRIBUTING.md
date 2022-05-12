# Contributing to DIC
First off, thanks for taking the time to contribute!
because we need volunteer developers to help this project come to fruition.

### Did you find a bug?
Ensure the bug was not already reported by searching on GitHub under Issues.</br>
If you're unable to find an open issue addressing the problem, open a new one.
be sure to follow according to issue template

### Did you write a patch that fixes a bug?

Open a new GitHub pull request with the patch.
Ensure the PR description clearly describes the problem and solution. 
Include the relevant issue number if applicable and it follows the template

### Do you intend to add a new feature or change an existing one?

Submitting changes
Please send a GitHub Pull Request to DIC with a clear list of what you've done (read more about pull requests). When you send a pull request. We can always use more test coverage. Please follow our Coding Guidelines (below) and make sure all of your commits are atomic (one feature per commit).</br></br>

Always write a clear log message for your commits. One-line messages are fine for small changes, but bigger changes should look like this:

```git
$ git commit -m "A brief summary of the commit"
```
# Coding Guidelines

All new code **must** follow the following coding guidelines. \
If you make changes in a file that still uses another coding style, make sure that you follow these guidelines for your changes. \
For programming languages other than C++ (e.g. JavaScript) used in this repository and submodules, unless otherwise specified, coding guidelines listed here applies as much as possible.

**Note:** I will not take your head if you forget and use another style. However, most probably the request will be delayed until you fix your coding style. \
**Note 2:** You can use the `Astyle` program/tool to clean up any source file.

## Table Of Contents

* [1. New lines &amp; curly braces](#1-new-lines--curly-braces)
  * [a. Function blocks, class/struct definitions, namespaces](#a-function-blocks-classstruct-definitions-namespaces)
  * [b. Other code blocks](#b-other-code-blocks)
  * [c. Blocks in switch's case labels](#c-blocks-in-switchs-case-labels)
  * [d. If-else statements](#d-if-else-statements)
  * [e. Single statement if blocks](#e-single-statement-if-blocks)
  * [f. Acceptable conditions to omit braces](#f-acceptable-conditions-to-omit-braces)
  * [g. Brace enclosed initializers](#g-brace-enclosed-initializers)
* [2. Indentation](#2-indentation)
* [3. File encoding and line endings](#3-file-encoding-and-line-endings)
* [4. Initialization lists](#4-initialization-lists)
* [5. Enums](#5-enums)
* [6. Names](#6-names)
  * [a. Type names and namespaces](#a-type-names-and-namespaces)
  * [b. Variable names](#b-variable-names)
* [7. Misc](#7-misc)
* [8. Git commit message](#8-git-commit-message)
* [9. Not covered above](#9-not-covered-above)

---

## 1. New lines & curly braces

### a. Function blocks, class/struct definitions, namespaces

```c++
int myFunction(int a){
	// code
}

void myFunction(); // empty body

MyClass::MyClass(int *parent) : m_parent {parent}{
    // initialize
}

int MyClass::myFunction(int a){
    // code
}

class MyOtherClass {
public:
    // code

protected:
    // code

private:
    // code
};

namespace Name{
    // code
}
```

### b. Other code blocks

```c++
if (condition){
    // code
}

for (int a = 0; a < b; b++){
    // code
}

switch (a){
	case 1:
		// blah
	break;
	
	case 2:
		// blah
	break;

	default:
		// blah
	break;
}
```

### c. Blocks in switch's case labels

```c++
switch (var){
	case 1:{
			// declare local variables
			// code
	} break;
	
	case 2:{
        // declare local variables
        // code
    } break;
	
	default:
		// code
}
```

### d. If-else statements

```c++
if (condition){
    // code
} else if (condition){
    // code
} else {
    // code
}
```

### e. Single statement if blocks

Most single statement if blocks should look like this:

```c++
if (condition)
    a = a + b;
```

One acceptable exception to this can be `return`, `break` or `continue` statements,
provided that the test condition isn't very long and its body statement occupies only one line.
However you can still choose to use the first rule.

```c++
if (a > 0) return;

while (p){
    // ...
    if (!b) continue;
}
```

### f. Acceptable conditions to omit braces

When the conditional statement in `if`/`else` has only one line and its body occupy only one line,
this also applies to loops statements. \
Notice that for a series of `if - else` branches, if one branch needs braces then all branches must add braces.

```c++
if (a < b)  // conditional statement
    do(a);  // body

if (a < b)
    do(a);
else if (a > b)
    do(b);
else
    do(c);

if (a < b){
    do(a);
} else if (a > b){
    // curly braces required here, then all branches should also add them
    do(b);
    do(d);
} else {
    do(c);
}
```

### g. Brace enclosed initializers

Unlike single-line functions, you must not insert spaces between the brackets and concluded expressions. \
But you must insert a space between the variable name and initializer.

```c++
Class obj {}; // empty
Class obj {expr};
Class obj {expr1, /*...,*/ exprN};
QVariantMap map {{"key1", 5}, {"key2", 10}};
```

## 2. Indentation

2 spaces.

## 3. File encoding and line endings

UTF-8 and Unix-like line ending (LF). Unless some platform specific files need other encodings/line endings.

## 4. Initialization lists

Initialization lists should be vertical. This will allow for more easily readable diffs. The initialization colon should be indented and in its own line along with first argument. The rest of the arguments should be indented too and have the comma prepended.

```c++
myClass::myClass(int a, int b, int c, int d) : m_a {a}, m_b {b}, m_c {c}, m_d {d}{
    // code
}
```

## 5. Enums

Enums should be vertical. This will allow for more easily readable diffs. The members should be indented.

```c++
enum Days {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
```

## 6. Names

use an Underscore (_) for long names
it is optional to start with Upper case letter
eg- Expection_handling, manly_name

### a. Type names and namespaces

Type names and namespaces start with Upper case letter (except POD types).

```c++
class Class_name{};

struct struct_name {};

enum Enum_name {};

typedef q_list<Class_name> Some_list;

namespace Namespace_name{

}
```

### b. Variable names

it is optional to start Variable names with upper case letter.
but it is a must to use an underscore when naming more than one word

```c++
int Which_shape;
string error_message;
```

## 7. Misc

* Line breaks for long lines with operation:

  ```c++
  a += "b"
    + "c"
    + "d";
  ```

* **auto** keyword

  We allow the use of the **auto** keyword only where it is strictly necessary (for example, to declare a lambda object, etc.), or where it **enhances** the readability of the code. \
  Declarations for which one can gather enough information about the object interface (type) from its name or the usage pattern (an iterator or a loop variable are good examples of clear patterns) or the right part of the expression nicely fit here.

  When weighing whether to use an auto-typed variable please think about potential reviewers of your code, who will read it as a plain diff (on github.com, for instance). \
  Please make sure that such reviewers can understand the code completely and without excessive effort.

  Some valid use cases:

  * Container iteration and casts:

    ```c++
    template <typename List>
    void doSomethingWithList(const List &list){
        foreach (const auto &item, list){
            // we don't know item type here so we use 'auto' keyword
            // do something with item
        }
    }

    for (auto it = container.begin(), end = container.end(); it != end; ++it){
        // we don't need to know the exact iterator type,
        // because all iterators have the same interface
    }

    auto spinBox = static_cast<QSpinBox*>(sender());
    // we know the variable type based on the right-hand expression
    ```

  * Notice the spaces in the following specific situations:

    ```c++
    // Before and after the assignment and other binary (and ternary) operators there should be a space
    // There should not be a space between increment/decrement and its operand
    a += 20;
    a = (b <= MAX_B ? b : MAX_B);
    a++;
    b--;
    for (int a = 0; a < b){
    
    }
    
    // Range-based for loop, spaces before and after the colon
    for (auto i : container){
    
    }
    
    // Derived class, spaces before and after the colon
    class Derived : public Base{
    
    };
    ```

* Prefer post-increment, post-decrement operators

  ```c++
  i--, j--;  // Yes
  --i, --j;  // No
  ```

* private/public/protected must not be indented

* Preprocessor commands must go at line start

* Method definitions aren't allowed in header files

## 8. Git commit message

1. Limit the subject line to 50 characters. Subject should contain only the very essence of the changes (you should avoid extra details and internals)
2. Separate subject from body with a blank line
3. Capitalize the subject line
4. Do not end the subject line with a period
5. Use the imperative mood in the subject line (it's like you're ordering the program to do something (e.g. "Don't create temporary substrings")
6. Use the body to explain what and why vs. how
7. If commit fixes a reported issue, mention it in the message body (e.g. `Closes #4.`)

## 9. Not covered above

If something isn't covered above, just follow the same style the file you are editing has.
*This guide is not exhaustive and the style for a particular piece of code not specified here will be determined by project members on code review.*
Credits to qbit_torrent's code guildlines https://github.com/qbittorrent/qBittorrent