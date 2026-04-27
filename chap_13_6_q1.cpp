
#include<iostream>
#include<string_view>
#include<optional>
enum class Animal {
	pig,
	chicken,
	goat,
	cat,
	dog,
	duck,
	Unknown
};
constexpr std::string_view getAnimalName(Animal animal) {
	using enum Animal;
	switch (animal) {
		case pig: return "pig";
		case chicken: return "chicken";
		case goat: return "goat";
		case cat: return "cat";
		case dog: return "dog";
		case duck: return "duck";
		default : std::cout<< "Unknown animal name.\n";
			return "";
	}
}

constexpr std::optional<Animal> getAnimalFromString(std::string_view animalName) {
	using enum Animal;
	if (animalName == "pig") return pig;
	if (animalName == "chicken") return chicken;
	if (animalName == "goat") return goat;
	if (animalName == "cat") return cat;
	if (animalName == "dog") return dog;
	if (animalName == "duck") return duck;
	else {
		std::cout << "Unknown animal name to string.\n";
		return Unknown;
	}
}

void printNumberOfLegs(std::string_view animalName) {
	if (animalName == "pig") { 
		std::cout << "A pig has 4 legs.\n"; 
		return; }
	if (animalName == "chicken") { 
		std::cout << "A chicken has 2 legs.\n"; 
		return; }
	if (animalName == "goat") { 
		std::cout << "A goat has 4 legs.\n"; 
		return; }
	if (animalName == "cat") { 
		std::cout << "A cat has 4 legs.\n"; 
		return; }
	if (animalName == "dog") { 
		std::cout << "A dog has 4 legs.\n"; 
		return; }
	if (animalName == "duck") { 
		std::cout << "A duck has 2 legs.\n"; 
		return; }
	else { 
		std::cout << "Unknown animal, name cannot be identified.\n"; 
		return; }
}

void result_message_chap_13_6_q1() {
	std::cout << "Let's find out how many legs some animals have.\n";
	while (true) {
		std::cout << "Enter the name of animal (pig, chicken, goat, cat, dog, duck) or '0' to quit: \n";
		std::string animalName{};
		std::cin>>animalName;
		if (animalName == "0") {
			std::cout << "C'Yaa\n";
			return;
		}
		std::optional<Animal> animal{ getAnimalFromString(animalName) };
		printNumberOfLegs(getAnimalName(*animal));
	}
}