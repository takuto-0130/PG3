#pragma once
#include <type_traits>

template<typename T1, typename T2>

class Comparison
{
public:
	Comparison(T1 t1, T2 t2) : t1_(t1), t2_(t2) {};

	auto Min() -> typename std::common_type<T1, T2>::type {
		using commonType = typename std::common_type<T1, T2>::type;
		return (static_cast<commonType>(t1_) < static_cast<commonType>(t2_))
			? static_cast<commonType>(t1_) : static_cast<commonType>(t2_);
	}

private:
	T1 t1_;
	T2 t2_;
};

