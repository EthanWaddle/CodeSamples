//make your own vector class

/*
myVector


needs to be able to handle ints, doubles, and it needs to have .at, .push, and .pop

*/

template <class T>
class myVector
{

 public:
 
 myVector<T>()
 {

	size=2;
	vector= new T[size];
	head=0;
	tail=0;
  }
 

 ~myVector()
 {
  delete [] vector;
  }
  

 void push(T val)
 {
  
 if(tail==size)
	Expand();

 vector[tail]=val;
 tail++;
  }

 T pop()
 {
 T x= vector[head];
 head++;
 return x;

  }


 void Expand(){
 size*=2;
 T* temp= new T[size];
	for(int i=0; i< tail-head; i++)
	{
	 temp[i]=vector[i+head];
		}

	tail-=head;
	head=0;

 delete [] vector;
 vector=temp;
 }

 private:
 int head;
 T* vector;
 int tail;
 int size;
 };







	
	
	

