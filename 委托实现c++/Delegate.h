
/* ==============================================================================
 * 功能描述：delegate by c++  
 * 创 建 者：ckj
 * 创建日期：2016年12月16日14:39:57
 * ==============================================================================*/

#pragma once
#include <functional>
#include <map>
#include <vector>
#include <assert.h>

// 绑定器 根据num的数量特化不同的选择 最多支持20个参数
template<int, typename Func, typename Obj, typename Ret, typename... Args> struct Binder{};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<0, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func,obj);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<1, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<2, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<3, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<4, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<5, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<6, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<7, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6, std::placeholders::_7);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<8, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6, std::placeholders::_7, std::placeholders::_8);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<9, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6, std::placeholders::_7, std::placeholders::_8, std::placeholders::_9);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<10, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6, std::placeholders::_7, std::placeholders::_8, std::placeholders::_9,
			std::placeholders::_10);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<11, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6, std::placeholders::_7, std::placeholders::_8, std::placeholders::_9,
			std::placeholders::_10, std::placeholders::_11);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<12, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6, std::placeholders::_7, std::placeholders::_8, std::placeholders::_9,
			std::placeholders::_10, std::placeholders::_11, std::placeholders::_12);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<13, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6, std::placeholders::_7, std::placeholders::_8, std::placeholders::_9,
			std::placeholders::_10, std::placeholders::_11, std::placeholders::_12, std::placeholders::_13);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<14, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6, std::placeholders::_7, std::placeholders::_8, std::placeholders::_9,
			std::placeholders::_10, std::placeholders::_11, std::placeholders::_12, std::placeholders::_13, std::placeholders::_14);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<15, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6, std::placeholders::_7, std::placeholders::_8, std::placeholders::_9,
			std::placeholders::_10, std::placeholders::_11, std::placeholders::_12, std::placeholders::_13, std::placeholders::_14, 
			std::placeholders::_15);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<16, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6, std::placeholders::_7, std::placeholders::_8, std::placeholders::_9,
			std::placeholders::_10, std::placeholders::_11, std::placeholders::_12, std::placeholders::_13, std::placeholders::_14,
			std::placeholders::_15, std::placeholders::_16);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<17, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6, std::placeholders::_7, std::placeholders::_8, std::placeholders::_9,
			std::placeholders::_10, std::placeholders::_11, std::placeholders::_12, std::placeholders::_13, std::placeholders::_14,
			std::placeholders::_15, std::placeholders::_16, std::placeholders::_17);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<18, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6, std::placeholders::_7, std::placeholders::_8, std::placeholders::_9,
			std::placeholders::_10, std::placeholders::_11, std::placeholders::_12, std::placeholders::_13, std::placeholders::_14,
			std::placeholders::_15, std::placeholders::_16, std::placeholders::_17, std::placeholders::_18);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<19, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6, std::placeholders::_7, std::placeholders::_8, std::placeholders::_9,
			std::placeholders::_10, std::placeholders::_11, std::placeholders::_12, std::placeholders::_13, std::placeholders::_14,
			std::placeholders::_15, std::placeholders::_16, std::placeholders::_17, std::placeholders::_18, std::placeholders::_19);
	}
};

template<typename Func, typename Obj, typename Ret, typename... Args>
struct Binder<20, Func, Obj, Ret, Args...>
{
	static std::function<Ret(Args...)> doit(Func func, Obj obj)
	{
		return std::bind(func, obj, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4,
			std::placeholders::_5, std::placeholders::_6, std::placeholders::_7, std::placeholders::_8, std::placeholders::_9,
			std::placeholders::_10, std::placeholders::_11, std::placeholders::_12, std::placeholders::_13, std::placeholders::_14,
			std::placeholders::_15, std::placeholders::_16, std::placeholders::_17, std::placeholders::_18, std::placeholders::_19
			, std::placeholders::_20);
	}
};


template<typename T> class Delegate { };
template<typename T> class Connection { };
// 连接器 用来取消委托
template<typename Ret, typename... Args>
class Connection<Ret(Args...)>
{
public:
	typedef Connection<Ret(Args...)> self_type;
	Connection(self_type&& rValue)
	{
		_func = rValue._func;
		_delegate = rValue._delegate;
		rValue._func = nullptr;
		rValue._delegate = nullptr;
	}

	self_type& operator = (self_type&& rValue)
	{
		if (this != &rValue)
		{
			_func = rValue._func;
			_delegate = rValue._delegate;
			rValue._func = nullptr;
			rValue._delegate = nullptr;
		}
		return *this;
	}

	void disConnect()
	{
		if (_delegate)
		{
			_delegate->disConnect(*this);
		}
	}
private:
	Connection(){}
	// 禁用拷贝构造函数
	Connection(const self_type&);
	// 禁用赋值
	self_type& operator =(const self_type&);

	friend Delegate<Ret(Args...)>;
	std::function<Ret(Args...)>*		_func;
	Delegate<Ret(Args...)>*				_delegate;
};

