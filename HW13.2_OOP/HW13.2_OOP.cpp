#include <iostream>

namespace Namespace1 //перший прост≥р ≥мен з класамим 1, 2 та 4
{
	class Class_1
	{
	public:
		void show()
		{
			using std::endl;
			using std::cout;
			cout << "÷е Class_1 з Namespace1" << endl;
		}
	};


	class Class_2
	{
	public:
		void show()
		{
			using std::endl;
			using std::cout;
			cout << "÷е Class_2 з Namespace1" << endl;
		}
	};

	class Class_4
	{
	public:
		void show()
		{
			using std::endl;
			using std::cout;
			cout << "÷е Class_4 з Namespace1" << endl;
		}
	};
}

namespace Namespace2 //другий прост≥р ≥мен з класами 4, 3 та 2
{
	class Class_4
	{
	public:
		void show()
		{
			using std::endl;
			using std::cout;
			cout << "÷е Class_4 з Namespace2" << endl;
		}
	};


	class Class_3
	{
	public:
		void show()
		{
			using std::endl;
			using std::cout;
			cout << "÷е Class_3 з Namespace2" << endl;
		}
	};

	class Class_2
	{
	public:
		void show()
		{
			using std::endl;
			using std::cout;
			cout << "÷е Class_2 з Namespace2" << endl;
		}
	};
}

int main()
{

}