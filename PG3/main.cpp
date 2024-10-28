#include <stdio.h>
#include <Windows.h>
#include "Automobile.h"
#include "Motorcycle.h"

int main() {
	Vehicle* vehicle[3];

	// 生成
	vehicle[0] = new Automobile("automobile1");
	vehicle[1] = new Motorcycle("motorcycle");
	vehicle[2] = new Automobile("automobile2");

	for(int i = 0; i < 3; i++){
		vehicle[i]->GetNumWheels();
	}

	for (int i = 0; i < 3; i++) {
		delete vehicle[i];
	}

	return 0;
}