#include "Maxvic.h"

class ExampleLayer : public Maxvic::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		//MV_CLIENT_INFO("ExampleLayer::Update");
	}

	void OnEvent(Maxvic::Event& event) override
	{
		//MV_CLIENT_INFO("{0}", event);
	}
};

class Sandbox : public Maxvic::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}
};

Maxvic::Application* Maxvic::CreateApplication()
{
	return new Sandbox;
}