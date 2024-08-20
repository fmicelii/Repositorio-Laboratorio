#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

std::vector <std::string> words {" ", "lover", "music", "tiger", "donut", "prince", "story", "novel", "faith", "earth", "baker", "model", "sport", "sweet", "youth", "write", "women", "drama", "heart", "sound" };
int decide;
std::string cw;
int tries = 6;
std::string guess;
int l;
int r;
int no;
int nt;
int as;
int rlcp = 0;
int an;
int u;

void wn();
void g();
void fl();
void co();
void ct();
void c();
void a();
void oot();

void wn() {

	decide = rand() % words.size();
	cw = words[decide];

}

void g() {

	std::cout << "What is your guess? This is just like Wordle, 5 letters | 6 tries.\n";
	std::cin >> guess;

}

void fl() {

	for (l = 5; l > guess.size() || l < guess.size(); r++) {
	
		std::cout << "Sorry, the guess you wrote didn't have 5 letters. Please try again.\n";
		std::cin >> guess;
	
	}
	
	tries--;

}

void co() {

	rlcp = 0;
	for (l = 0; l < 5; l++) {
	
		//std::cout  << "\n";
		std::cout << rlcp << "\n";
	
		if (cw[no] == guess[no]) {
		
			as = no + 1;
			std::cout << "The letter you put in the " << as << " placement is one of the letters and is in the right place.\n";
			rlcp++;
		
		}
		
		no++;
	
	}
	
	no = 0;

}

void ct() {

	for (r = 5; r > 0; r--) {
		
		std::cout << " \n";
		
		for (l = 5; l > 0; l--) {
		
			if (cw[no] == guess[nt]) {
			
				as = nt + 1;
				std::cout << "The letter put in the " << as << " placement is one of the letters, but isn't in the right spot.\n";
				nt++;
			
			}
			
		no++;
		
		}
	
	}
	
	std::cout << "If one of the letters you wrote had nothing said about it, then it is not it the word.\n";
	no = 0;
	nt = 0;

}

void c() {

	if (rlcp == 5) {
	
		std::cout << "Yay, you figured the word out! \n\nWould you like to play again? 1 means yes and 2 means no.\n";
		std::cin >> an;
		
		if (an = 1) {
		
			tries = 0;
			a();
		
		}
	
	}

}

void oot() {

	if (tries == 0) {
	
		std::cout  << "Oh no, you ran out of tries. Would you like to play again? 1 means yes and 2 means no.\n";
		std::cin >> an;
		
		if (an == 1) {
		
			tries = 0;
			a();
		
		}
	
	}
	else {
	
	a();
	
	}

}

void a() {

	no = 0;
	nt = 0;
	
	wn();
	g();
	fl();
	co();
	c();
	ct();
	oot();

}

int main() {

	a();

}