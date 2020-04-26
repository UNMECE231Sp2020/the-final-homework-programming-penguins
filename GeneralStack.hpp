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
			_data();
			_size = _data.size();
		}
		
		//Default copy constructor
		Stack(const Stack &stack) {
			//TODO: Why not access stack's _data attribute?
			_data = stack._data;
			_size = stack.size();
		}

		//Getters
		T top() const {
			return _data.front();
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
			return _data.empty();
		}

		void print(){
			_data.print();
		}

		//This overloaded operator is empty, please implement
		Stack<T> operator=(const Stack<T> &stack) {
			_size = stack.size();	
			//TODO: why not copy _data from stack to the interal 
			// _data like you did with _size?
			_data = stack._data;
			return this;
		}

		template <class S> friend std::ostream &operator<<(std::ostream &out, const Stack<S> &stack);
		template <class S> friend bool operator==(const Stack<S> &left_side, const Stack<S> &right_side);
		template <class S> friend bool operator!=(const Stack<S> &left_side, const Stack<S> &right_side);

};

template <class S> std::ostream &operator<<(std::ostream &out, const Stack<S> &stack) {
	out << stack._data;
	return out;
}
template <class S> bool operator==(const Stack<S> &left_side, const Stack<S> &right_side) {
	if(left_side.size() == right_side.size() && left_side._data == right_side._data) {
		return true;
	}else{
		return false;
	}
}
template <class S> bool operator!=(const Stack<S> &left_side, const Stack<S> &right_side) {
	if(left_side.size() == right_side.size() && left_side._data == right_side._data) {
		return false;
	}else{
		return true;
	}
}
