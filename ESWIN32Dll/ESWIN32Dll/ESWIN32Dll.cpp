// ESWIN32Dll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "ESWIN32Dll.h"
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>

// This is an example of an exported variable
ESWIN32DLL_API int nESWIN32Dll=0;

// This is an example of an exported function.
ESWIN32DLL_API int fnESWIN32Dll(void)
{
	return 42;
}

//FCT FuncTest_1 = ("C:\EsWin32Dll.dll"/B/R,R/S)
//(variable) Return: B
//(const)     Par_0: R
//(const)     Par_1: R
//(variable)  Par_2: S
ESWIN32DLL_API void FuncTest_1(ExtFctStructPtr FctRet, ExtFctStructPtr FctPar, char cNrFctPar)
{
    bool bOk = false;

    if (3 == cNrFctPar
        && 'R' == (FctPar[0]).cTyp
        && 'R' == (FctPar[1]).cTyp
        && 'S' == (FctPar[2]).cTyp
        && 'B' == FctRet->cTyp)
    {
        double dTmp = 0.0;

        //Par_0 * Par_1
        dTmp = (FctPar[0]).value.r * (FctPar[1]).value.r;
        
        //Par_2
        errno_t err = _gcvt_s((FctPar[2]).value.s, LEN_MAX_STR, dTmp, 15);

        //Return
        if (0 == err)
            FctRet->value.b = true;
        else
            FctRet->value.b = false;

		std::string str = FctPar[2].value.s;

		std::size_t firstPos = str.find_first_of("*");
		std::size_t lastPos = str.find_last_of("*");

		std::string pathfile1 = str.substr (0, firstPos);
		std::string pathfile2 = str.substr (firstPos+1, lastPos-firstPos-1);
		std::string pathfile3 = str.substr (lastPos+1, str.length());

		//******Output paths to console window*****************************
		//std::cout <<  "firstPos: " + firstPos;
		//std::cout << "\n";
		//std::cout <<  pathfile1;
		//std::cout << "\n";
		//std::cout <<  pathfile2;
		//std::cout << "\n";
		//std::cout <<  pathfile3;
		//std::cout << "\n";
		//std::cin.get();
		//*****************************************************************

		std::stringstream strs;
		strs << "C:\\Progra~2\\Siemens\\MotionControl\\siemens\\sinumerik\\hmi\\appl\\Ternary_Ext.exe" << " " << pathfile1 << " " << pathfile2 << " " << pathfile3;
		system(strs.str().c_str());		
	}
}

// This is the constructor of a class that has been exported.
// see ESWIN32Dll.h for the class definition
CESWIN32Dll::CESWIN32Dll()
{
	return;
}
