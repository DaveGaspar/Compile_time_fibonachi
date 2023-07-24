#include <iostream>

template<int N>
class Fibonachi{
	public:
		static const int fibo = (Fibonachi<N-2>::fibo + Fibonachi<N-1>::fibo);
};

template<>
class Fibonachi<0>{
	public:
		static const int fibo = 0;
};

template<>
class Fibonachi<1>{
	public:
		static const int fibo = 1;
};

int main(){
	std::cout << Fibonachi<8>::fibo << std::endl;	
	return 0;
}