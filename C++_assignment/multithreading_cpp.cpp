#include <iostream>
#include <thread>
#include <mutex>

using namespace std;
// Two mutexes
mutex mtx1;
mutex mtx2;
// Function for thread 1
void thread1() {
        cout << "Thread 1: Locking mtx1\n";
        mtx1.lock();  // Lock mtx1
        cout << "Thread 1: Locked mtx1\n";
        // Thread 1 tries to lock mtx2, but Thread 2 already holds it.
        cout << "Thread 1: Locking mtx2\n";
        mtx2.lock();  // Try to lock mtx2 (which is locked by Thread 2)
        cout << "Thread 1: Locked mtx2\n";
        mtx2.unlock();
        mtx1.unlock();
}

// Function for thread 2
void thread2() {
        cout << "Thread 2: Locking mtx2\n";
        mtx2.lock();  // Lock mtx2
        cout << "Thread 2: Locked mtx2\n";
        // Thread 2 tries to lock mtx1, but Thread 1 already holds it.
        cout << "Thread 2: Locking mtx1\n";
        mtx1.lock();  // Try to lock mtx1 (which is locked by Thread 1)
        cout << "Thread 2: Locked mtx1\n";
        mtx1.unlock();
        mtx2.unlock();
}

int main() {
        thread t1(thread1);
        thread t2(thread2);
        t1.join();
        t2.join();
        return 0;
}

