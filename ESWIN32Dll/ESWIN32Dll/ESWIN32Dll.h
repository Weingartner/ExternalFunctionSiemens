// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the ESWIN32DLL_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// ESWIN32DLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ESWIN32DLL_EXPORTS
#define ESWIN32DLL_API __declspec(dllexport)
#else
#define ESWIN32DLL_API __declspec(dllimport)
#endif

// This class is exported from the ESWIN32Dll.dll
class ESWIN32DLL_API CESWIN32Dll {
public:
	CESWIN32Dll(void);
	// TODO: add your methods here.
};

extern ESWIN32DLL_API int nESWIN32Dll;

ESWIN32DLL_API int fnESWIN32Dll(void);

union CFI_VARIANT
{
    char b;
    short int i;
    double r;
    char* s;
};

typedef struct ExtFctStructTag
{
    char cTyp;
    union CFI_VARIANT value;
}ExtFctStruct;
typedef ExtFctStruct* ExtFctStructPtr;


#define  LEN_MAX_STR        512    //max. string size


extern "C" ESWIN32DLL_API void FuncTest_1(ExtFctStructPtr FctRet, ExtFctStructPtr FctPar, char cNrFctPar);
