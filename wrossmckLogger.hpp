//
//  wrossmckLogger.hpp
//  openCVTest
//
//  Created by Ross McKinley (wrossmck) on 12/11/2013.
//  Copyright (c) 2013 Ross McKinley (wrossmck). All rights reserved.
//

#ifndef wrossmckLogger_hpp
#define wrossmckLogger_hpp

#ifndef WROSSMCKLOGGER
	#define WROSSMCKLOGGER VERB
#endif

#include <ostream>
#include <iostream>

enum WROSSMCKLOGGERLEVEL {
	DISABLED = 0,
	ERR   = 1,
	NORM  = 2,
	DEB   = 3,
	VERB  = 4
};

template <class T>
void _log(WROSSMCKLOGGERLEVEL b, T a){
#if (b<=WROSSMCKLOGGER)
	std::ostream &c = b==ERR ? std::cout : std::cerr;
	c<<a<<std::endl;
#endif
}

template<typename T, typename... Args>
void _log(WROSSMCKLOGGERLEVEL b, T a, Args... args) // recursive variadic function
{
#if (b<=WROSSMCKLOGGER)
	std::ostream &c = b==ERR ? std::cout : std::cerr;
	c<<a;
	_log(b, args...) ;
#endif
}



#endif
