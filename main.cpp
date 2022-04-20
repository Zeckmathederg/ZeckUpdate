#include <iostream>
#include <fstream>
#include "prompts.hpp"
#define 	PROMPTNUM 13

std::string filename("../updates/update.txt");

std::fstream outfile;

void prompt(std::string outp, std::string inp) {
	// Fetch input
	std::cout << outp;
	std::getline(std::cin, inp);
	// Write input
	outfile.write(outp.data(), outp.size());
	outfile.write(inp.data(), inp.size());
	outfile.write(nln.data(), nln.size());
}

int main() {
	// File Creating
	std::cout << "Cleaning File...\n";
	remove("../updates/update.txt");
	std::cout << "Preparing file...\n";
    outfile.open(filename, std::ios_base::app);
    if (!outfile.is_open()) {
        std::cout << "File " << filename << " does not exist.\n";
		return 1;
    } 
	else {
        std::cout << "File ready to write! Total responses to complete: " << PROMPTNUM << "\n\n";
    }

	// Prompting
	prompt(feeling, respfeeling);
	prompt(whyfeeling, respwhyfeeling);
	prompt(day, respday);
	prompt(hungry, resphungry);
	prompt(food, respfood);
	prompt(thirsty, respthirsty);
	prompt(drink, respdrink);
	prompt(anyhurt, respanyhurt);
	prompt(sick, respsick);
	prompt(occupation, respoccupation);
	prompt(wish, respwish);
	prompt(wishocc, respwishocc);
	prompt(safe, respsafe);
	return 0;
}