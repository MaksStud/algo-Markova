#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include"Algorithm_Markova.h"
#include"doctest.h"

/*
int main() {
	Algorithm_Markova a;
	cout << a.Transform("Lviv") << endl;
	cout << endl;
	cout << a.Transform("Hello") << endl;
	cout << endl;
	cout << a.Transform('W') << endl;
	cout << endl;
}
*/

TEST_CASE("String test #1") {
	Algorithm_Markova a;
	CHECK(a.Transform("Lviv") == "Olnl");
}

TEST_CASE("String test #2") {
	Algorithm_Markova a;
	CHECK(a.Transform("Hello") == "Jkoos");
}

TEST_CASE("char test #1") {
	Algorithm_Markova a;
	CHECK(a.Transform("l") == "o");
}

TEST_CASE("String test #2") {
	Algorithm_Markova a;
	CHECK(a.Transform("O") == "S");
}