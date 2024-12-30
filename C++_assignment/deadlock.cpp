#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

//Declaring two mutexes
mutex mutex1;
mutex mutex2;

// Function for thread 1
void thread1(){
	// Manually lock mutex1
	mutex1.lock();
	cout<<"Thread 1 acquired mutex1"<<endl;
	//Simulate sleep
	this_thread::sleep_for(chrono::milliseconds(100));
	//Manually lock mutex2
	mutex2.lock();
	cout << "Thread 1 acquired mutex2" << endl;
	// Manually unlock mutex
	mutex2.unlock();
	mutex1.unlock(); 
}
// Function for thread 2
void thread2() {
	//Manually lock mutex2
	mutex2.lock();
	cout<<"Thread 2 acquired mutex2"<<endl;
	//Simulate sleep
	this_thread::sleep_for(chrono::milliseconds(100));
	// Manually lock mutex1
	mutex1.lock();
	cout<<"Thread 2 acquired mutex1"<<endl;
	// Manually unlock
	mutex1.unlock();
	mutex2.unlock();
}

int main() {
	thread t1(thread1);
	thread t2(thread2);
	t1.join();
	t2.join();
	return 0;
}

