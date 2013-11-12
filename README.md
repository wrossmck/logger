#Custom Logger
######This logger is mostly a look into how c++11 does variadic functions, and how I can couple it with tempting to make a _simple_ logger

##Installation

1. Download the [`.hpp`](https://bitbucket.org/wrossmck/logger/downloads/wrossmckLogger.hpp) file.
2. Add it to your project, and include it.
3. define a macro such as `#define WROSSMCKLOGGER = <value>` it defaults to Verbose (`VERB`)


##Usage

The method is `_log(<value>, <item>, ...)` where `<value>` can be one of `{DISABLED, ERR, NORM, DEB, VERB}`. And `<item>` is any type that can be fed to `std::cout` or `std::cerr`. 

###Note
an `std::endl` is added at the end of a method call.

##Example Usage

```
#!c++
	#define WROSSMCKLOGGER NORM
	#include "wrossmckLogger.hpp"
	
	<...>
	
	_log(NORM,"DIST");
	_log(NORM,"My distance Value is : ",f1," units");
```

##Example Output

```
	DIST
	My distance Value is : 10.5 units
```
