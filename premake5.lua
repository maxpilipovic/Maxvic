workspace "Maxvic"
	architecture "x64" 

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Maxvic"
	location "Maxvic"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir.. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir.. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/vendor/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"
		buildoptions { "/utf-8"}

		defines
		{
			"MV_PLATFORM_WINDOWS",
			"MV_BUILD_DLL"
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

	filter "configurations:Debug"
		defines "MV_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "MV_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "MV_DIST"
		optimize "On"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir.. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir.. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"Maxvic/vendor/spdlog/include",
		"Maxvic/src"
	}

	links
	{
		"Maxvic"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"
		buildoptions { "/utf-8"}

		defines
		{
			"MV_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "MV_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "MV_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "MV_DIST"
		optimize "On"