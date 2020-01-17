// ESWin32TestProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>


int _tmain(int argc, _TCHAR* argv[])
{
	//std::stringstream strs;
	//std::string pathfile1 = "C:\\Users\\kronbergerj\\Desktop\\Test\\301.spf";
	//std::string pathfile2 = "C:\\Users\\kronbergerj\\Desktop\\Test\\302.spf";
	//std::string pathfile3 = "C:\\Users\\kronbergerj\\Desktop\\Test\\303.spf";
	//strs << "C:\\Progra~2\\Ternary_Ext.exe" << " " << pathfile1 << " " << pathfile2 << " " << pathfile3;
	//system(strs.str().c_str());

	

	std::string str = "C:\\Users\\kronbergerj\\Desktop\\Test\\301.spf*C:\\Users\\kronbergerj\\Desktop\\Test\\302.spf*C:\\Users\\kronbergerj\\Desktop\\Test\\303.spf";

		std::size_t firstPos = str.find_first_of("*");
		std::size_t lastPos = str.find_last_of("*");

		std::string pathfile1 = str.substr (0, firstPos);
		std::string pathfile2 = str.substr (firstPos+1, lastPos-firstPos-1);
		std::string pathfile3 = str.substr (lastPos+1, str.length());

		std::cout <<  "firstPos: " + firstPos;
		std::cout << "\n";
		std::cout <<  pathfile1;
		std::cout << "\n";
		std::cout <<  pathfile2;
		std::cout << "\n";
		std::cout <<  pathfile3;
		std::cout << "\n";
		//std::cin.get();

		std::stringstream strs;
		strs << "C:\\Progra~2\\Ternary_Ext.exe" << " " << pathfile1 << " " << pathfile2 << " " << pathfile3;
		system(strs.str().c_str());

	//std::stringstream ss(str);
	//std::string item;
	//std::vector<std::string> splittedStrings;
	//
	//while (std::getline(ss, item, '*'))
	//{
	//	splittedStrings.push_back(item);
	//}

	//**********************************************************************	
	//std::string pathfile1 = splittedStrings[0];
	//std::string pathfile2 = splittedStrings[1];
	//std::string pathfile3 = splittedStrings[2];

	//std::string pathfile1 = "Z:\\tmpfle\\301.spf";
	//std::string pathfile2 = "Z:\\tmpfle\\3010_1.spf";
	//std::string pathfile3 = "Z:\\tmpfle\\3010_2.spf";

	//std::string str = "C:\\Users\\kronbergerj\\Desktop\\Test\\301.spf*C:\\Users\\kronbergerj\\Desktop\\Test\\302.spf*C:\\Users\\kronbergerj\\Desktop\\Test\\303_1.spf";

	//std::stringstream ss(str);
	//std::string item;
	//std::vector<std::string> splittedStrings;
	//while (std::getline(ss, item, '*'))
	//{
	//	splittedStrings.push_back(item);
	//}

	//std::string pathFile1 = splittedStrings[0];
	//std::string pathFile2 = splittedStrings[1];
	//std::string pathFile3 = splittedStrings[2];

	//std::cout << pathFile1;
	//std::cout << "\n";
	//std::cout << pathFile2;
	//std::cout << "\n";
	//std::cout << pathFile3;
	//std::cin.get();

	//std::ifstream ifile1(pathFile1.c_str());
	//std::ifstream ifile2(pathFile2.c_str());
	//std::ifstream ifile3(pathFile3.c_str());

	//if(ifile1 && ifile2 && ifile3)
	//{
	//	std::stringstream ss;
	//	ss << "C:\\Users\\kronbergerj\\Desktop\\Test\\Ternary_Ext.exe" << " " << pathFile1 << " " << pathFile2 << " " << pathFile3;
	//	system(ss.str().c_str());
	//}
	//else
	//{
	//	system("C:\\Windows\\System32\\calc.exe");
	//}
	
	return 0;
}

