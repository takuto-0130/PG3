#include <thread>
#include <stdio.h>
std::atomic<int> currentId(1);

void Thread(int id) {
	while (currentId.load() != id) {

	}
	printf_s("thread %d\n", currentId.load());
	currentId.fetch_add(1);
}

int main() {
	std::thread th1(Thread, 1);
	std::thread th2(Thread, 2);
	std::thread th3(Thread, 3);
	th1.join();
	th2.join();
	th3.join();
	return 0;
}
