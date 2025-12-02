#pragma once
#include "Core.h"


namespace Maxvic
{

	class MAXVIC_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();

}