#include "Maxvic.h"

class Sandbox : public Maxvic::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Maxvic::Application* Maxvic::CreateApplication()
{
	return new Sandbox;
}