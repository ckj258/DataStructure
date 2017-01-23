
#include <iostream>
#include "Delegate.h"
using namespace std;
class ClassA
{
public:
	static int staticFuncInt(int a)
	{
		std::cout << "call staticFuncInt "<< a << std::endl;
		return 123;
	}

	static void staticFuncVoid(int a)
	{
		std::cout << "call staticFuncVoid " << a << std::endl;
	}

	void FuncVoid(int a)
	{
		std::cout << "call FuncVoid " << a << std::endl;
	}
};

void func(int a)
{
	std::cout << "call func" << a << std::endl;
}


int main()
{
	// 创建 返回值为void  参数一个int的委托
	Delegate<void(int)> delegater;

	// 使用 += 增加的委托需要移除时必须使用 -=
	// 普通的函数 类的静态函数 类的成员函数 与没有捕获参数的lambda表达式都可以使用+=

	// 普通的函数增加委托
	delegater += func;
	// 普通的函数移除委托
	delegater -= func;

	// 类额静态函数增加委托
	delegater += ClassA::staticFuncVoid;
	// 类额静态函数移除委托
	delegater -= ClassA::staticFuncVoid;


	// 成员函数需要使用make_delegater宏 直接使用std::pair也是一样的
	// 需要注意 这里要绑定指针
	ClassA* pA = new ClassA();

	// 类额成员函数增加委托
	delegater += make_delegater(ClassA::FuncVoid, pA);
	// 类额成员函数移除委托
	delegater -= make_delegater(ClassA::FuncVoid, pA);

	// 错误示范 由于绑定的指针不同 移除失败
	//delegater += make_delegater(ClassA::FuncVoid, new ClassA());
	//delegater -= make_delegater(ClassA::FuncVoid, new ClassA());

	// 创建一个lambda表达式
	auto lambdaFunc = [](int a){
		std::cout << "call lambdaFunc " << a << std::endl;
	}; 
	
	delegater += lambdaFunc;
	delegater -= lambdaFunc;

	// 错误示范 虽然两个lambda表达式看起来是一样的 但是返回值是不同的 这样是无法移除的
	//delegater += [](int){};
	//delegater -= [](int){};

	// 如果还想加入 std::function  或者 仿函数 或者 捕获了参数的lambda 可以使用connect方法
	// 当然上面那些例子也是一样的
	int b = 100;
	auto connection = delegater.connect([b](int a){
		std::cout << "call bind lambdaFunc " << a << b << std::endl;
	});

	// 如果想退出委托可使用 返回值 connection 的disConnect 方法
	connection.disConnect();
	// 或者通过delegater 的disConnect方法来移除
	// 当然只能移除一次 再次移除无效了
	delegater.disConnect(connection);

	// 调用前应该使用if来判断是否存在有效的委托
	// 直接将delegater作为参数就行了
	if (delegater)
	{
		// 调用直接使用对象加括号 如果有参数填入对应的参数
		// 调用顺序和加入顺序一样
		// 当有返回值时候,会返回最后一个调用的返回值
		delegater(2);
	}
}