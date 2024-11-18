#include <stdio.h>
#include <list>
using namespace std;

void DrawStationName(list<const char*> stationNames);

void AddStationName(list<const char*>& stationNames, const char* beforeStation, const char* addStation);

int main() {
	list<const char*> stationNames = { "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno",
		"Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro",
		"Takadanobaba", "Shin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu",
		"Meguro", "Gotanda", "Osaki", "Shinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};
	printf_s("山手線(1970年)\n");
	DrawStationName(stationNames);

	AddStationName(stationNames, "Tabata", "Nishi-Nippori");
	printf_s("山手線(2019年)\n");
	DrawStationName(stationNames);
	
	AddStationName(stationNames, "Tamachi", "Takanawa-Gateway");
	printf_s("山手線(2022年)\n");
	DrawStationName(stationNames);

	return 0;
}

void DrawStationName(list<const char*> stationNames) {
	int i = 0;
	for (const char* name : stationNames) {
		++i;
		if (name != stationNames.back()) {
			printf_s("%d.%s, ", i, name);
		}
		else {
			printf_s("%d.%s", i, name);
		}
		if (i % 6 == 0) {
			printf_s("\n");
		}
	}
	printf_s("\n\n");
}

void AddStationName(list<const char*>& stationNames, const char* beforeStation, const char* addStation) {
	for (list<const char*>::iterator itr = stationNames.begin(); itr != stationNames.end(); ++itr) {
		if (*itr == beforeStation) {
			itr = stationNames.insert(itr, addStation);
			++itr;
		}
	}
}