template<typename Ret, typename... Args>
class Delegate<Ret(Args...)>
{
	// 得到参数的个数
	static const int ArgsSize = sizeof...(Args);
public:
	typedef Delegate<Ret(Args...)> self_type;
	// 普通函数 或类的静态函数类型
	typedef Ret(*static_func)(Args...);
	typedef std::function<Ret(Args...)> function_type;
	typedef std::vector<function_type*> container_type;

	Delegate(){};
	Delegate(self_type&& rValue) 
	:_funcContainer(std::move(rValue._funcContainer))
	, _waitDeleteFunc(std::move(rValue._waitDeleteFunc))
	, _staticFuncMap(std::move(rValue._staticFuncMap))
	, _memberFuncMap(std::move(rValue._memberFuncMap))
	{
		static_cast(ArgsSize <= 20, "parameters num greater than 20!");
	}

	self_type& operator = (self_type&& rValue)
	{
		if (this != &rValue)
		{
			// 调用转移赋值函数
			_funcContainer = std::move(rValue._funcContainer);
			_waitDeleteFunc = std::move(rValue._waitDeleteFunc);
			_staticFuncMap = std::move(rValue._staticFuncMap);
			_memberFuncMap = std::move(rValue._memberFuncMap);
		}
		return *this;
	}

	~Delegate()
	{
		for (auto func : _funcContainer)
		{
			delete func;
		}
	};

	// 重载 (bool) 返回是否为空
	operator bool()
	{
		return _funcContainer.size() >_waitDeleteFunc.size();
	}

	// 加入委托
	self_type& operator += (static_func func)
	{
		auto& pFunc = _staticFuncMap[func];
		if (pFunc == nullptr)
		{
			pFunc = new function_type;
			*pFunc = func;
			_funcContainer.push_back(pFunc);
		}
		return *this;
	}

	// 移除委托
	self_type& operator -= (static_func func)
	{
		auto& pFunc = _staticFuncMap[func];
		if (pFunc != nullptr)
		{
			_waitDeleteFunc.push_back(pFunc);
			pFunc = nullptr;
		}
		return *this;
	}

	template<typename Func, typename Obj>
	self_type& operator += (const std::pair<Func, Obj>& func)
	{
		static_assert(std::is_member_function_pointer<Func>::value, "Func must is member function pointer");
		static_assert(std::is_object<Obj>::value
			&& !std::is_arithmetic<Obj>::value
			&& !std::is_class<Obj>::value
			&& !std::is_function<Obj>::value, "Obj must is object pointer");
		union{ void* value; Func func; }trans;
		trans.func = func.first;
		auto& pFunc = _memberFuncMap[trans.value][func.second];
		if (pFunc == nullptr)
		{
			pFunc = new function_type;
			// 利用绑定器来构建function
			*pFunc = Binder<ArgsSize, Func, Obj, Ret, Args...>::doit(func.first, func.second);

			_funcContainer.push_back(pFunc);
			_memberFuncMap[trans.value][func.second] = pFunc;
		}
		return *this;
	}

	template<typename Func, typename Obj>
	self_type& operator -= (const std::pair<Func, Obj>& func)
	{
		static_assert(std::is_member_function_pointer<Func>::value, "Func must is member function pointer");
		static_assert(std::is_object<Obj>::value
			&& !std::is_arithmetic<Obj>::value
			&& !std::is_class<Obj>::value
			&& !std::is_function<Obj>::value, "Obj must is object pointer");
		union{ void* value; Func func; }trans;
		trans.func = func.first;
		auto& pFunc = _memberFuncMap[trans.value][func.second];
		if (pFunc != nullptr)
		{
			_waitDeleteFunc.push_back(pFunc);
			pFunc = nullptr;
		}
		return *this;
	}

	// 增加委托
	Connection<Ret(Args...)> connect(const function_type& func)
	{		
		auto pFunc = new function_type;
		*pFunc = std::move(func);
		_funcContainer.push_back(pFunc);
		Connection<Ret(Args...)> connection;
		connection._delegate = this;
		connection._func = pFunc;
		return connection;
	}

	void disConnect(Connection<Ret(Args...)>& connection)
	{
		if (connection._delegate == this && connection._func)
		{
			_waitDeleteFunc.push_back(connection._func);
			connection._delegate = nullptr;
			connection._func = nullptr;
		}
	}
	
	Ret operator ()(Args... args)
	{ 
		for (auto func : _waitDeleteFunc)
		{
			auto it = std::find(_funcContainer.begin(), _funcContainer.end(), func);
			_funcContainer.erase(it);
			delete func;
		}
		_waitDeleteFunc.clear();

		int delegate_size = _funcContainer.size();
		assert(delegate_size != 0);
		int penult = delegate_size - 1;

		for (int i = 0; i < penult; ++i)
		{
			(*_funcContainer[i])(args...);
		}
		return (*_funcContainer[penult])(args...);
	}
private:
	// 禁用拷贝构造函数
	Delegate(const self_type&);
	// 禁用赋值
	self_type& operator =(const self_type&);

	container_type _funcContainer;
	container_type _waitDeleteFunc;
	std::map<static_func, function_type*> _staticFuncMap;
	std::map<void*, std::map<void*, function_type*>> _memberFuncMap;
};

#define make_delegater(func,obj)\
std::make_pair(&func, obj)

#define this_delegater(func)\
std::make_pair(&func, this)