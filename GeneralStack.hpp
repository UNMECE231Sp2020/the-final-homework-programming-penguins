#include <iostream>
#include "GeneralList.hpp"

template <class T>
class Stack {
	private:
		List<T> _data;
		size_t _size;
		
	public:
		//Default constructor
		Stack(){
			_size = 0;
		}
		
		//Default copy constructor
		Stack(const Stack &stack) {
			//_data = 
			_size = stack.size();
		}

		//Getters
		T top() const {
			return data.front();
		}

		size_t size() const {
			return _size;
		}

		//Adding data to the data structure
		void push(T value) {
			_data.push_front(value);
			_size = _data.size();
		}

		//Removing data from the data structure
		void pop() {
			_data.pop_front();
			_size = _data.size();
		}
		bool search(T value) {
			return _data.search(value);
		}


		bool empty() const {
			return_data.empty();
		}

		void print(){
			_data.print();
		}

		//This overloaded operator is empty, please implement
		Stack<T> operator=(const Stack<T> &stack) {
			_size = stack.size();	
			//_data = stack;
			reurn this;
		}

		template <class S>
		friend std::ostream &operator<<(std::ostream &out, const Stack<S> &stack);
		template <class S>
		friend bool operator==(const Stack<S> &left_side, const Stack<S> &right_side);
		template <class S>
		friend bool operator!=(const Stack<S> &left_side, const Stack<S> &right_side);

};
