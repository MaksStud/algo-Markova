#pragma once
#include<iostream>
#include <unordered_map>
#include<string>
#include<fstream>


using namespace std;

class Algorithm_Markova
{
public:

    string Transform(string w) {
        unordered_map<char, char> mapping;
        for (int i = 0; i < 52; i++) {
            mapping[matrix[i][0]] = matrix[i][1];
        }

        for (int j = 0; j < w.size(); j++) {
            if (mapping.count(w[j])) {
                w[j] = mapping[w[j]];
            }
        }
        return w;
    }

    char Transform(char w) {
        unordered_map<char, char> mapping;
        for (int i = 0; i < 52; i++) {
            mapping[matrix[i][0]] = matrix[i][1];
        }

        return mapping[w];

    }

	Algorithm_Markova() {
		this->world = "";
	}

	Algorithm_Markova(string w) {
		this->world = w;
	}

private:

    string world;
    char matrix[52][2] = { {'a', 'f'},
                       {'b', 'h'},
                       {'c', 'q'},
                       {'d', 'w'},
                       {'e', 'k'},
                       {'f', 'z'},
                       {'g', 'x'},
                       {'h', 'j'},
                       {'i', 'n'},
                       {'j', 'p'},
                       {'k', 'u'},
                       {'l', 'o'},
                       {'m', 't'},
                       {'n', 'y'},
                       {'o', 's'},
                       {'p', 'r'},
                       {'q', 'v'},
                       {'r', 'g'},
                       {'s', 'b'},
                       {'t', 'i'},
                       {'u', 'm'},
                       {'v', 'l'},
                       {'w', 'd'},
                       {'x', 'e'},
                       {'y', 'a'},
                       {'z', 'c'},
                       {'A', 'F'},
                       {'B', 'H'},
                       {'C', 'Q'},
                       {'D', 'W'},
                       {'E', 'K'},
                       {'F', 'Z'},
                       {'G', 'X'},
                       {'H', 'J'},
                       {'I', 'N'},
                       {'J', 'P'},
                       {'K', 'U'},
                       {'L', 'O'},
                       {'M', 'T'},
                       {'N', 'Y'},
                       {'O', 'S'},
                       {'P', 'R'},
                       {'Q', 'V'},
                       {'R', 'G'},
                       {'S', 'B'},
                       {'T', 'I'},
                       {'U', 'M'},
                       {'V', 'L'},
                       {'W', 'D'},
                       {'X', 'E'},
                       {'Y', 'A'},
                       {'Z', 'C'} };



};

