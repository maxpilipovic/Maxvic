#pragma once

#ifdef MV_PLATFORM_WINDOWS
	#ifdef MV_BUILD_DLL
		#define	MAXVIC_API __declspec(dllexport)
	#else
		#define	MAXVIC_API __declspec(dllimport)
	#endif
#else
	#error Maxvic supports only Windows!
#endif