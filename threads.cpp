#include <iostream>
#include <thread>
#include <string>

using namespace std;

void foo (int x){
	int i = 0;
	for (i=0; i<x; i++){
		cout << "This is thread 1. \n";
	}
}

void bar (int x){
	int i = 0;
	for (i=0; i<x; i++){
		cout << "This is thread 2. \n";
	}
}

void lab (int x){
	int i = 0;
	for (i=0; i<x; i++){
		cout << "This is thread 3. \n";
	}
}

void kaba (int x){
	int i = 0;
	for (i=0; i<x; i++){
		cout << "This is thread 5. \n";
	}
}

int main(){
	
	int i = 0;
	thread th1 (foo, 3);
	thread th2 (bar, 3);
	thread th3 (lab, 3);
	thread th4 (kaba, 3);
	
	for(i = 0 ; i < 5; i++){
		cout << "This is from main. \n";
	}
	
	th1.join();
	th2.join();
	th3.join();
	th4.join();
	return 0;
}
