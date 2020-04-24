#include <iostream>
//Do not include GeneralList.hpp because 
//	GeneralStack.hpp already includes it
/*#include "GeneralList.hpp"*/

template <class Q>
class Queue {
	private:
		List<Q> _data;
		size_t _size;
	public:
		//Default constructor
		Queue(){
			_data._size = 0;
			_data._front = nullptr;
			_data.back = nullptr;
		}
		//Copy constructor
		Queue(const Queue &q);
			_data._size = 0;
			_data._front = nullptr;
			_data.back = nullptr;
		//Getters
		size_t size() const{
			return _size;
		}
		Q front() const{
			return _data.front();
		}		
		Q back() const{
			return _data.back();
		}
		//Push to queue
		void enqueue(Q value);
		
		//Pop from queue
		void dequeue();
		
		void print();
		
		bool search(Q value);
		
		bool empty();
		
		Queue<Q> operator=(const Queue<Q> q) {
			_data = q._data;
			_size = _data.size();
		}

		template <class U>
		friend std::ostream &operator<<(std::ostream &out, 
				const Queue<U> &q);

		template <class U>
		friend bool operator==(const Queue<U> &left_queue, 
				const Queue<U> &right_queue);

		template <class U>
		friend bool operator!=(const Queue<U> &left_queue, 
				const Queue<U> &right_queue);
};
