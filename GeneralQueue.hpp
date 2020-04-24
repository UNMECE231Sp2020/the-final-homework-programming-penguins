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
			_size = _data.size();
		}
		//Copy constructor
		Queue(const Queue &q){
			_size = q.size();
		}
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
			data.push_front(value);
			_size = _data.size();
		//Pop from queue
		void dequeue();
			data.pop_back();
			_size = _data.size();
		void print(){
			_data.print();
		}
		bool search(Q value){
			return _data.search(value);
		}
		bool empty(){
			return _data.empty();
		}	
		Queue<Q> operator=(const Queue<Q> q) {
			_size = Q.size();
			return this;
		}

		template <class U>
		friend std::ostream &operator<<(std::ostream &out, const Queue<U> &q){
			
		}
		template <class U>
		friend bool operator==(const Queue<U> &left_queue, const Queue<U> &right_queue){
			for(List tempa = left_queue.front, List tempb = right_queue.front; tempa!=nullptr || tempb != nullptr; tempa = tempa->next, tempb = tempb->next) {
				if(tempa.value != tempb.value)
					return false;
			}
			if(Q.size() == _size){
				return false;
			} else {
				return true;
			}

		}
		template <class U>
		friend bool operator!=(const Queue<U> &left_queue, const Queue<U> &right_queue){
			for(List tempa = left_queue.front, List tempb = right_queue.front; tempa!=nullptr || tempb != nullptr; tempa = tempa->next, tempb = tempb->next) {
				if(tempa.value != tempb.value)
					return false;
			}
			if(Q.size() == _size){
				return false;
			} else {
				return true;
			}
		}
};
