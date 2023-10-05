#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include "nlohmann/json.hpp"

using namespace std;

int main(){
	ofstream file("C:\\Users\\Dorim\\projects\\module32\\tusk1\\record.json");
	nlohmann::json dict = 
	{
		{"name","JJK"},{"Country","Japan"},{"date","02.10.2020"},{"studio","MAPPA"},
		{"authorScenario","GEGE AKUTAMI"},{"reghiser","PAK-SON-HI"},{"producer","MAKOTO KIMURA"},{"actor1","YUITI NAKAMURA"},
		{"actor2","YUMA UTIDO"},{"actor3","ASAMI SETO"}
	};
	file << dict;

	file.close();
}


