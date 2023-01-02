#include<iostream>
using namespace std;

template <class T> 

class DynamicArray {
private:
int len =0;
int capacity=10;
T arr[];
public: 
DynamicArray() {
    arr = new T[capacity];
}
DynamicArray(int cap) {
    capacity = cap;
    arr = new T[capacity];
}
int size() {
    return len;
}
boolean isEmpty() {
    return len==0;
}
T get(int index) {
    return arr[index];
}
void set(int index, T value) {
    arr[index]=value;
}
void clear() {
    len=0;

    for(int i=0;i<capacity;i++)
        arr[i]=0;
}

};

int main() {

    return 0;
}