#pragma once

#include <memory>

#include "Core.h"



namespace Maxvic
{

	class MAXVIC_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();

	private:
		bool m_Running = true;
	};

	//To be defined in client
	Application* CreateApplication();

}