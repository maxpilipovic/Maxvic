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

#define BIT(x) (1 << x)

//Look at these macros later
#ifdef MV_ENABLE_ASSERTS
	#define MV_ASSERT(x, ...) { if(!(x)) { MV_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define MV_CORE_ASSERT(x, ...) { if(!(x)) { MV_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define MV_ASSERT(x, ...)
	#define MV_CORE_ASSERT(x, ...)
#endif