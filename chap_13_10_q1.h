#pragma once

struct AdsUsersRevenue {
	int adsWatched{ 0 };
	double percentageOfAdsClickedByUsers{ 0.0 };
	double avgEarningsPerAdClick{ 0.0 };
};
const AdsUsersRevenue get_ads_users_revenue_chap_13_10_q1();
void result_message_chap_13_10_q1();
void print_ads_users_revenue_chap_13_10_q1(const  AdsUsersRevenue& aUr);