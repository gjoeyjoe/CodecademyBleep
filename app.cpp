#include <iostream>
#include <string>
#include "bleep.h"

int main() {

	std::string word = "guac";
	std::string text = "would you like guac on your burrito?";

	std::cout << bleep(word, text);

}