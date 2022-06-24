#include <iostream>
using namespace std;
  
template <typename T>
class Array {
private:
    T* ptr;
    int size;
  
public:
    Array(T arr[], int s);
    void print();
};
  
template <typename T>
Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}
  
template <typename T>
void Array<T>::print()
{
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
}
  
int main()
{
	int i=0,arr[20]
    int arr[20] = {4,5,2,9,'a','v','c','p',4.3,5.5,2.0,2.9 };
    Array<int> a(arr, 20);
    a.print();
    int max=arr[20];
    for(i=0;i<20;i++)
    	if{arr[i]>max}
    	max=arr[20];
    	return max;
    	cout<<"LAREGST VALUE"<<max<<endl;
	}
    return 0;
}
