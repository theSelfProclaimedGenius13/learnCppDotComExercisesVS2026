#include<iostream>
#include "chap_13_10_q1.h"
#include <string>
void print_ads_users_revenue_chap_13_10_q1(const AdsUsersRevenue& aUr) {
	std::cout << "Ads Watched: " << aUr.adsWatched << "\n";
	std::cout << "Percentage of Ads Clicked By Users: " << aUr.percentageOfAdsClickedByUsers << "\n";
	std::cout << "Average Earnings Per Ad Click: " << aUr.avgEarningsPerAdClick << "\n";
	std::cout << "Money Made Today: " << (aUr.adsWatched * aUr.avgEarningsPerAdClick * aUr.percentageOfAdsClickedByUsers) << "\n";
}

const AdsUsersRevenue get_ads_users_revenue_chap_13_10_q1(){
	AdsUsersRevenue aUr;
	std::cout << "Enter the number of ads watched: \n";
	std::cin >> aUr.adsWatched;
	std::cout << "Enter the percentage of ads clicked by users: \n";
	std::cin >> aUr.percentageOfAdsClickedByUsers;
	std::cout << "Enter the average earnings per ad click: \n";
	std::cin >> aUr.avgEarningsPerAdClick;
	return aUr;
}

void result_message_chap_13_10_q1() {
	while (true) {
		std::cout << "Enter 0 to exit or any other character (or leave blank) to continue: \n";
		std::string choice{};
		std::getline(std::cin, choice);
		if (choice == "0") {
			return;
		}
		print_ads_users_revenue_chap_13_10_q1(get_ads_users_revenue_chap_13_10_q1());
	}
}