#include <iostream>
using namespace std;

//BUBBLESORT
void* _bubblesort_(void * _array_, void (*_puntero_) (void *,int _k), int _tam_){
	for (int i = 0; i < _tam_ ; i ++)
		for(int k = 0; k < _tam_-1; k++)
			_puntero_(_array_,k);
	return _array_;
}

//FUNCIONES
void  _b_int_ (void * _vector_,int _k){
	int* list = (int*)_vector_;
	int temporal;
	if (*(list+_k) > *(list+_k+1)) {
		temporal = *(list+_k);
		*(list+_k) = *(list+_k+1);
		*(list+_k+1) = temporal;
	}
}
void  _b_float_ (void * _vector_,int _k){
	float* list = (float*)_vector_;
	float temporal;
	if (*(list+_k) > *(list+_k+1)) {
		temporal = *(list+_k);
		*(list+_k) = *(list+_k+1);
		*(list+_k+1) = temporal;
	}
}
void  _b_double_ (void * _vector_,int _k){
	double* list = (double*)_vector_;
	double temporal;
	if (*(list+_k) > *(list+_k+1)) {
		temporal = *(list+_k);
		*(list+_k) = *(list+_k+1);
		*(list+_k+1) = temporal;
	}
}
void  _b_char_ (void * _vector_,int _k){
	char* list = (char*)_vector_;
	char temporal;
	if (*(list+_k) > *(list+_k+1)) {
		temporal = *(list+_k);
		*(list+_k) = *(list+_k+1);
		*(list+_k+1) = temporal;
	}
}

//MAIN
int main(){
	int _array_1 [5] = {2,20,7,108,9};
	float _array_2 [5] = {4.2,5.7,9.5,7.1,2.8};
	double _array_3 [5] = {3.4,8.2,2.6,4.5,15.2};
	char _array_4 [6] = {'k','a','r','l','o','s'};
	int* sorted_array_int = (int*)_bubblesort_(_array_1,_b_int_,5);	
	float* sorted_array_float = (float*)_bubblesort_(_array_2,_b_float_,5);
	double* sorted_array_double = (double*)_bubblesort_(_array_3,_b_double_,5);
	char* sorted_array_char = (char*)_bubblesort_(_array_4,_b_char_,6);

	for (int i = 0; i < 5; ++i) {
		cout << *(sorted_array_int+i);
		cout<<endl;
	}
	cout << "--------------"<<endl;

	for (int i = 0; i < 5; ++i) {
		cout << *(sorted_array_float+i) << " ";
	    cout<<endl;
	}
    cout << "--------------"<<endl;

    for (int i = 0; i < 5; ++i) {
		cout << *(sorted_array_double+i) << " ";
	    cout<<endl;
	}
    cout << "--------------"<<endl;


    for (int i = 0; i < 6; ++i) {
		cout << *(sorted_array_char+i) << " ";
	    cout<<endl;
    }
    cout << "--------------"<<endl;

    return 0;
}








