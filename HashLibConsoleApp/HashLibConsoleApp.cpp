// HashLibConsoleApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <hashlibpp.h>


int main()
{
	hashwrapper *myWrapper = NULL;
	//myWrapper =	new md5wrapper();
	//myWrapper = new sha1wrapper();
	myWrapper = new sha256wrapper();

	try
	{
		std::string hash = myWrapper->getHashFromString("Hello world");
		std::cout << hash << std::endl;
		//std::cout << myWrapper->getHashFromFile("/etc/motd") << std::endl;
	}
	catch (hlException &e)
	{
		//your error handling here
	}

	delete myWrapper;
	myWrapper = NULL;

    return 0;
}

