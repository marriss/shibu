#include <Shibu.h>

class Sandbox : public Shibu::Application 
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};


Shibu::Application* Shibu::CreateApplication() 
{
	return new Sandbox();
}