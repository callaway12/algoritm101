#ifndef __MAXHEAP_H__
#define __MAXHEAP_H__
#include <iostream>

using namespace std;
template<class T>

class Maxheap {
private:
   void ChangeSize1D(int);
   T* heap;
   int heapSize;
   int capacity;
public:
   Maxheap(int);
   void Push(const T &);
   void Pop();
   bool IsEmpty() { return heapSize == 0; }
   T Top() { return heap[1]; }
   template<class T2> friend ostream &operator << (ostream &, Maxheap<T2> &);
};

template<class T2>

ostream &operator <<(ostream &os, Maxheap<T2> &H)
{
   os << "<Heap contents> ";
   int i;
   for (i = 1; i <= H.heapSize; i++)
      os << i << ":" << H.heap[i] << " ";
   os << endl;
   return os;
}


template<class T>
Maxheap<T>::Maxheap(int _capacity=1) : heapSize(0)
{
   if (_capacity < 1)
      throw " Must be > 0";
   capacity = _capacity;
   heap = new T[capacity + 1];
}


template <class T>
void Maxheap<T>::Push(const T& e) {
   if (heapSize == capacity) {
      ChangeSize1D(2 * capacity + 1);
      capacity *= 2;
   }
   int currentNode = ++heapSize;
   while (currentNode != 1 && heap[currentNode / 2] < e) {
      heap[currentNode] = heap[currentNode / 2];
      currentNode /= 2;
   }
   heap[currentNode] = e;
}

template <class T>
void Maxheap<T>::Pop() {
   if (IsEmpty()) throw "heap is empty. Cannot delete.";
   heap[1].~T();
   T lastE = heap[heapSize--];
   int currentNode = 1;
   int child = 2;
   while (child <= heapSize) {
      if (child < heapSize && heap[child] < heap[child + 1]) child++;
      if (lastE >= heap[child]) break;
      heap[currentNode] = heap[child];
      currentNode = child;
      child *= 2;
   }
   heap[currentNode] = lastE;
}

template <class T>
void Maxheap<T>::ChangeSize1D(int newSize) {
   if (newSize < 0) throw "newSize must be >= 0.";
   T* temp = new T[newSize];
   for (int i = 0; i < capacity + 1; i++) {
      temp[i] = heap[i];
   }
   delete[] heap;
   heap = temp;
}


#endif
