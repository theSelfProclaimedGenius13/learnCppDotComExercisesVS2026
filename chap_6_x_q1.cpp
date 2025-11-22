#include<iostream>
#include<string>

std::string get_quantity_phrase_chap_6_x_q1(const int q) {
    std::string pharse{ (q < 0) ? "Negative" : (q==0)?"No":(q==1)?"A Single":(q==2)?"A Couple Of":(q==3)?"A Few":"Many"};
    return pharse;
}
std::string get_apples_pluralized_chap_6_x_q1(const int quantity) {
	std::string apples{ (quantity == 1) ? "apple" : "apples" };
	return apples;
}

void result_message_chap_6_x_q1()
{
    constexpr int maryApples{ 3 };
    std::cout << "Mary has " << get_quantity_phrase_chap_6_x_q1(maryApples) << ' ' << get_apples_pluralized_chap_6_x_q1(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << get_quantity_phrase_chap_6_x_q1(numApples) << ' ' << get_apples_pluralized_chap_6_x_q1(numApples) << ".\n";

}