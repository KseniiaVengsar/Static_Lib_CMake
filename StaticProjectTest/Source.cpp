#include "Header.h"
namespace greet
{

	std::string Greeter::greet(const std::string name) {
		return "Здравствуйте, " + name + "!";
	}
}