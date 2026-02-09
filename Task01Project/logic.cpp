#include "logic.h"

string count_likes(int day, int like) {
	if (day <= 0 || like < 0) {
		return "Error.";
	}

	string s = "day 1: " + to_string(like) + " likes";

	for (int i = 1; i <= day; i++) {
		s += "\nday " + to_string(i); ": " + to_string(i * like) + "  likes";
	}

	return "";  
}