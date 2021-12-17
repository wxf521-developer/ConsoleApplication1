// testBoostApplication.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include<boost/chrono/duration.hpp>
#include<boost/chrono/chrono.hpp>
#include<boost/foreach.hpp>
#include<boost/assign.hpp>
#include<boost/circular_buffer.hpp>
#include<boost/algorithm/minmax.hpp>
#include<boost/algorithm/minmax_element.hpp>
#include<boost/algorithm/clamp.hpp>
#include<boost/algorithm/hex.hpp>
#include<boost/math/constants/constants.hpp>
#include<boost/multiprecision/cpp_dec_float.hpp>
#include<boost/integer_traits.hpp>
#include<boost/cstdint.hpp>
#include<boost/integer.hpp>
#include<boost/type_index.hpp>
#include<boost/format.hpp>
#include<boost/rational.hpp>
#include<boost/multiprecision/cpp_int.hpp>
#define BOOST_RATIO_EXTENSIONS
//#include<boost/ratio.hpp>
#include<boost/crc.hpp>
#include<boost/random.hpp>
#include<boost/nondet_random.hpp>
#define BOOST_ERROR_CODE_HEADER_ONLY
#include<boost/system/error_code.hpp>
#include<boost/system/linux_error.hpp>
#include<boost/system/windows_error.hpp>
#include<boost/system/system_error.hpp>
//#include<boost/timer/timer.hpp>
#include<boost/algorithm/string.hpp>
#include<boost/filesystem.hpp>
#include<boost/filesystem/operations.hpp>
#include<boost/filesystem/fstream.hpp>
#include<boost/optional.hpp>
#include<boost/xpressive/xpressive_dynamic.hpp>
#include<boost/progress.hpp>
#include<boost/program_options.hpp>
#include<boost/ref.hpp>
#include<boost/property_tree/ptree.hpp>
#include<boost/property_tree/json_parser.hpp>
#include<boost/date_time.hpp>
#include<boost/bind.hpp>
#include<boost/signals2.hpp>
#include<boost/make_shared.hpp>
#include<boost/atomic.hpp>
#include<boost/memory_order.hpp>
#include<boost/intrusive_ptr.hpp>
#define BOOST_THREAD_VERSION 4
#include<boost/thread.hpp>
#include<boost/thread/lock_factories.hpp>
#include<boost/thread/lockable_adapter.hpp>
#include<boost/thread/lock_concepts.hpp>
#include<boost/thread/thread_guard.hpp>
#include<boost/thread/scoped_thread.hpp>
#include<boost/thread/shared_lock_guard.hpp>
#include<boost/thread/lock_factories.hpp>
#include<boost/atomic.hpp>
#include<boost/thread/lockable_adapter.hpp>
#include<boost/version.hpp>
#include<boost/config.hpp>
#define BOOST_ASIO_DISABLE_STD_CHRONO
#include<boost/asio.hpp>
#include<boost/asio/steady_timer.hpp>
#include<boost/asio/system_timer.hpp>
#include<boost/asio/high_resolution_timer.hpp>
#include<boost/asio/ip/tcp.hpp>
#include<boost/lexical_cast.hpp>
#include<boost/asio/spawn.hpp>
#include<boost/compressed_pair.hpp>
#include<boost/checked_delete.hpp>
#include<boost/utility/addressof.hpp>
#define BOOST_BASE_FROM_MEMBER_MAX_ARITY 2          //将使Base_from_member最多只有3个构造函数,支持最多2个参数
#include<boost/utility/base_from_member.hpp>
#include<boost/polymorphic_cast.hpp>
#include<boost/numeric/conversion/bounds.hpp>
#include<boost/numeric/conversion/cast.hpp>
#include<boost/get_pointer.hpp>
#include<boost/pointer_cast.hpp>
#include<boost/pointee.hpp>
#include<boost/indirect_reference.hpp>
#include<boost/pointer_to_other.hpp>
#include<boost/utility/compare_pointees.hpp>
#include<boost/next_prior.hpp>
#include<boost/iterator/iterator_traits.hpp>
#include<boost/iterator/iterator_facade.hpp>
#include<boost/iterator/iterator_adaptor.hpp>
#include<boost/shared_container_iterator.hpp>
#include<boost/generator_iterator.hpp>
#include<boost/iterator/reverse_iterator.hpp>
#include<boost/iterator/indirect_iterator.hpp>
#include<boost/iterator/counting_iterator.hpp>
#include<boost/iterator/function_input_iterator.hpp>
#include<boost/function_output_iterator.hpp>
#include<boost/iterator/filter_iterator.hpp>
#include<boost/iterator/transform_iterator.hpp>
#include<boost/iterator/permutation_iterator.hpp>
#include<boost/iterator/zip_iterator.hpp>
#include<boost/range.hpp>
#include<boost/range/istream_range.hpp>
#include<boost/range/combine.hpp>
#include<boost/range/any_range.hpp>
#include<boost/range/adaptors.hpp>
#include<boost/functional/hash.hpp>
#include<boost/mem_fn.hpp>
#include<boost/functional/factory.hpp>
#include<boost/functional/value_factory.hpp>
#include<boost/ptr_container/ptr_vector.hpp>
#include<boost/ptr_container/clone_allocator.hpp>
#include<boost/ptr_container/ptr_sequence_adapter.hpp>
#include<boost/ptr_container/ptr_vector.hpp>
#include<boost/ptr_container/ptr_set.hpp>
#include<boost/ptr_container/ptr_unordered_set.hpp>
#include<boost/ptr_container/ptr_map_adapter.hpp>
#include<boost/ptr_container/ptr_map.hpp>
#include<boost/ptr_container/ptr_unordered_map.hpp>
#include<boost/assign/ptr_list_inserter.hpp>
#include<boost/assign/ptr_map_inserter.hpp>
#include<boost/assign/ptr_list_of.hpp>
#include<boost/ptr_container/ptr_deque.hpp>
#include<boost/ptr_container/ptr_list.hpp>
//#include<boost/ptr_container/ptr_container.hpp>
#include<boost/ptr_container/ptr_inserter.hpp>
#include<boost/thread/future.hpp>
#include<boost/intrusive/slist.hpp>
#include<boost/intrusive/detail/generic_hook.hpp>
#include<boost/intrusive/options.hpp>
#include<boost/intrusive/list.hpp>
#include<boost/intrusive/set.hpp>
#include<boost/functional/factory.hpp>
#include<exception>
#include<stdio.h>
//#include<boost/signals2/preprocessed_signal.hpp>
//#include<boost/signals2/optional_last_value.hpp>
//#include<boost/thread/shared_mutex.hpp>
//#include<boost/filesystem.hpp>
/*
#include<boost/polymorphic_cast.hpp>
#include<boost/mpl/vector_c.hpp>
#include<boost/mpl/plus.hpp>
#include<boost/mpl/int.hpp>
#include<boost/mpl/transform.hpp>
#include<boost/mpl/placeholders.hpp>
#include<boost/mpl/lambda.hpp>
#include<boost/mpl/multiplies.hpp>
#include<boost/mpl/apply.hpp>
#include<boost/cstdlib.hpp>
#include<boost/container/vector.hpp>
#include<boost/mpl/bool.hpp>
#include<boost/mpl/find_if.hpp>
#include<boost/mpl/if.hpp>
#include<boost/type_traits/is_scalar.hpp>
#include<boost/type_traits/add_reference.hpp>
#include<boost/type_traits/add_const.hpp>
#include<boost/mpl/identity.hpp>
#include<boost/mpl/eval_if.hpp>
#include<boost/mpl/or.hpp>
#include<boost/type_traits/is_stateless.hpp>
#include<boost/mpl/find.hpp>
#include<boost/mpl/equal.hpp>
#include<boost/mpl/pop_back.hpp>
#include<boost/mpl/vector/vector50.hpp>
#include<boost/mpl/map.hpp>
#include<boost/mpl/iterator_tags.hpp>
#include<boost/mpl/replace.hpp>
#include<boost/mpl/unique.hpp>
#include<boost/mpl/transform_view.hpp>
#include<boost/mpl/zip_view.hpp>
#include<boost/mpl/unpack_args.hpp>
#include<boost/mpl/joint_view.hpp>
#include<boost/mpl/sort.hpp>
#include<boost/mpl/filter_view.hpp>
#include<boost/type_traits/remove_pointer.hpp>
#include<boost/mpl/next.hpp>
#include<boost/mpl/for_each.hpp>
#include<boost/type_traits/is_polymorphic.hpp>
#include<boost/mpl/inherit.hpp>
#include<boost/mpl/inherit_linearly.hpp>
#include<boost/mpl/vector.hpp>
#include<boost/utility/enable_if.hpp>
#include<boost/type_traits/arithmetic_traits.hpp>
#include<boost/iterator/iterator_traits.hpp>
#include<boost/version.hpp>
#include<boost/config.hpp>
#include<boost/timer.hpp>
#include<boost/progress.hpp>
#include<boost/date_time/gregorian/gregorian.hpp>  //处理日期的组件
//#define BOOST_DATE_TIME_POSIX_TIME_STD_CONFIG    //定义纳秒精度
#include<boost/date_time/posix_time/posix_time.hpp>  //处理时间的组件
#include<boost/date_time/local_time/local_time.hpp>
#include<boost/serialization/serialization.hpp>
#include<boost/smart_ptr.hpp>
#include<boost/smart_ptr/make_unique.hpp>
#include<boost/smart_ptr/owner_less.hpp>
#include<boost/enable_shared_from_this.hpp>
#include<boost/smart_ptr/enable_shared_from_raw.hpp>
#include<boost/smart_ptr/intrusive_ref_counter.hpp>
#define BOOST_SYSTEM_NO_DEPRECATED  // workaround link error in spirit
#include<boost/pool/pool.hpp>  //作为int,double等普通类型的内存池
#include<boost/pool/object_pool.hpp>
//#include<boost/thread/thread.hpp>
#define BOOST_POOL_NO_MT
#include<boost/pool/singleton_pool.hpp>
#include<boost/pool/pool_alloc.hpp>
#include <boost/pool/poolfwd.hpp>
#include<boost/pool/simple_segregated_storage.hpp>
#include<boost/noncopyable.hpp>
#include<boost/utility.hpp>
#include<boost/core/ignore_unused.hpp>
#include<boost/optional.hpp>
#include<boost/none.hpp>
#include<boost/assign.hpp>
#include<boost/swap.hpp>
#include<boost/serialization/singleton.hpp>
#include<boost/logic/tribool.hpp>
#include<boost/logic/tribool_io.hpp>
#include<boost/operators.hpp>
#include<boost/core/explicit_operator_bool.hpp>
#include<boost/exception/all.hpp>
#include<boost/throw_exception.hpp>
#include<boost/tuple/tuple.hpp>
#include<boost/tuple/tuple_comparison.hpp>
#include<boost/tuple/tuple_io.hpp>
#include<boost/uuid/uuid.hpp>
#include<boost/uuid/uuid_generators.hpp>
#include<boost/uuid/uuid_io.hpp>
#include<boost/lexical_cast.hpp>
#include<boost/uuid/detail/sha1.hpp>
#include<boost/config/detail/suffix.hpp>
#include<boost/utility/binary.hpp>
#include<boost/current_function.hpp>
#include<boost/lexical_cast.hpp>
#include<boost/format.hpp>
#include<boost/utility/string_ref.hpp>
#include<boost/algorithm/algorithm.hpp>
#include<boost/algorithm/string.hpp>
#include<boost/tokenizer.hpp>
//#include<boost/xpressive/xpressive.hpp>
#include<boost/xpressive/xpressive_dynamic.hpp>    //xpressive版的正则表达式
//#include<boost/xpressive/xpressive_static.hpp>
#define BOOST_ENABLE_ASSERT_HANDLER
#include<boost/assert.hpp>   //运行时断言
#include<boost/static_assert.hpp>  //编译期断言
#include<boost/core/lightweight_test.hpp>
#include<boost/core/lightweight_test_trait.hpp>
#define BOOST_TEST_MAIN
//#include<boost/test/unit_test.hpp>   //unit test framework
#include<boost/test/execution_monitor.hpp>
#include<boost/test/utils/basic_cstring/io.hpp>
//#include<boost/test/minimal.hpp>
//#include<boost/test/included/prg_exec_monitor.hpp>
//#include<boost/test/included/unit_test.hpp>
//#include<boost/test/tree/test_unit.hpp>
#include<boost/mpl/list.hpp>
#include<boost/assign.hpp>
#include<boost/dynamic_bitset.hpp>
//#include<boost/dynamic_bitset/dynamic_bitset.hpp>
#include<boost/unordered_set.hpp>
#include<boost/unordered_map.hpp>
#include<boost/functional/hash.hpp>
#include<boost/bimap/unordered_set_of.hpp>
#include<boost/bimap/multiset_of.hpp>
#include<boost/bimap/unconstrained_set_of.hpp>
#include<boost/bimap/unordered_multiset_of.hpp>
#include<boost/bimap/vector_of.hpp>
#include<boost/bimap/list_of.hpp>
#include<boost/bimap.hpp>
#include<boost/bimap/support/lambda.hpp>
#include<boost/any.hpp>
#include<boost/variant.hpp>
#include<boost/multi_array.hpp>
#include<boost/property_tree/ptree.hpp>
#include<boost/property_tree/xml_parser.hpp>
#include<boost/property_tree/json_parser.hpp>
#include<boost/property_tree/ini_parser.hpp>
#include<boost/property_tree/info_parser.hpp>
#include<boost/optional.hpp>
*/
#include<unordered_map>
#include<unordered_set>
#include<complex>
#include<type_traits>
#include<ostream>
#include<vector>
#include<list>
#include<forward_list>
#include<set>
#include<iterator>
#include<cassert>
#include<iostream>
#include<fstream>
#include<map>
#include<memory>
#include<cstdlib>
#include<stack>
#include<queue>
#include<bitset>
#include<iomanip>
#include <iostream>
#include <vcruntime_typeinfo.h>
//#include<afxwin.h>
/*using namespace boost::mpl;
using namespace boost::mpl::placeholders;
using namespace boost::gregorian;
using namespace boost::posix_time;
using namespace boost::local_time;
using namespace boost::assign;
using namespace boost::uuids;
using namespace boost::uuids::detail;
using namespace boost::xpressive;         //dynamic regex library
*/
using namespace std;
using namespace boost;
using namespace boost::chrono;
/*
template<class T, class U>
struct Xbbb {
	int f(T* x) { U y[10]; return 23; }
};
template<bool b, typename T> struct add_const_reference;
template<typename T>struct add_const_reference<false, T> {
	using type = typename std::add_lvalue_reference<typename std::add_const<T>::type>::type;
};
template<typename T>struct add_const_reference<true, T> {
	using type = typename std::remove_reference<T>::type;
};
template<typename T>struct add_const_ref {
	using type = typename add_const_reference<std::is_reference<T>::value, T>::type;
};

template<class T, class Dimensions>struct quantity {
	explicit quantity(T x) :m_value(x) { }
	template<class otherDimensions>
	quantity(quantity<T, otherDimensions>const&rhs) : m_value(rhs.value()) {
		BOOST_STATIC_ASSERT((boost::mpl::equal_to<Dimensions, otherDimensions>::type::value));
	}
	T value()const;
private:
	T m_value;
};
template<class T, class Dimensions>
T quantity<T, Dimensions>::value()const {
	return m_value;
}
template<class T, class Dimensions>
quantity<T, Dimensions>operator+(quantity<T, Dimensions>x, quantity<T, Dimensions>y) {
	return  quantity<T, Dimensions>(x.value() + y.value());
}
template<class T, class Dimensions>
quantity<T, Dimensions>operator-(quantity<T, Dimensions>x, quantity<T, Dimensions>y) {
	return  quantity<T, Dimensions>(x.value() - y.value());
}
/*
template<class D1,class D2> struct divide_dimensions:boost::mpl::transform<D1,D2,boost::mpl::minus<_1,_2> >{ };
template<class T,class D1,class D2>quantity<T, typename divide_dimensions<D1,D2>::type>
	operator/(quantity<T, D1>x, quantity<T, D2>y) {
		return quantity<T, typename divide_dimensions<D1, D2>::type>(x.value()/y.value());
	}
	*/
	/*
template<class T,class D1,class D2>
quantity<T,typename boost::mpl::transform<D1,D2,boost::mpl::minus<_1,_2> >::type>
operator/(quantity<T,D1>x,quantity<T,D2>y) {
	typedef typename boost::mpl::transform<D1, D2, boost::mpl::minus<_1, _2> >::type dim;
	return quantity<T, dim>(x.value()/y.value());
}
*/
/*
struct plus_f {
	template<class T1, class T2>
	struct apply
	{
		typedef typename boost::mpl::plus<T1, T2>::type type;
		using plus_type = typename boost::mpl::plus<T1, T2>::type;
		using minus_type = typename boost::mpl::minus<T1, T2>::type;
	};
};
template<class UnaryMetaFunctionClass, class Arg>
struct apply1
	:UnaryMetaFunctionClass::template apply<Arg>
{
};
*/
/*
template <class F,class X>
	struct twice
		 :   apply1<
					typename mpl::lambda<F>::type
				 ,  typename apply1<
						   typename mpl::lambda<F>::type
					   ,   X
					>::type
		 >
	{ };
	*/
	/*
	struct  add_pointer_f
	{
		template <class T>
		struct apply
			: boost::add_pointer<T>
			//	 :  std::add_pointer<T>
		{ };
	};
	template<class F, class X>
	struct twices
		: mpl::apply<F, typename mpl::apply<F, X>::type>
	{ };
	template<class U>
	struct make_vector
	{
		typedef std::vector<U> type;
	};

	template<class T>
	struct param_type
		: mpl::eval_if<
		mpl::or_<
		boost::is_stateless<T>
		, boost::is_scalar<T>
		, boost::is_reference<T>
		>
		, mpl::identity<T>
		, boost::add_reference<T const>
		>
	{ };
	*/
	/*
		  template<class T>
		  struct add_reference { typedef T&type; };
		  typedef boost::container::vector<int, long, std::string>argument_types;
		  typedef mpl::transform <
			  argument_types
			  , mpl::if_ <
					   mpl::or_< boost::is_scalar<_1>, boost::is_reference<_1> >
					,  mpl::identity<_1>
					,  add_reference<boost::add_const<_1> >
			  >
		  >::type param_types;
	*/
	/*
	template<class T>
	class holder
	{
	public:
		holder(typename param_type<T>::type x) {}
	private:
		T x;
	};
	template<class T, T N>
	struct integral_c
	{
		static const T value = N;
		typedef integral_c<T, N>type;
		typedef T value_type;
		typedef mpl::integral_c<T, N + 1>next;
		typedef mpl::integral_c<T, N - 1>prior;
		operator T()const { return N; }
	};
	template<class Container, class Value>
	typename Container::iterator container_find(Container&c, Value const&v)
	{
		return std::find(c.begin(), c.end(), v);
	}
	struct tiny_tag { }; struct none1 { };
	template<class T0 = none1, class T1 = none1, class T2 = none1>
	struct tiny {
		typedef tiny_tag tag; typedef tiny type;
		typedef T0 t0; typedef T1 t1; typedef T2 t2;
	};
	template<class Seq>
	struct reverse
		: mpl::fold<Seq, typename mpl::clear<Seq>::type
		, mpl::push_front<_, _>
		>
	{ };
	*/
	/*
	 template<typename V1,typename V2,typename V3>
		typename mpl::transform_view<
		 mpl::zip_view<boost::container::vector<V1, V2, V3> >
		 , mpl::unpack_args<mpl::plus<mpl::_1,mpl::_2,mpl::_3> >
	 > wg;
	template<typename seq1,typename seq2>
	typename mpl::sort <
		mpl::joint_view<seq1, seq2>
		, mpl::less <placeholders::_1,placeholders::_2 >
		, mpl::back_inserter<mpl::vector<> >
	>wgx3;
	template<typename Seq>
	typename mpl::transform_view<
		mpl::filter_view<Seq, boost::is_pointer<placeholders::_1>>
		, boost::remove_pointer<placeholders::_1>
	(	>wggm;
	*/
	/*
	template<class 	IteratorSeq>
			struct zip_iteratorx
			{
				typedef IteratorSeq base;
				typedef mpl::forward_iterator_tag category;
				typedef typename mpl::transform<IteratorSeq, mpl::deref<boost::mpl::_1> >::type type;
			};
	namespace boost{ namespace mpl {
		template<class IteratorSeq>
				   struct next<zip_iteratorx<IteratorSeq> >
					{
						typedef zip_iteratorx<
								  typename transform<
									IteratorSeq,next<boost::mpl::_1>
									>::type
							   > type;
					   };
	} }
	template<class Sequences>
			struct zip_view
				: mpl::iterator_range<
						 zip_iteratorx<
							  typename mpl::transform<Sequences, mpl::begin<_1>
						 >::type
						>
					,     zip_iteratorx<
							   typename mpl::transform<Sequences, mpl::end<_1>
						  >::type
						>
				>
		{ };
			struct nil {  };
			template<class H, class T =nil>
			struct node
			{
				typedef H head; typedef T tail;
			};
			template<class S>
			struct total_size
			{
				typedef typename total_size<
					typename S::tail
				>::type tail_size;
				typedef boost::mpl::int_<
					sizeof(S::head)
					+ tail_size::value
				>type;
			};
			template<class T>
			struct returning_ptr
			{
				typedef T* type();
			   };
			struct visit_type
			{
				template<class Visitor>
				void operator()(Visitor)const
				{
					Visitor::visit();
				}
			};
			*/
			/*
			template<class T>
			struct print_visitor
			{
				static void visit()
				{
					std::cout << "typeid.name():" << typeid(T).name() << std::endl;
				}
			};
			template<class F, bool F_empty, class G, bool G_empty>
			class storage;
			template<class R, class F, class G>
			class compose_fg1 :storage<
				F, boost::is_empty<F>::value
				, G, boost::is_empty<G>::value
			>
			{
				typedef storage<F, boost::is_empty<F>::value
					, G, boost::is_empty<G>::value
				>base;
			public:
				compose_fg1(F const&f, G const&g) :base(f, g) { }
				template<class T>
				R operator()(T const& x)const
				{
					F const& f = this->get_f();
					G const& g = this->get_g();
					return f(g(x));
				}
			};
			template<class F, class G>
			class storage<F, false, G, false>
			{
			protected:
				storage(F const&f, G const&g) :f(f), g(g) { }
				F const& get_f() { return f; }
				G const& get_g() { return g; }
			private:
				F f; G g;
			};
			template<class F, class G>
			class storage<F, false, G, true> :private G
			{
			protected:
				storage(F const&f, G const&g) :G(g), f(f) { }
				F const& get_f() { return f; }
				G const& get_g() { return *this; }
			private:
				F f;
			};
			template<class F, class G>
			class storage<F, true, G, false> :private F
			{
			protected:
				storage(F const&f, G const&g) :F(f), g(g) { }
				F const& get_f() { return *this; }
				G const& get_g() { return g; }
			private:
				G g;
			};
			template<class F, class G>
			class storage<F, true, G, true> :private F, private G
			{
			protected:
				storage(F const&f, G const&g) :F(f), G(g) { }
				F const& get_f() { return *this; }
				G const& get_g() { return *this; }
			};
			template<class Types, class Node, class Root = empty_base>
			struct inherit_linearly :fold<Types, Root, Node>
			{ };
			template<class T>
			struct wrap
			{
				T value;
			};
			class screensaver
			{
			private:
				struct customization
				{
					virtual ~customization() { }
					virtual float operator()(float)const = 0;
				};
				template<class F>
				struct wrapper :customization
				{
					explicit wrapper(F f) :f(f) { }
					float operator()(float x)const
					{
						return this->f(x);
					}
				private: F f;
				};
			public:
				template<class F>
				explicit screensaver(F const&f) :get_seed(new wrapper<F>(f)) { }
			private:
				std::auto_ptr<customization>get_seed;
			};
			template<class T>
			struct ordered
			{
				bool operator>(T const&rhs)const
				{
					T const& self = static_cast<T const&>(*this);
					return rhs < self;
				}
			};
			class Int :public ordered<Int>
			{
			public:
				explicit Int(int x) :value(x) { }
				bool operator<(Int const& rhs)const
				{
					return this->value < rhs.value;
				}
				int value;
			};
			namespace crtp
			{
				template<class T>
				struct signed_number
				{
					friend T abs(T x)
					{
						return x < 0 ? -x : x;
					}
				};
			}
			class Float :crtp::signed_number<Float>
			{
			public: Float(float x) :value(x) { }
					Float operator-()const { return Float(-value); }
					bool operator<(float x)const { return value < x; }
					float value;
			};
			template<class Iterator>
			struct inner_value
				: boost::iterator_value<
				typename boost::iterator_value<Iterator>::type::iterator
				>
			{ };
			template<class Iterator>
			typename boost::lazy_disable_if<
				boost::is_arithmetic<
				typename boost::iterator_value<Iterator>::type
				>
				, inner_value<Iterator>
			>::type
			sum(Iterator start, Iterator end)
			{
				typename inner_value<Iterator>::type x(0);
				for (; start != end; ++start) x += sum(start->begin(), start->end());
				return x;
			}
			typedef char yes; typedef char(&no)[2];
			template<class T>
			struct is_class_or_union
			{
				template<class U>
				static yes tester(int U::*arg);
				template<class U>
				static no tester(...);
				static bool const value = sizeof(is_class_or_union::tester<T>(0)) == sizeof(yes);
				typedef mpl::bool_<value> type;
			};
			class credit_card
			{
			public:
				string bank_name; int bill_day_no;
				credit_card(const char*bname, int no) :bank_name(bname), bill_day_no(no)
				{ }
				int calc_free_days(date consume_day = day_clock::local_day())const
				{
					date bill_day(consume_day.year(), consume_day.month(), bill_day_no);
					if (consume_day > bill_day)bill_day += months(1);
					return (bill_day - consume_day).days() + 20;
				}
				friend bool operator<(const  credit_card&l, const credit_card&r)
				{
					return l.calc_free_days() < r.calc_free_days();
				}
			};
			template<typename Clock = microsec_clock>
			class basic_ptimer {
			public:
				basic_ptimer() { restart(); }
				void restart() { _start_time = Clock::local_time(); }
				void elapsed()const { cout << Clock::local_time() - _start_time << endl; }
				~basic_ptimer() { elapsed(); }
			private:
				ptime _start_time;
			};
			class work_time
			{
			public:
				typedef std::map<time_period, string> map_t;
			private:
				map_t map_ts;
				void init() {
					ptime p(day_clock::local_day());
					map_ts[time_period(p, hours(9))] = "It's too early,just relax.\n";
					p += hours(9);
					map_ts[time_period(p, hours(2) + minutes(30))] = "It's AM, please work hard.\n";
					p += hours(2);
					map_ts[time_period(p, minutes(30))] = "It's lunch time,are you hungry?\n";
					p += minutes(30);
					map_ts[time_period(p, hours(1))] = "该睡觉了.\n	";
					p += hours(1);
					map_ts[time_period(p, hours(3) + minutes(30))] = "下午该努力工作了\n";
					p += hours(3) + minutes(30);
					map_ts[time_period(p, minutes(1))] = "下班时间到了\n";
					p += hours(2) + minutes(1);
					map_ts[time_period(p, minutes(1))] = "还在加班啊?奖励你一个女人\n";
				}
			public:
				work_time() { init(); }
				void greeting(const ptime&t) {
					for (auto&x : map_ts)
						if (x.first.contains(t)) { std::cout << x.second << std::endl; break; }
				}
			};
			days operator"" _D(unsigned long long n) { return days(n); }
			weeks operator"" _W(unsigned long long n) { return weeks(n); }
			date    operator"" _YMD(const char*s, std::size_t) { return from_string(s); }
			class ptr_owned final {
			public:
				scoped_ptr<int>m_ptr;
			};
			struct posix_file
			{
				posix_file(const char* file_name) { cout << "open file:" << file_name << endl; }
				~posix_file() { cout << "close file" << endl; }
			};
			class shared {
			private:
				std::shared_ptr<int>p;
			public:
				shared(std::shared_ptr<int>p_) :p(p_) { }
				void print() { cout << "count: " << p.use_count() << " v=" << *p << endl; }
			};
			void print_func(std::shared_ptr<int>p) {
				cout << "count: " << p.use_count() << " v=" << *p << endl;
			}
			class abstract {
			public:
				virtual void f() = 0;
				virtual void g() = 0;
			protected:
				virtual ~abstract() = default;
			};
			class impls :public abstract{
			public:
				impls() = default;
				virtual ~impls() = default;
				virtual void f() { cout << "class impl f" << endl; }
				virtual void g() { cout << "class impl g" << endl; }
			};
			boost::shared_ptr<abstract>create() { return boost::make_shared<impls>(); }
			 class socket_t { public:socket_t() { cout << "默认socket_t 构造函数\n"; } };
			 socket_t* open_socket() { cout << "open_socket" << endl; return new socket_t; }
			 void close_socket(socket_t*s) { cout << "close_socket" << endl; }
			 void any_func(void*p) { cout << "some operate" << endl; }
			 class self_shared :public boost::enable_shared_from_this<self_shared>
			 {
			 public:
				 int x;
				 self_shared(int n) :x(n) { }
				 void print() { cout << "self_shared:" << x << endl; }
			 };
			 class raw_shared :public boost::enable_shared_from_raw {
			 public:
				 raw_shared() { cout << "raw_shared ctor" << endl; }
				 ~raw_shared() { cout << "raw_shared dtor" << endl; }
			 };
			 class nodes {
			 public:
				 ~nodes() { cout << "deleted" << endl; }
				 typedef boost::weak_ptr<nodes> ptr_type;
				 ptr_type next;
				 //	 typedef boost::shared_ptr<nodes> ptr_type;        //会形成循环引用无法析构
			 };
			 namespace boost {
				 struct counted_data :public boost::intrusive_ref_counter<counted_data> {
					 int m_count = 0;
					 // void intrusive_ptr_add_ref(counted_data*p) { ++p->m_count; }
					 // void intrusive_ptr_release(counted_data*p) { if (--p->m_count == 0)delete p; }
				 };
			 }
			 struct demo_class {
			 public:
				 int a, b, c;
				 demo_class(int x = 1, int y = 2, int z = 3) :a(x), b(y), c(z) { cout << "a:" << a << "\nb:" << b << "\nc:" << c << endl; }
				 ~demo_class() { cout << "demo_class dtor" << endl; }
			 };
			 struct demo_c {
				 int a, b, c, d, e;
				 demo_c(int x = 1, int y = 2, int z = 3, int f = 4, int g = 5) : a(x), b(y), c(z), d(f), e(g) { cout << "a:" << a << "\nb:" << b << "\nc:" << c << "\nd:" << d << "\ne:" << e << endl; }
				 ~demo_c() { cout << "demo_c dtor" << endl; }
			 };
			 template<typename P, typename ...Args>
			 inline typename P::element_type*
				 construct(P&p, Args&&... args)
			 {
				 typename P::element_type* mem = p.malloc();
				 assert(mem != 0);
				 new (mem) typename P::element_type(std::forward<Args>(args)...);
				 return mem;
			 }
			 struct pool_tagx { };
			 class do_not_copy : boost::noncopyable { };
			 int func(int x, int y) {
				 int i;
				 // (void)x, (void)i;
				 typedef int result_type;
				 boost::ignore_unused<result_type>();
				 result_type s;
				 boost::ignore_unused(x, i, s);
				 return y;
			 }
			 boost::optional<double>calc(int x) { return boost::optional<double>(x != 0, 1.0 / x); }
			 boost::optional<double>sqrt_op(double x) { return boost::optional<double>(x >= 0, sqrt(x)); }
			 namespace tmp_ns
			 {
				 BOOST_TRIBOOL_THIRD_STATE(unknown)
			 };
			 // class point:boost::less_than_comparable<point>, boost::equality_comparable<point> {
			 class point :totally_ordered<point, additive<point> > {
				 int x, y, z;
			 public:
				 explicit point(int a = 0, int b = 0, int c = 0) :x(a), y(b), z(c) { }
				 void print()const { cout << x << ',' << y << ',' << z << endl; }
				 friend bool operator<(const point&l, const point&r) { return (l.x*l.x + l.y*l.y + l.z*l.z < r.x*r.x + r.y*r.y + r.z*r.z); }
				 friend bool operator==(const point&l, const point&r) { return r.x == l.x&&r.y == l.y&&r.z == l.z; }
				 point& operator+=(const point&r) { x += r.x; y += r.y; z += r.z; return *this; }
				 point& operator-=(const point&r) { x -= r.x; y -= r.y; z -= r.z; return  *this; }

			 };
			 template<typename T>
			 class my_smart_ptr :public dereferenceable<my_smart_ptr<T>, T* >
			 {
				 T*p;
			 public:
				 my_smart_ptr(T*x) :p(x) { }
				 ~my_smart_ptr() { delete p; }
				 T& operator*()const { return *p; }
			 };
			 template<typename T>
			 class my_smart_array :public indexable<my_smart_array<T>, int, T& >
			 {
				 T *p;
			 public:
				 typedef my_smart_array<T> this_type;
				 typedef T* iter_type;
				 my_smart_array(T*x) :p(x) { }
				 ~my_smart_array() { delete[] p; }
				 friend iter_type operator+(const this_type&a, int n) { return   a.p + n; }
			 };
			 struct demo_a
			 {
				 BOOST_EXPLICIT_OPERATOR_BOOL()
					 bool operator!()const { return false; }
			 };
			 struct demo_b
			 {
				 BOOST_EXPLICIT_OPERATOR_BOOL_NOEXCEPT()
					 bool operator!()const { return true; }
			 };
			 struct my_exception :virtual std::exception, virtual boost::exception
			 { };
			 struct my_err { };
			 class uuid_ts :public uuid
			 {
			 private:
				 static random_generator& rand_uuid() { static  random_generator gen; return gen; }
				 static string_generator& string_uuid() { static string_generator gen; return gen; }
			 public:
				 uuid_ts() :uuids(rand_uuid()()) { }
				 uuid_ts(int) :uuids(nil_uuid()) { }
				 uuid_ts(const char*str) :uuids(string_uuid()(str)) { }
				 uuid_ts(const uuid&u, const char*str) :uuids(name_generator(u)(str)) { }
				 explicit uuid_ts(const uuid&u) :uuids(u) { }
				 operator uuid() { return static_cast<uuid&>(*this); }
				 operator uuid() const { return static_cast<const uuid&>(*this); }
				 uuid uuids;
			 };
			 struct static_int {
				 static const int v1 = 10;
				 enum { v2 = 20 };
				 int a[v2];
			 };
			 struct static_intes {
				 BOOST_STATIC_CONSTANT(int, v1 = 10);
				 BOOST_STATIC_CONSTANT(int, v2 = 20);
				 int a[v2];
			 };
			 double func() {
				 cout << "func:" << BOOST_CURRENT_FUNCTION << endl;
				 return 0.0;
			 }
			 template<typename T>
			 bool num_valid(const char*str) {
				 T temp;
				 return conversion::try_lexical_convert(str, temp);
			 }
			 class demo_classes {
				 friend std::ostream& operator<<(std::ostream&os, const demo_classes&x) {
					 os << "demo_class's Name"; return os;
				 }
			 };
			 template<typename T>
			 struct outable {
				 friend std::ostream& operator<<(std::ostream&os, const T&x) {
					 os << typeid(T).name(); return os;
				 }
			 };
			 class demo_classx :outable<demo_classx> { };
			 struct formater { string operator() (cmatch const&m)const { return boost::to_upper_copy(m[0].str()); } };
			 void boost::assertion_failed_msg(char const * expr, char const * msg, char const * function, char const * file, long line) {
				 boost::format fmt("Assertion failed!\nExpression: %s\n"
					 "Function: %s\nFile: %s\nLine: %ld\n"
					 "Msg: %s\n\n");
				 fmt % expr%function%file%line%msg;
				 cout << fmt;
			 }
			 double fux(int x) {
				 BOOST_ASSERT_MSG(x != 0, "divided by zero");
				 //assert(x != 0, "divided by zero");
				 return 1.0 / x;
			 }
			 template<typename T, typename U> void bit_copy(T&a, U&b) {
				 assert(sizeof(b) = sizeof(a));
				 // static_assert(sizeof(b) == sizeof(a), "template parameter size no equal!");   //C++11的静态断言
				 memcpy(&a, &b, sizeof(b));
				 cout << "离开了" << endl;
				 BOOST_STATIC_ASSERT_MSG(sizeof(b) == sizeof(a), "parameter size not equal");
			 }
			 template<typename T>
			 T my_min(T a, T b) {
				 BOOST_STATIC_ASSERT_MSG(sizeof(T) < sizeof(int), "T>int in here");
				 return a < b ? a : b;
			 }
			 namespace my_space {
				 using namespace boost;
				 class empty_class { BOOST_STATIC_ASSERT_MSG(sizeof(int) >= 4, "for 32 bit"); };
				 BOOST_STATIC_ASSERT_MSG(sizeof(empty_class) == 1, "不为1");
			 };
			 */
			 /*
			 int test_main(int argc, char *argv[])
			 {
				 using namespace boost;
				 format fmt("%d-%d");
				 BOOST_CHECK(fmt.size() != 0);
				 fmt % 12 % 34;
				 BOOST_REQUIRE(fmt.str() == "12-34");
				 BOOST_ERROR("演示一条错误消息");
				 fmt.clear();
				 fmt % 12;
				 try
				 {std::cout << fmt;	}
				 catch (...) { BOOST_FAIL("致命错误,测试中止"); }
				 return 0;
			 }
			 */
			 /*
			 BOOST_AUTO_TEST_SUITE(s_smart_ptr)
			 BOOST_AUTO_TEST_CASE(t_scoped_ptr)
			 {
				 scoped_ptr<int> p(new int(874));
				 BOOST_CHECK(p);
				 BOOST_CHECK_EQUAL(*p, 874);
				 p.reset();
				 BOOST_CHECK(p == 0);
			 //	BOOST_FAIL("失误了");
			 }
			 BOOST_AUTO_TEST_CASE(t_shared_ptr)
			 {
				 boost::shared_ptr<int>p(new int(100));
				 BOOST_CHECK(p);
				 BOOST_CHECK_EQUAL(*p,100);
				 BOOST_CHECK_EQUAL(p.use_count(), 1);
				 boost::shared_ptr<int>p2 = p;
				 BOOST_CHECK_EQUAL(p, p2);
				 BOOST_CHECK_EQUAL(p2.use_count(), 2);
				 *p2 = 255;
				 BOOST_CHECK_EQUAL(*p, 255);
				 BOOST_CHECK_GT(*p, 200);
			 //	BOOST_FAIL("我想");
			 }
			 BOOST_AUTO_TEST_SUITE_END()
			 //全局测试夹具类
			 struct global_fixture {
				 global_fixture() { cout << ("global setup\n"); }
				 ~global_fixture() { cout << ("global teardown\n"); }
			 };
			 //定义全局夹具
			 BOOST_GLOBAL_FIXTURE(global_fixture);
			 //测试套件夹具类
			 struct assign_fixture
			 {
				 assign_fixture() { cout << ("suit setup\n"); }
				 ~assign_fixture() { cout << ("suit teardown\n"); }
				 std::vector<int>v;
			 };
			 //定义测试套件级别的夹具
			 BOOST_FIXTURE_TEST_SUITE(s_assign, assign_fixture)
			 BOOST_AUTO_TEST_CASE(t_assign1) {
				 using namespace boost::assign;
				 v += 1, 2, 3, 4;
				 BOOST_CHECK_EQUAL(v.size(), 4);
				 BOOST_CHECK_EQUAL(v[2], 3);
			 }
			 BOOST_AUTO_TEST_CASE(t_assign2) {
				 using namespace boost::assign;
				 boost::assign::push_back(v)(10)(20)(30);
				 BOOST_CHECK_EQUAL(v.empty(), false);
				 BOOST_CHECK_LT(v[0], v[1]);
			 }
			 BOOST_AUTO_TEST_SUITE_END()
			 */
			 /*
			  int test_execution_monitor() {
				  std::cout << "f execute" << endl;
				  throw "a error accured";
				  return 10;
			  }
			  struct my_errors {
				  int err_code;
				  my_errors(int ec) :err_code(ec) { }
			  };
			  void  translate_my_err(const my_errors&e) { cout << "my err = " << e.err_code << endl; }
			  int gm() {
				  cout << "g execute." << endl;
				  throw my_errors(100);
				  return 0;
			  }
			  */
			  /*
			  (int cpp_main(int argc, char *argv[]) {
				  test_execution_monitor();
				  return 0;
			  }
			  */
			  /*
			  BOOST_AUTO_TEST_SUITE(s_lexical_case)
				  typedef mpl::list<short, int, long> types;
			  BOOST_AUTO_TEST_CASE_TEMPLATE(t_lexcial_cast, T, types)
			  {
				  T n(20);
				  BOOST_CHECK_EQUAL(lexical_cast<string>(n), "20");
			  }
			 */
			 /*
			  struct demo_classe {
				  int a;
				  friend bool operator==(const demo_classe&l, const demo_classe&r) { return l.a == r.a; }
			  };
			  std::size_t hash_values(const demo_classe&s) { return boost::hash<int>()(s.a); }
			  struct demo_classe_hash {
			  public:
				  std::size_t operator()(const demo_classe&c)const { return hash_values(c); }
			  };
			  typedef boost::tuple<int, double, string> my_tuple;
			  my_tuple funcs() { return boost::tuples::make_tuple(1, 2.0, "string"); }
			  template<typename Tuple>
			  void print_tuple(const Tuple&t) {
				  cout << t.get_head() << ',';
				  print_tuple(t.get_tail());
			  }
			  template<>
			  void print_tuple(const boost::tuples::null_type&) { }
			  template<typename Visitor, typename Tuple>
			  typename Visitor::result_type
				  visit_tuple(Visitor v, const Tuple&t)
			  {
				  v(t.get_head());
				  return visit_tuple(v, t.get_tail());
			  }
			  struct print_visitors {
				  typedef void result_type;
				  template<typename T> result_type operator()(const T&t) { cout << t << ','; }
			  };
			  template<> void visit_tuple(print_visitors, const boost::tuples::null_type&) { }
			  template<typename Visitor, typename Tuple>
			  typename Visitor::result_type
				  visit_max_tuple(Visitor v, const Tuple&t)
			  {
				  v(t.get_head());
				  return visit_max_tuple(v, t.get_tail());
			  }
			  template<typename T>
			  struct max_visitors {
				  T *tmp;
				  max_visitors(T*t) :tmp(t) { }
				  typedef void result_type;
				  result_type operator()(const T&t) { *tmp = *tmp < t ? t : *tmp; }
			  };
			  template<>
			  void  visit_max_tuple(max_visitors<double>, const boost::tuples::null_type&) { }
			  struct dem1 { int x; double y; std::vector<string>str; };
			  template<typename T>
			  struct any_print {
				  void operator()(any&a) {
					  try { cout << *any_cast<T>(&a) << endl; }
					  catch (bad_any_cast&) { cout << "print error" << endl; }
				  }
			  };
			  template<typename T>
			  struct any_print<boost::shared_ptr<T> > {
				  void operator()(any&a) {
					  try { cout << **any_cast<boost::shared_ptr<T>>(&a) << endl; }
					  catch (bad_any_cast&) { cout << "print error" << endl; }
				  }
			  };
			  */
#define foreach BOOST_FOREACH
#define reverse_foreach BOOST_REVERSE_FOREACH
template<typename T>
string type_name()
{
	return typeindex::type_id<T>().pretty_name();
}
//  template<typename R>
//	using string_out = boost::ratio_string<R, char>;
template<typename Rng>
void rand_bytes(unsigned char*buf, int buf_len)
{
	typedef variate_generator<Rng, uniform_smallint<> > var_gen_t;
	static var_gen_t gens(Rng((typename Rng::result_type)time(0)), uniform_smallint<>(1, 255));
	//	for (int i = 0; i < buf_len; ++i)buf[i] = gens();
	class var_wrapper
	{
	public:
		var_wrapper(var_gen_t &t_) :t(&t_) { }
		typename var_gen_t::result_type operator()() { return (*t)(); }
	private:
		var_gen_t *t;
	};
	std::generate_n(buf, buf_len, var_wrapper(gens));
	//	generate_n(buf, buf_len, std::ref(gens));

}
class boost::random_device::impl
{
private:
	rand48 rng;
public:
	impl() :rng(time(0)) { cout << "random_device::impl ctor\n"; }
	~impl() { cout << "random_device::impl dtor\n"; }
	unsigned int operator()() { return rng(); }
};
boost::random_device::random_device() :pimpl(new impl) { }
boost::random_device::~random_device() { delete pimpl; }
double boost::random_device::entropy()const { return 10; }
unsigned int boost::random_device::operator()() { return (*pimpl)(); }
class my_category : public boost::system::error_category
{
public:
	virtual const char*name()const BOOST_SYSTEM_NOEXCEPT
	{
		return "myapp_category";
	}
	virtual string message(int env)const
	{
		string msg;
		switch (env)
		{
		case 0: msg = "ok"; break;
		default:  msg = "some error"; break;
		}
		return msg;
	}
};
template<typename T>
using clock_desc = boost::chrono::clock_string<T, char>;
hours operator"" _h(unsigned long long n) { return hours(n); }
seconds operator"" _s(unsigned long long n) { return seconds(n); }
milliseconds operator"" _ms(unsigned long long n) { return milliseconds(n); }
template<typename T>
struct must_be_subscriptable
{
	~must_be_subscriptable()
	{
		void(*p)(T const&obj) = constraints;
	}
	static void constraints(T const&T_is_not_subscriptable)
	{
		sizeof(T_is_not_subscriptable[0]);
	}
};
struct subs
{
public:
	int operator[](size_t index) const;
};
struct not_subs {};
template<typename T>
struct must_be_subscriptable_as_decayable_pointer
{
	~must_be_subscriptable_as_decayable_pointer()
	{
		void(*p)(T const&obj) = constraints;
	}
	static void constraints(T const&T_is_not_decay_subscriptable)
	{
		sizeof(0[T_is_not_decay_subscriptable]);
	}
};
template<typename T>
struct must_be_pod
{
	must_be_pod() { void(*p)() = constraints1; }
	static void constraints1()
	{
		union
		{
			T  T_is_not_POD_TYPE;
		};
	}
};
template<typename T>
struct must_be_pod_or_void
{
	must_be_pod_or_void() { void(*p)() = constraints2; }
	static void constraints2()
	{
		union
		{
			T T_is_not_POD_TYPE;
		};
	}
};
template<>
struct must_be_pod_or_void<void>
{
};
class NonPOD
{
public:
	virtual ~NonPOD();
};
template<typename T>
struct size_of
{
	enum { value = sizeof(T) };
};
template<>
struct size_of<void>
{
	enum { value = 0 };
};
template<typename T1, typename T2>
struct must_be_same_size
{
	must_be_same_size() { void(*p)() = constraints3; }
	static void constraints3()
	{
		const int T1_must_be_same_size_as_T2 = size_of<T1>::value == size_of<T2>::value;
		int i[T1_must_be_same_size_as_T2];
	}
};
using namespace boost::filesystem;
optional<path>
find_file(const path&dir, const string&filename)
{
	typedef optional<path> result_type;
	if (!exists(dir) || !is_directory(dir)) return result_type();
	typedef recursive_directory_iterator rd_iterator;
	rd_iterator end;
	for (rd_iterator pos(dir); pos != end; ++pos)
	{
		if (!is_directory(*pos) && pos->path().filename() == filename)
			return result_type(pos->path());
	}
	return result_type();
}
using namespace boost::xpressive;
vector<path> find_files(const path&dir, const string&filename)
{
	static xpressive::sregex_compiler rc;
	if (!rc[filename].regex_id())
	{
		string str = replace_all_copy(
			replace_all_copy(filename, ".", "\\."), "*", ".*");
		rc[filename] = rc.compile(str);
	}
	typedef vector<path> result_type;
	result_type v;
	if (!exists(dir) || !is_directory(dir)) return v;
	typedef  recursive_directory_iterator rd_iterator;
	rd_iterator end;
	for (rd_iterator pos(dir); pos != end; ++pos)
	{
		if (!is_directory(*pos) &&
			regex_match(pos->path().filename().string(), rc[filename]))
			v.push_back(pos->path());
	}
	return v;
}

size_t copy_files(const path&from_dir, const path&to_dir, const string&filename = "*")
{
	if (!is_directory(from_dir)) { cout << "args is not a dir." << endl; return 0; }
	cout << "prepare for copy,please wait..." << endl;
	auto v = find_files(from_dir, filename);
	if (v.empty()) { cout << "0 file copied." << endl; return 0; }
	cout << "now begin copy files..." << endl;
	path tmp;
	progress_display pd(v.size());
	for (auto&p : v)
	{
		tmp = to_dir / p.string().substr(from_dir.string().length());
		if (!exists(tmp.parent_path())) create_directories(tmp.parent_path());
		copy_file(p, tmp);
		++pd;
	}
	cout << v.size() << " file copied." << endl;
	return v.size();
}
namespace newfs = boost::filesystem;
using namespace boost::program_options;
void print_vm(boost::program_options::options_description&opts, boost::program_options::variables_map&vm)
{
	if (vm.empty()) { cout << opts << endl; return; }
	if (vm.count("help"))cout << opts << endl;
	cout << "find opt:" << vm["filename"].as<string>() << endl;
	if (vm.count("dir"))
	{
		cout << "dir opt:";
		for (auto& str : vm["dir"].as<vector<string> >())  cout << str << ",";
		cout << endl;
	}
	if (vm.count("depth"))cout << "depth opt:" << vm["depth"].as<int>() << endl;
}
struct squares
{
	typedef void result_type;
	void operator()(int&x) { x = x * x; }
};
class XB { public: int x; };
class YB : public virtual XB {};
class ZB : public virtual XB {};
class AB : public YB, ZB {};
void fte(int**q)
{
	int i = 10; *q = &i;
	cout << "&q:" << &q << "  &*q:" << &(*q) << "  &i:" << &i << endl;
}
struct point12
{
	int x, y;
	point12(int a = 0, int b = 0) : x(a), y(b) { }
	void print() { cout << "(" << x << "," << y << ")\n"; }
};
int f(int a, int b) { return a + b; }
struct demo_class
{
	int add(int a, int b) { return a + b; }
	int operator()(int x) const { return x * x; }
};
template<typename T>
struct summary
{
	typedef void result_type;
	T sum;
	summary(T v = T()) : sum(v) { }
	void operator()(T const &x) { sum += x; }
};
class demo_classes
{
private:
	typedef boost::function<void(int)> func_t;
	func_t func;
	int n;
public:
	demo_classes(int i) : n(i) { }
	template<typename CallBack>
	void accept(CallBack f) { func = f; }
	void run() { func(n); }
};
void call_back_func(int i)
{
	cout << "call_back_func:" << i * 2 << endl;
}
class call_back_obj
{
private:
	int x;
public:
	call_back_obj(int i) : x(i) { }
	void operator()(int i)
	{
		cout << "call_back_obj:" << i * x++ << endl;
	}
};
class call_back_factory
{
public:
	void call_back_func1(int i) { cout << "call_back_factory1:" << i * 2 << endl; }
	void call_back_func2(int i, int j) { cout << "call_back_factory2:" << i * j * 2 << endl; }
};
void slots1() { cout << "slot1 called" << endl; }
void slots2() { cout << "slot2 called" << endl; }
template<int N>
struct slots
{
	void operator()() { cout << "slot" << N << "called" << endl; }
};
template<int N>
struct slotss
{
	int operator()(int x) { cout << "slot" << N << "called" << endl; return x * N; }
};
template<	int N>
bool operator==(const slotss<N>&, const slotss<N>&) { return true; }
template<typename T>
class combiner
{
	T v;
public:
	typedef std::pair<T, T> result_type;
	combiner(T t = T()) : v(t) { }
	template<typename InputIterator>
	result_type operator()(InputIterator begin, InputIterator end) const
	{
		if (begin == end) return result_type();
		vector<T> vec(begin, end);
		T sum = std::accumulate(vec.begin(), vec.end(), v);
		T max = *std::max_element(vec.begin(), vec.end());
		return result_type(sum, max);
	}
};
class ring
{
public:
	typedef boost::signals2::signal<void()> signal_t;
	typedef signal_t::slot_type slot_t;
	boost::signals2::connection connect(const slot_t& s) { return alarm.connect(s); }
	void press()
	{
		cout << "Ring alarm..." << endl;
		alarm();
	}
private:
	signal_t alarm;
};
typedef boost::random::variate_generator<rand48, uniform_smallint<> > bool_rand;
bool_rand g_rand(rand48(time(0)), uniform_smallint<>(0, 100));
extern char const nurse1[] = "Mary";                 //换成boost::mpl库的编译期字符串类mpl::string，
extern char const nurse2[] = "Kate";
template<char const*name>
class nurse
{
private:
	bool_rand &rand;
public:
	nurse() : rand(g_rand) { }
	void action()
	{
		cout << name;
		if (rand() > 30) cout << " wakeup and open the door." << endl;
		else cout << " is sleeping..." << endl;
	}
};
extern char const baby1[] = "Tom";
extern char const baby2[] = "Jerry";
template<char const*name>
class baby
{
private:
	bool_rand &rand;
public:
	baby() : rand(g_rand) { }
	void action()
	{
		cout << "Baby " << name;
		if (rand() > 50)cout << " wakeup and crying loudly..." << endl;
		else cout << " is sleeping sweetly..." << endl;
	}
};
class guest
{
public:
	void press(ring &r)
	{
		cout << "A guest press the ring." << endl;
		r.press();
	}
};
template<int N>
struct slots12
{
	int operator()(const boost::signals2::connection &conn, int x)
	{
		cout << "conn=" << conn.connected() << endl;
		return x * N;
	}
};
class demo_class12
{
public:
	typedef boost::signals2::signal<void()> signal_t;
	boost::shared_ptr<signal_t> sig;
	int x;
	demo_class12() : sig(new signal_t), x(10) { }
};
void pirnt()
{
	cout << "hell sig." << endl;
}
template<typename Lockable, typename D>
boost::unique_lock<Lockable> my_make_lock(Lockable& mtx, D d)
{
	return boost::unique_lock<Lockable>(mtx, d);
}
class account final : public boost::lockable_adapter<boost::mutex>
{
private:
	boost::atomic<int> m_money{ 0 };
public:
	account() {}
	~account() {}
public:
	int sum()const { return m_money; }
	void withdraw(int x) { m_money -= x; }
	void deposit(int x) { m_money += x; }
};
void dummy(int n)
{
	for (int i = 0; i < n; ++i) cout << i << endl;
}
void to_interrupt(int x)
{
	try
	{
		for (int i = 0; i < x; ++i)
		{
			boost::this_thread::sleep_for(400_ms);
			cout << i << endl;
		}
	}
	catch (const boost::thread_interrupted&)
	{
		cout << "thread_interrupted" << endl;
	}
}
void to_interrupts(int x)
{
	try
	{
		using namespace boost::this_thread;
		assert(interruption_enabled());
		for (int i = 0; i < x; ++i)
		{
			disable_interruption di;
			assert(!interruption_enabled());
			cout << i << endl;
			cout << boost::this_thread::interruption_requested() << endl;
			boost::this_thread::interruption_point();
			restore_interruption ri(di);
			assert(interruption_enabled());
			cout << "can interrupted" << endl;
			cout << boost::this_thread::interruption_requested() << endl;
			boost::this_thread::interruption_point();
		}
		assert(interruption_enabled());
	}
	catch (const boost::thread_interrupted&)
	{
		cout << "thread_interrupted" << endl;
	}
}
void check(int&) { cout << "lvalue" << endl; }
void check(int&&) { cout << "rvalue" << endl; }
template<typename T>
void print12(T&& v)
{
	check(std::forward<T>(v));
}
struct dem { int x = 0; };
int g_count;
void init_count(int x)
{
	cout << "should call once." << endl;
	g_count = x;
}
void call_func()
{
	static boost::once_flag once;
	call_once(once, init_count, 10);
}
class buffer
{
private:
	boost::mutex mu;
	boost::condition_variable_any cond_put;
	boost::condition_variable_any cond_get;
	std::stack<int> stk;
	int un_read, capacity;
	bool is_full() { return un_read == capacity; }
	bool is_empty() { return un_read == 0; }
public:
	buffer(size_t n) : un_read(0), capacity(n) { }
	void put(int x)
	{
		{
			auto lock = boost::make_unique_lock(mu);
			for (; is_full();)
			{
				cout << "full waiting..." << endl;
				cond_put.wait(lock);
			}
			stk.push(x);
			++un_read;
		}
		cond_get.notify_one();
	}
	void get(int*x)
	{
		{
			auto lock = boost::make_unique_lock(mu);
			for (; is_empty();)
			{
				cout << "empty waiting..." << endl;
				cond_get.wait(lock);
			}
			--un_read;
			*x = stk.top();
			stk.pop();
		}
		cond_put.notify_one();
	}
};
buffer buf(5);
void producer(int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "put " << i << endl;
		buf.put(i);
	}
}
void consumer(int n)
{
	int x;
	for (int i = 0; i < n; ++i)
	{
		buf.get(&x);
		cout << "get " << x << endl;
	}
}
class rw_data
{
private:
	int m_x;
	boost::shared_mutex rw_mu;
public:
	rw_data() : m_x(0) { }
	void write()
	{
		boost::unique_lock<boost::shared_mutex> g(rw_mu);
		++m_x;
		printf("write %d\n,", m_x);
	}
	void read(int *x)
	{
		boost::unique_lock<boost::shared_mutex> g(rw_mu);
		*x = m_x;
	}
};
void writer(rw_data &d)
{
	for (int i = 0; i < 20; ++i)
	{
		boost::this_thread::sleep_for(3_ms);
		d.write();
	}
}
void reader(rw_data &d)
{
	int x;
	for (int i = 0; i < 10; ++i)
	{
		boost::this_thread::sleep_for(5_ms);
		d.read(&x);
		cout << "reader:" << x << endl;
	}
}
int fab(int n)
{
	if (n == 0 || n == 1) return 1;
	return fab(n - 1) + fab(n - 2);
}
class timer_with_func
{
	typedef timer_with_func this_type;
private:
	int m_count = 0;
	int m_count_max = 0;
	boost::function<void()> m_f;
	boost::asio::steady_timer m_t;
public:
	template<typename F>
	timer_with_func(boost::asio::io_service&io, int x, F func) :
		m_count_max(x), m_f(func), m_t(io, 200_ms)
	{
		init();
	}
private:
	void init()
	{
		/*
	   m_t.async_wait(boost::bind(
			&this_type::handler, this, boost::asio::placeholders::error));
			*/
		m_t.async_wait(m_handler);

	}
	/*
	void handler(const boost::system::error_code&)
	{
		if (m_count++ >= m_count_max) return;
		m_f();
		m_t.expires_from_now(4000_ms);
		m_t.async_wait(boost::bind(
			&this_type::handler, this, boost::asio::placeholders::error));
	}
	*/
	typedef void(handler_type)(const boost::system::error_code&);
	boost::function<handler_type> m_handler = [&](const boost::system::error_code&)
	{
		if (m_count++ >= m_count_max) return;
		m_f();
		m_t.expires_from_now(400_ms);
		m_t.async_wait(m_handler);
	};
};
void resolve_connect(boost::asio::ip::tcp::socket &sock, const char*name, int port)
{
	boost::asio::ip::tcp::resolver r(sock.get_executor());
	boost::asio::ip::tcp::resolver::query q(name, boost::lexical_cast<std::string>(port));
	auto iter = r.resolve(q);
	decltype(iter) end;
	boost::system::error_code ec = boost::asio::error::host_not_found;
	for (; ec && iter != end; ++iter)
	{
		sock.close();
		sock.connect(*iter, ec);
	}
	if (ec) {
		cout << "can't connect." << endl;
		throw boost::system::system_error(ec);
	}
	cout << "connect success." << endl;
}
long operator"" _kb(unsigned long long v) { return v * 1024; }
std::complex<double> operator"" _c(const char*s, size_t n)
{
	using namespace  boost::xpressive;
	auto reg = cregex::compile(R"--( ([0-9\.]+) \+ ([0-9\.]+) i )--");
	boost::cmatch what;
	// auto ok = boost::xpressive::regex_match(s, what, reg);
	 //assert(ok);
	return std::complex<double>(std::stod(what[1]), std::stod(what[2]));
}
class empty1 {};
class empty2 {
	static const int MAX = 100;
};
class empty3 {
public:
	void print() { cout << "this is a empty class" << endl; }
};
class empty4 : public empty3 {
	timer_with_func e;
};
template<typename T1, typename T2>
inline ::boost::compressed_pair<T1, T2>
make_compressed_pair(T1 t1, T2 t2)
{
	return ::boost::compressed_pair<T1, T2>(t1, t2);
}
template<typename P, int Version>
struct _compare
{
	bool operator()(const P& l, const P& r) { return false; }
};
template<typename P>
struct _compare<P, 0>
{
	bool operator()(const P&l, const P&r)
	{
		return l.first() == r.first() && l.second() == r.second();
	}
};
template<typename P>
struct _compare<P, 1>
{
	bool operator()(const P&l, const P&r)
	{
		return l.second() == r.second();
	}
};
template<typename P>
struct _compare<P, 2>
{
	bool operator()(const P&l, const P&r)
	{
		return l.first() == r.first();
	}
};
template<typename T1, typename T2>
bool operator==(const boost::compressed_pair<T1, T2>& l,
	const boost::compressed_pair<T1, T2>& r)
{
	typedef boost::compressed_pair<T1, T2> pair_type;
	typedef boost::details::compressed_pair_switch
		< T1, T2,
		boost::is_same<
		typename boost::remove_cv<T1>::type,
		typename boost::remove_cv<T2>::type
		>::value,
		boost::is_empty<T1>::value,
		boost::is_empty<T2>::value
		> version;
	return _compare<pair_type, version::value>()(l, r);
}
template<typename T1, typename T2>
bool operator!=(const boost::compressed_pair<T1, T2>& l,
	const boost::compressed_pair<T1, T2>& r)
{
	return !(l == r);
}
class demo_classb
{
public:
	~demo_classb() { cout << "dtor exec." << endl; }
};
struct my_checked_deleter
{
	typedef void result_type;
	template<class T>
	void operator()(T* x)const {
		boost::checked_delete(x);
	}
};
class demg; class dem1 {};
template<class Pointer> inline
void my_checked_delete(Pointer p)
{
	BOOST_STATIC_ASSERT(boost::is_pointer<Pointer>::value);
	typedef typename boost::remove_pointer<Pointer>::type T;
	BOOST_STATIC_ASSERT(boost::is_object<T>::value);
	BOOST_STATIC_ASSERT(!boost::is_array<T>::value);
	BOOST_STATIC_ASSERT(sizeof(T) > 0);
	delete p;
}
class dont_do_this
{
public:
	int x, y;
	size_t operator& () const
	{
		return (size_t)&y;
	}
};
class danger_class
{
	void operator& ()  const;
};
template<typename T>
class vs_iterator :
	public boost::iterators::iterator_facade<
	vs_iterator<T>, T, boost::single_pass_traversal_tag>
{
private:
	std::vector<T>& v;
	std::size_t current_pos;
public:
	typedef boost::iterators::iterator_facade< vs_iterator<T>, T, boost::single_pass_traversal_tag> super_type;
	typedef vs_iterator this_type;
	typedef typename super_type::reference reference;
	vs_iterator(std::vector<T>& _v, size_t pos = 0) :
		v(_v), current_pos(pos)
	{ }
	vs_iterator(this_type const& other) :
		v(other.v), current_pos(other.current_pos)
	{ }
	this_type& operator=(this_type const& other)
	{
		this->v = other.v;
		this->current_pos = other.current_pos;
	}
private:
	friend class boost::iterator_core_access;
	reference dereference() const { return v[current_pos]; }
	void increment() { ++current_pos; }
	bool equal(this_type const& other)   const { return this->current_pos = other.current_pos; }
};
template<typename I>
class delta_iterator : public boost::iterator_adaptor<
	delta_iterator<I>, I, typename std::iterator_traits<I>::value_type,
	boost::single_pass_traversal_tag, typename std::iterator_traits<I>::value_type const>
{
private:
	friend class boost::iterator_core_access;
	typedef delta_iterator this_type;
	typedef typename this_type::iterator_adaptor_  super_type;
	typename super_type::value_type m_value;
public:
	explicit delta_iterator(const I& iter) : super_type(iter), m_value(0)
	{ }
private:
	using super_type::base;
	using super_type::base_reference;
	typename super_type::reference dereference() const
	{
		return m_value + *base();
	}
	void increment()
	{
		m_value += *base();
		++base_reference();
	}
};
template<typename R>
class rand_int
{
private:
	R &r;
	int count;
public:
	rand_int(R&_r, int c = 0) : r(_r), count(c) { }
	rand_int(rand_int const&other) = default;
	rand_int& operator=(rand_int const &other) = default;
	void operator++() { ++count; }
	friend bool operator==(rand_int const &l, rand_int const &r) { return l.count == r.count; }
	operator typename R::result_type() const { return r(); }
};
class to_hex
{
private:
	std::vector<unsigned char> &v;
	int count;
	char trans(const char c) const
	{
		if (c >= 'a') { return c - 'a' + 10; }
		else if (c >= 'A') { return c - 'A' + 10; }
		else { return c - '0'; }
	}
public:
	to_hex(std::vector<unsigned char> &_v) : v(_v), count(0)
	{ }
	to_hex(const to_hex&to) :v(to.v), count(to.count) { }
	void operator()(const char c)
	{
		static char tmp;
		if ((count++) % 2 == 0) tmp = trans(c) * 0x10;
		else { tmp += trans(c); v.push_back(tmp); }
	}
	to_hex& operator==(const to_hex&to)
	{
		v = to.v;
		count = to.count;
		return *this;
	}
};
bool is_prim(int x)
{
	for (int i = 2; i < x / 2; ++i)
		if (x%i == 0) return false;
	return true;
}
class dem_class
{
public:
	int x;
	dem_class(int a = 0) : x(a) { }
	void print() { cout << x << endl; }
	void hello(const char* str) { cout << str << endl; }
};
#define Conn(x,y) x##y
#define ToChar(x) #@x
#define ToString(x) #x
class item : boost::noncopyable
{
public:
	virtual ~item() {}
	virtual void print() = 0;
};
class abstract_item : public item
{
	std::string name;
public:
	abstract_item(const std::string& str) : name(str) { }
	virtual ~abstract_item() {}
	virtual void print() final override { cout << "abstract:" << name << endl; }
};
class television : public abstract_item {
public:
	television() :abstract_item("television") {}
	television(const std::string &na) : abstract_item(na) {}
	// virtual ~television(){}
};
class computer : public abstract_item {
public:
	computer() :abstract_item("computer") {}
	computer(const std::string& na) : abstract_item(na) {}
	//	 virtual ~computer(){}
};
class null_item final : public item
{
	virtual void print() { }
};
class on_free_store
{
	~on_free_store() { }
public:
	static void free(on_free_store*p) { delete p; }
};
// on_free_store glob1;  //申明全局变量失败
class no_free_store
{
	class Dummy { };
	void* operator new(size_t, Dummy);
};
no_free_store glob2;
class D :public on_free_store {};
// D d;
class Usable;
class Usable_lock
{
	friend Usable;
private:
	Usable_lock() { }
};
class Usable : public virtual Usable_lock
{
public:
	Usable() {}
	Usable(char*) {}
};
Usable awgag;
class DD :public Usable {};
//	 DD dmx;
class BXXX {
public:
	int b;
	virtual void f();
	void g();
	BXXX();
};
class DXXX : public BXXX
{
public:
	void f();
	DXXX();
};
/*
BXXX::BXXX()
 {
	 b++;
  // f();   //运行时错误 调用的是B::f();
 }
 */
void BXXX::g()
{
	// BXXX::BXXX();
	b++;
	//	 f();
}
class pointss : boost::noncopyable
{
public:
	int x, y;
	typedef pointss* node_ptr;
	node_ptr next;
	pointss(int a = 0, int b = 0) : x(a), y(b), next(nullptr) { }
	node_ptr get_next() { return next; }
	void set_next(node_ptr p) { next = p; }
};
using namespace boost::intrusive;
class pointxx : public slist_base_hook<>
{
public:
	int x, y;
	pointxx(int a = 0, int b = 0) : x(a), y(b) { }
	// slist_member_hook<> m_hook;           //成员挂钩，缺省配置
	slist_member_hook<link_mode<auto_unlink>> m_hook;           //使用自动端口连接的选项
};
class pointgg : public list_base_hook<>
{
public:
	int x, y;
	pointgg(int a = 0, int b = 0) : x(a), y(b) { }
	friend bool operator==(const pointgg& l, const pointgg&r)
	{
		return l.x == r.x && l.y == r.y;
	}
	friend bool operator<(const pointgg&l, const pointgg&r)
	{
		return l.x < r.x;
	}
};
template<class T>
struct disposer
{
	void operator()(T*p)
	{
		cout << "dispose:" << p->x << endl;
		boost::checked_delete(p);
	}
};
template<typename T, typename Cont>
struct disposers
{
	void operator()(T*p, Cont*c)
	{
		c->push_back(p);
	}
};
struct cloners
{
	template<typename T>
	T* operator()(const T& r)
	{
		return factory<T*>()(r);
	}
};
namespace detailsxx {
	template<typename T, std::size_t sz>
	struct vector_type {
		using type = std::vector<typename vector_type<T, sz - 1>::type>;
	};
	template<typename T>
	struct vector_type<T, 1> {
		using type = T;
	};
	template<typename T, std::size_t sz>
	using vector_type_t = typename vector_type<T, sz>::type;
}
template<typename T>
struct VectorGenerator {
	static auto Generate(std::size_t last_arg) {
		return std::vector<T>(last_arg);
	}
	template<typename ...Args>
	static auto Generate(std::size_t first_arg, Args... args) {
		using vector = std::vector<typename detailsxx::vector_type_t<T, 1 + sizeof...(args)>>;
		return vector(first_arg, VectorGenerator<T>::Generate(args...));
	}
};
std::string sb;
class pointggg : public set_base_hook<>, boost::less_than_comparable<pointggg>
{
public:
	int x, y;
	pointggg(int a = 0, int b = 0) : x(a), y(b) { }
	friend bool operator==(const pointggg& l, const pointggg&r)
	{
		return l.x == r.x && l.y == r.y;
	}
	friend bool operator<(const pointggg&l, const pointggg&r)
	{
		return l.x < r.x;
	}
};
struct key_compare
{
	typedef const int& key_type;
	typedef const pointggg& value_type;
	bool operator()(key_type k, value_type p) const { return k < p.x; }
	bool operator()(value_type p, key_type k) const { return p.x < k; }
};
double division(int a, int b)
{
	if (b == 0) throw "Division by zero condition";
	return (a / b);
}
struct MyException : public std::exception
{
	const char* what() const throw()
	{
		return "C++ Exception";
	}
};
class B2
{
public:
	B2()
	{
		Fuction();
	}

	virtual void Fuction()
	{
		cout << "Base::Fuction" << endl;
	}
};

class A2 : public B2
{
public:
	A2()
	{
		Fuction();
	}

	virtual void Fuction()
	{
		cout << "A::Fuction" << endl;
	}
};
class CMyString {
public:
	CMyString(char*pData = NULL)
	{
		m_pData = new char[strlen(pData) + 1];
	}
	CMyString(const CMyString&str)
	{
		if (this != &str)
		{
			delete[]m_pData;
			m_pData = NULL;
			m_pData = new char[strlen(str.m_pData) + 1];
			//	 strcpy(m_pData, str.m_pData);
		}
	}
	CMyString& operator = (const CMyString&str)
	{
		if (this == &str) return *this;
		delete[]m_pData;
		m_pData = NULL;
		m_pData = new char[strlen(str.m_pData) + 1];
		// strcpy(m_pData, str.m_pData);
		return *this;
	}
	~CMyString(void)
	{
		delete[] m_pData;
	}
private:
	char * m_pData;
};
int nxx = 1;
void fucksb()
{
	static int a = 2;
	int mw = 3; // 局部变量
	a += 2;
	nxx += 12;
	mw += 10;
	printf("func:   a=%d,   b=%d,   n=%d\n", a, mw, nxx);
}
class Dxx
{
public:
	void printA()
	{
		cout << "printA" << endl;
	}
	virtual void printB()
	{
		cout << "printB" << endl;
	}
};

void customSleep()
{
	std::this_thread::sleep_for(std::chrono::milliseconds(5));
	std::this_thread::sleep_for(std::chrono::seconds(5));
}
class CObject
{
public:
	static int a;
	CObject();
	virtual ~CObject();
	void Fun();
private:
	double m_count;  //这里改成了double 
	int  m_index;
	char *m;
};
class Basev
{
public:
	Basev();
	virtual ~Basev();         //每个实例都有虚函数表 
	void set_num(int num)    // 普通成员函数，为各实例公有，不归入sizeof统计 
	{
		a = num;
	}  //虚函数表指针也是按32位或者64位来区分
private:
	int  a;                  //占4字节 
	CObject *p;                 //32位4字节，64位是8字节
	//指针不关任何对象事，凡是32位系统4字节，64位系统是8字节,
	//如果是普通类对象，内存的大小会随着改变对象数据结构变化而变化。
};
union UData {
	int8_t a;
	char b;
	bool c;
	int16_t d;

	struct ST {
		int8_t x;
		int8_t y;
		int8_t z;
	} st;
};
union U {
	char a[4];
	int32_t b;
} uxx{ 'L', 'X', 'X', 'B' };

//用宏记录CPU大小端模式
//C语言int转char，是直接阶段高地址部分
//所以如果是小端模式，留下的就是L，大端则是B
#define ENDIAN (char) uxx.b
class refClass {
private:
	int& ref;
public:
	refClass(int var = 42.0) :ref(var) {}
};
char * getmemory(void)
{
	char p[] = "hello world";
	return p;
}
class STRING
{
public:
	STRING(const char* s = "") :_str(new char[strlen(s) + 1])
	{
		strcpy_s(_str, strlen(s) + 1, s);
	}
	//STRING( const STRING& s )
		 //{
	//    //_str = s._str; //浅拷贝的写法
	//    cout << "拷贝构造函数" << endl;
	//    _str = new char[strlen(s._str) + 1];
   //    strcpy_s( _str, strlen(s._str) + 1, s._str );
		 //}
//STRING& operator=(const STRING& s)
 //{
//    cout << "运算符重载" << endl;
 //    if (this != &s)
	//    {
	//        //this->_str = s._str; //浅拷贝的写法
 //        delete[] _str;
//        this->_str = new char[strlen(s._str) + 1];
	//        strcpy_s(this->_str, strlen(s._str) + 1, s._str);
	 //    }
	 //    return *this;
 //}

	STRING(const STRING& s) :_str(NULL)
	{
		STRING tmp(s._str);// 调用了构造函数，完成了空间的开辟以及值的拷贝
		swap(this->_str, tmp._str); //交换tmp和目标拷贝对象所指向的内容
	}

	STRING& operator=(const STRING& s)
	{
		if (this != &s)//不让自己给自己赋值
		{
			STRING tmp(s._str);//调用构造函数完成空间的开辟以及赋值工作
			swap(this->_str, tmp._str);//交换tmp和目标拷贝对象所指向的内容
		}
		return *this;
	}

	~STRING()
	{
		cout << "~STRING" << endl;
		if (_str)
		{
			delete[] _str;
			_str = NULL;
		}
	}

	void show()
	{
		cout << _str << endl;
	}
private:
	char* _str;
};
const double m2k = 1.609;
inline double mi2km(int mile)
{
	std::cout << "this is here" << std::endl;
	return (mile * m2k);
}
class gm
{
	enum ali { a, b, c };
private:
	ali vb;
};
enum class watch_state : int8_t
{
	initialized,
	listening,
	pending_close,
};
int main(int argc, char *argv[])
{
	boost::chrono::time_point<boost::chrono::high_resolution_clock>m_begin = boost::chrono::high_resolution_clock::now();
	std::system("chcp 65001");
	// using namespace boost::assign;     

	//枚举默认占4个字节，枚举类看基类多少个字节就是多少字节
	cout << "gm:" << sizeof(gm) << "\nwatech_state:"
		<< sizeof(watch_state) << endl;

	//std::thread t1([]() { cout << "hello" << endl; });
	//std::thread t2([]() { cout << "hello3" << endl; });
	//swap(t1, t2);
	//std::thread t3 = std::move(t1);

	//register int awxf = 100;
	//int *b = &awxf;
	//printf("b=%x\n", b);
	//cout << "b=" << b << endl;

	//const int N = 22;
	//int* pN = const_cast<int*>(&N);
	//*pN = 33;    //const int N放在函数外面,pN不能修改其值
	//cout << N << '\t' << &N << endl;
	//cout << *pN << '\t' << pN << endl;

	//int miles;
	//double kilometers;
	//cout << "Enter distance in miles: " << flush;
	//cin >> miles;
	//kilometers = mi2km(miles);
	//cout << "This is approximately " <<
	//	static_cast<int>(kilometers) << "km." << endl;
	//cout << "Without the cast,kilometers = " << kilometers << endl;
	//double *dp = const_cast<double*>(&m2k);
	//cout << "m2k: " << m2k << endl;
	//cout << "&m2k: " << &m2k << " dp: " << dp << endl;
	//cout << "*dp: " << *dp << endl;
	////*dp = 1.892;
	//cout << "Can we reah this statement? " << endl;

	//const char* str = "hello linux!";
	//STRING s1(str);
	//STRING s2;
	//s2 = s1;
	//s1.show(); s2.show();

	/*STRING s1("hello linux");
	STRING s2(s1);
	STRING s3 = s1;
	s3.show();*/

	/*char *str = NULL;
	str = getmemory(); printf(str);*/

	//cout << "sizeof refclass:" << sizeof refClass << endl;
	//int a = 0;
	//int& ra = a;
	//ra = 20;
	//int b = 30;
	//ra = 50;
	//b = sizeof(ra);
	//cout << "b:" << b << endl;

	//删掉指针，引用可以继续赋值。如果要获得指针值是报错的。因为已经释放了指针指向的内存
	/*int *var = new int(42);
	int &ref = *var;
	delete var;
	ref = 42;
	cout << "ref:" << ref << "\n";*/

	//UData u;

	////给st赋值，观察abcd变化
	//u.st.x = 1;
	//u.st.y = 2;
	//u.st.z = 3;
	//cout << unsigned(u.a) << endl;
	//cout << unsigned(u.b) << endl;
	//cout << u.c << endl;
	//cout << unsigned(u.d) << endl;
	//cout << unsigned(u.st.x) << unsigned(u.st.y) << unsigned(u.st.z) << endl << endl;

	////给a赋值，观察st和bcd变化
	//u.a = 4;
	//cout << unsigned(u.a) << endl;
	//cout << unsigned(u.b) << endl;
	//cout << u.c << endl;
	//cout << unsigned(u.d) << endl;
	//cout << unsigned(u.st.x) << unsigned(u.st.y) << unsigned(u.st.z) << endl;
	//cout << "u.a:" << u.a << endl;
	//cout << "u.b:" << u.b << endl;
	//cout << ENDIAN << endl;
	//struct bs
	//{
	//	unsigned a : 1;
	//	unsigned b : 3;
	//	unsigned c : 4;
	//} bit, *pbit;
	//bit.a = 1;
	//bit.b = 7;
	//bit.c = 15;
	//printf("%d,%d,%d\n", bit.a, bit.b, bit.c);
	//pbit = &bit;
	//pbit->a = 0;
	//pbit->b &= 3;
	//pbit->c |= 1;
	//printf("%d,%d,%d\n", pbit->a, pbit->b, pbit->c);


	//struct node {
	//	int e;
	//	char f;
	//	short int a;
	//	char b;
	//};
	//struct node n;
	//printf("%d\n", sizeof(n));

	//string str_test1;
	//string str_test2 = "为革命我俄国";
	//int value1, value2, value3;
	//value1 = sizeof(str_test1);
	//value2 = sizeof(str_test2);
	//value3 = sizeof(string);
	//cout << "test1:------------>" << str_test1.size() << endl;
	//cout << "test2:---------->" << str_test2.size() << endl;
	//cout << "str_test1占用: " << value1 << "个字节" << endl;
	//cout << "str_test2占用: " << value2 << " 个字节" << endl;
	//cout << "string占用: " << value3 << " 个字节" << endl;
	//string strArr1[] = { "Trend","Micro","soft" };
	//string *p = new string[2];
	//p[0] = "US";
	//p[1] = "CN";
	//cout << "sizeof(strArr1):" << sizeof(strArr1) << endl;
	//cout << "sizeof(p):" << sizeof(p) << endl;
	//cout << "sizeof(string):" << sizeof(string) << endl;
	//for (int i = 0; i < sizeof(strArr1) / sizeof(string); i++)
	//	cout << strArr1[i];
	//for (int i = 0; i < sizeof(*p) * 2 / sizeof(string); i++)
	//	cout << p[i];
	//cout << endl;

	//cout << "CObject:" << sizeof(CObject) << endl;
	//cout << "BaseV:" << sizeof(Basev) << endl;
	//boost::unordered_set<int> s; s.insert(5); s.insert(5);
	//cout << "s.size():" << s.size() << endl;
	//boost::unordered_set<boost::shared_ptr<int> >s2;
	//s2.insert(boost::make_shared<int>(5));
	//s2.insert(boost::make_shared<int>(5));
	//cout << "s.size():" << s.size() << endl;

	//boost::container::vector<int> v{ 1,3,5,9 };
	//BOOST_FOREACH(int &value, v) value += 1;
	//BOOST_FOREACH(int &value, v) std::cout << value << " ";

	//	 std::chrono::time_point<std::chrono::high_resolution_clock> begin = std::chrono::high_resolution_clock::now();
	//	 customSleep();
		/* cout << "p.age:" << p.age << endl;
		 auto end = std::chrono::high_resolution_clock::now();
		 auto diff = end - begin;
		 long long diffCount = std::chrono::duration_cast<std::chrono::milliseconds>(diff).count();
		 cout << "diffCount:" << diffCount << "\n";*/

		 /*
		  int* p = new int(3);
		  delete p; p = 0;
		  delete p;
		  */
		  /*
		  const int b = std::cin.get();      //经测试b的值不固定
		   int *arr = new int(b);
		   cout << "b:" << b << endl;
		   if (b > 0)
		   {
		  //	 for (int i = 0; i < b; i++) { arr[i] = i; }
		  //	 for (int i = 0; i < b; i++) { cout << "arr[" << i << "]:" << arr[i]; }
		   }
		   */
		   /*
		   Dxx *d = NULL;
			d->printA();
			d->printB();
			*/
			/*
			 static int ab=5;
			 int bxx = -10; // 局部变量
			 printf("main:   a=%d,   b=%d,   n=%d\n", ab, bxx, nxx);
		//	 bxx += 4;
			 fucksb();
			 printf("main:   a=%d,   b=%d,   n=%d\n", ab, bxx, nxx);
			 nxx += 10;
			 fucksb();
			 ab += 10;
			 printf("main:   a=%d,   b=%d,   n=%d\n", ab, bxx, nxx);
			 */
			 // A2 a;
			 /*
				double* pvalue = NULL;
			 pvalue = new double;
			 *pvalue = 29494.99;
			 cout << "Value of pvalue: " << *pvalue << endl;
			 delete pvalue;
			 */
			 /*
				 try
			 {
				 throw MyException();
			 }
			 catch (MyException& e)
			 {
				 std::cout << "MyExceptoin caught" << std::endl;
				 std::cout << e.what() << std::endl;
			 }
			 */
			 /*
			int x = 50, y = 0; double z = 0;
			 try {
				 z = division(x, y);
				 cout << z << endl;
			 } catch(const char* msg)
			 {
				 std::cerr << msg << std::endl;
			 }
			 */
			 /*
			int i = 0;
			 int a[3] = { 0 };
			 for (; i <= 3; i++)
			 {
				 a[i] = 0;
				 printf("hello world \n");
			 }
			 */
			 /*
			 ptr_vector<pointggg> vec = ptr_list_of<pointggg>(0)(1)(2)(3)(4);
			 typedef make_set<pointggg>::type set_t;
			 set_t s(vec.begin(), boost::next(vec.begin(), 3));
			 set_t::insert_commit_data idata;
			 assert(!s.insert_check(0, key_compare(), idata).second);
			 assert(s.insert_check(4, key_compare(), idata).second);
			 s.insert_commit(vec[4], idata);
			 assert(s.find(4, key_compare()) != s.end());
			 */
			 /*ptr_vector<pointggg> vec = ptr_list_of<pointggg>(0)(1)(2)(3)(4);
			 typedef make_set<pointggg>::type set_t;
			 set_t s(vec.begin(), vec.end());
			 key_compare kc;
			// assert(s.count(1, kc) == 1); assert(s.find(2, kc)->x == 2); assert(s.find(9, kc) == s.end);
			 assert(s.erase(3, key_compare()) == 1); assert(s.find(pointggg(3)) == s.end());
			 */
			 /*
			std::vector<pointggg*>vec;
			 for (int i = 0; i < 5; ++i) vec.push_back(new pointggg(i, i));
			 typedef make_set<pointggg>::type set_t;         //有序集合侵入式容器,升序
			 set_t s(make_indirect_iterator(vec.begin()), make_indirect_iterator(vec.end()));
			 for (auto a : s)cout << a.x << a.y;
			 s.erase_and_dispose(s.begin(), boost::next(s.begin(), 2), disposer<pointggg>());
			 set_t s2;
			 s2.clone_from(s, cloners(), disposer<pointggg>());
			 assert(s2.begin()->x == 2); assert(s2 == s);
			 */
			 //assert(addressof(s2) == addressof(s2.container_from_iterator(boost::next(s2.begin()))));
			 /*
			 ptr_vector<pointggg> vec = ptr_list_of<pointggg>(0)(1)(2)(3)(4);
			 typedef make_set<pointggg,                                                                      //使用工厂元函数
				 boost::intrusive::compare<std::greater<pointggg>> >::type set_t;  //设置大于比较谓词
			 set_t s;
			 assert(s.empty());
			 assert(s.insert(vec[0]).second);    assert(s.insert(vec[2]).second); assert(!s.insert(vec[2]).second);
			 assert(s.size() == 2); assert(s.count(pointggg()) == 1);
			 s.insert(vec.begin(), vec.end());    //插入一个区间的元素,重复的不插入
			 assert(s.size() == 5);
			 s.erase(s.lower_bound(2), s.upper_bound(2));
			  */
			  /*
			  auto b = VectorGenerator<int>::Generate(1, 2, 3, 4, 5, 6, 7, 8);
			  std::cout << b.size() << ", ";
			  std::cout << b[0].size() << ", ";
			  std::cout << b[0][0].size() << ", ";
			  std::cout << b[0][0][0].size() << ", ";
			  std::cout << b[0][0][0][0].size() << ", ";
			  std::cout << b[0][0][0][0][0].size() << ", ";
			  std::cout << b[0][0][0][0][0][0].size() << ", ";
			  std::cout << b[0][0][0][0][0][0][0].size();
			  */
			  /*
			 ptr_vector<pointgg> vec = ptr_list_of<pointgg>(1)(1)(2)(3)(4);
			  typedef make_list<pointgg>::type list_t;
			  list_t lt;
			  lt.push_back(vec[1]); lt.push_back(vec[3]);
			  assert(vec[1].is_linked()); assert(lt.iterator_to(vec[1]) == lt.begin());
			  assert(vec[3].is_linked());  assert(list_t::s_iterator_to(vec[3]) == boost::prior(lt.end()));
			  list_t &rlt = list_t::container_from_end_iterator(lt.end());
			*/
			//assert(addressof(rlt) == addressof(lt));
			/*
			ptr_vector<pointgg> vec = ptr_list_of<pointgg>(0)(1)(2)(3)(4);
			typedef make_list<pointgg>::type list_t;
			list_t lt(vec.begin(), vec.end());
			list_t lt2;
			assert(lt2.empty());
			lt2.clone_from(lt, cloners(), disposer());
			assert(lt2 == lt);
			*/
			/*
			boost::any a = 5; cout << "a:" << a.type().name() << endl;
			a = std::string("abc"); cout << a.type().raw_name() << endl;
			a = std::set<int>{ 3,1,47,8,6 };
			*/
			// try { int x = boost::any_cast<int>(a); }
			// catch (boost::bad_any_cast&e) { cout << "e:" << e.what() << endl; }
			 /*
			 boost::variant<int, std::string, double> v{ 47 }; cout << "v:" << v << endl;
			 v = std::string("asdf"); cout << "v:" << v << endl;
			 bool b = v.empty(); cout << "b:" << b << endl;
			 */
			 /*
			 boost::optional<int> o;
			 bool b = o.has_value();  cout <<"b:"<<b << endl;
			 o = 47;
			 if (o) std::cout << *o << endl;
			 o.reset(); std::cout << "o.has_value():"<<o.has_value() << endl;
			 */
			 /*
			 using namespace boost::assign;
			 disposers d;
			 ptr_vector<pointgg> pvec = ptr_list_of<pointgg>(0)(1)(2)(3)(4);
			 typedef make_list<pointgg>::type list_t;
			 list_t lt(pvec.begin(), pvec.end());
			 for (auto&a : lt)cout << a.x << " "; cout << endl;
			 lt.pop_front_and_dispose(boost::bind<void>(d, _1, &pvec));
			 for (auto&a : lt)cout << a.x << " "; cout << endl;
			 */
			 // assert(pvec.size() == 1);
			  /*
			  std::vector<pointgg*> vec;
			  for (int i = 0; i < 5; ++i) vec.push_back(new pointgg(i, i));
			  typedef make_list<pointgg>::type list_t;
			  list_t lt(make_indirect_iterator(vec.begin()), make_indirect_iterator(vec.end()));
			  for (auto&a : lt)cout << a.x << " "; cout << endl;
			  disposer d;
			  lt.pop_front_and_dispose(d);
			  for (auto&a : lt)cout << a.x << " "; cout << endl;
			  lt.erase_and_dispose(boost::next(lt.begin()), d);
			  for (auto&a : lt)cout << a.x << " "; cout << endl;
			  lt.remove_and_dispose(pointgg(4, 4), d);
			  for (auto&a : lt)cout << a.x << " "; cout << endl;
			  lt.push_back(*(new pointgg(3, 3)));
			  for (auto&a : lt)cout << a.x << " "; cout << endl;
			  lt.unique_and_dispose(d);
			  for (auto&a : lt)cout << a.x << " "; cout << endl;
			  */
			  /*
			  using namespace boost::assign;
			  ptr_vector<pointgg> vec = ptr_list_of<pointgg>(0)(1)(2)(3)(4);
			  typedef make_list<pointgg>::type list_t;
			  list_t lt(vec.begin(), vec.end());
			  assert(lt.size() == 5);
			  lt.shift_backwards(2);
			  for (auto&a : lt)cout << a.x << " "; cout << endl;
			  lt.shift_forward();
			  for (auto&a : lt)cout << a.x << " "; cout << endl;
			  */
			  /*
			  ptr_vector<pointgg> vec = ptr_list_of<pointgg>(0)(1)(2)(3)(4);
			  typedef make_list<pointgg>::type  list_t;
			  list_t lt;
			  assert(lt.empty());
			  lt.push_back(vec[2]); lt.push_front(vec[3]);
			  assert(!lt.empty() && lt.size() == 2); assert(lt.front().x == 3); assert(lt.back().x == 2);
			  lt.insert(boost::next(lt.begin()), vec.begin(), vec.begin() + 2);
			  for (auto&p : lt) cout << p.x << ","; cout << endl;
			  lt.reverse();
			  for (auto&p : lt) cout << p.x << ","; cout << endl;
			  lt.pop_front();
			  for (auto&p : lt) cout << p.x << ","; cout << endl;
			  assert(lt.size() == 3);
			  lt.insert(boost::prior(lt.end()),vec[4]);
			  for (auto&p : lt) cout << p.x << ","; cout << endl;
			  lt.sort();
			  for (auto&p : lt) cout << p.x << ","; cout << endl;
			  lt.erase(boost::prior(lt.end(), 2));
			  for (auto&p : lt) cout << p.x << ","; cout << endl;
			  */
			  /*
			   using namespace boost::assign;
			  typedef struct tag_S1
			   {
				   char s_szValue[8];
				   char s_cValue;
			   } S1;
			   typedef struct tag_S2
			   {
				   int  s_nValue1;
				   char s_szValue[8];
				   char s_cValue;
				   int  s_nValue2;
			   } S2;
			   typedef struct tag_S3
			   {
				   int  s_nValue;
				   char s_cValue;
			   } S3;
		  #pragma pack(push, 1)
			   typedef struct tag_S4
			   {
				   int  s_nValue;
				   char s_cValue;
			   } S4;
		  #pragma pack(pop)
			   cout << "sizeof(S1):" << sizeof(S1) << endl;
			   cout << "sizeof(S2):" << sizeof(S2) << endl;
			   cout << "sizeof(S3):" << sizeof(S3) << endl;
			   cout << "sizeof(S4):" << sizeof(S4) << endl;
			   */
			   /*std::initializer_list<int> weg;
			   char *p = NULL; cout << "char*p=NULL的sizeof(p):" << sizeof(p) << endl;
			   char *p1 = const_cast<char*>("Hello"); cout << "Hello" << sizeof(p1) << endl;
			   */
			   /*
			   typedef slist_node<void*> node_t;
			   typedef slist_node_traits<void*> node_traits_t;
			   typedef circular_slist_algorithms<node_traits_t> algo;
			   node_t n1, n2;
			   algo::init_header(&n1); assert(algo::count(&n1) == 1);
			   algo::link_after(&n1, &n2); assert(algo::count(&n1) == 2);
			   algo::unlink(&n1); assert(algo::count(&n2) == 1);
			   std::list<int> w;
			   */
			   /* slist<pointxx,        //元素类型
					member_hook<pointxx,        //成员挂钩选项
							 slist_member_hook<>, &pointxx::m_hook> > sx2;                //成员挂钩变量
							 */
							 //typedef member_hook<pointxx, slist_member_hook<>, &pointxx::m_hook> member_option;
							// slist<pointxx, member_option> s1;
							/*
							typedef member_hook<pointxx, slist_member_hook<link_mode<auto_unlink>>, &pointxx::m_hook> member_option;
							 slist<pointxx, member_option,constant_time_size<false>> s1;
							 ptr_vector<pointxx> vec = ptr_list_of<pointxx>()(2, 2)(3, 3);
							 BOOST_REVERSE_FOREACH(auto&p, vec)
							 {
								 s1.push_front(p);
							 }
							 assert(s1.size() == 3);
							 for (pointxx& p : s1)cout << p.x << "-" << p.y << endl;
							// s1.clear();
							 */
							 /*
							 pointxx p1, p2(2, 2), p3(3, 3);
							// slist<pointxx> sl;
							 slist<pointxx,cache_last<true>> sl;
							// sl.push_front(p1); sl.push_front(p2); sl.push_front(p3);
							 sl.push_back(p1); sl.push_back(p2); sl.push_back(p3);
							 assert(sl.size() == 3); sl.reverse();
							 for (auto& p : sl) cout << p.x << "-" << p.y << " ";
							 sl.erase(boost::next(sl.begin()));
							 */
							 /*
							 pointss p1, p2(2, 2), p3(3, 3);
							 p1.set_next(&p2); p2.set_next(&p3);
							 for (pointss::node_ptr p = &p1; p != nullptr; p = p->get_next())
								 cout << p->x << "-" << p->y << " ";
							 p1.set_next(&p3); cout << endl;
							 for (pointss::node_ptr p = &p1; p != nullptr; p = p->get_next())
								 cout << p->x << "-" << p->y << " ";
							 */
							 /*
							 using namespace boost::assign;
							 typedef ptr_vector<item> ptr_vec;
							 ptr_vec vec;
							 ptr_push_back<television>(vec)(); ptr_push_back<computer>(vec)();
							 ptr_vec v2; v2.transfer(v2.begin(), vec.begin(), vec);
							 typedef std::map<int, ptr_vec> wrong_map;
							 wrong_map m; m[1];
							 //v2 = vec.clone();
							 //ptr_vec v3(vec);  //调用clone克隆构造失败
							 */
							 /*
							 ptr_vector<int> v = ptr_list_of<int>(100)(1)(10)(2);
							 typedef ptr_set<int, std::less<int>, boost::view_clone_allocator> set_view_t;
							 set_view_t view(v.begin(), v.end());
							 for (auto& i : view) cout << i << " "; cout << endl;
							 */
							 /*
							 typedef boost::shared_ptr<std::string> ptr_string;
							 ptr_string s1(new std::string("chrono"));
							 ptr_string s2(new std::string("trigger"));
							 assert(indirect_fun<not_equal_to<std::string> >()(s1, s2));
							 cout << indirect_fun<std::plus<std::string> >()(s1, s2) << endl;
							 void* p1 = s1.get(); void* p2 = s2.get();
							 assert((void_ptr_indirect_fun<less<std::string>, std::string>()(p1, p2)));
							 */
							 /*
							using namespace boost::assign;
							ptr_multiset<int> us;
							ptr_insert(us)(3)(5)(7)(13)(3);
							assert(us.count(3) == 2);
							auto r1 = us.equal_range(3);
							assert(!r1.empty()); assert(r1.front() == 3);
							ptr_unordered_multimap<int, int> mm;
							ptr_map_insert(mm)(1, 1)(1, 5)(2, 2)(3, 4);
							auto r2 = mm.equal_range(1);
							for (auto p = r2.begin(); p != r2.end(); ++p) cout << *p->second << " "; cout << endl;
							ptr_set<int> us1;
							ptr_insert(us1)(3)(5)(13)(7)(2);
							assert(*us.lower_bound(4) == 5); assert(*us.upper_bound(4) == 5); assert(*us.upper_bound(5) == 7);
							*/
							/*
							ptr_unordered_set<int> us;
							ptr_insert(us)(3)(5)(7)(13);
							assert(us.find(5) != us.end());   assert(us.find(10) == us.end()); assert(us.count(10) == 0);
							ptr_multimap<int, int> mm;
							ptr_map_insert(mm)(1, 1)(1, 5)(2, 2)(3, 4);
							assert(mm.count(1) == 2); assert(*mm.find(3)->second == 4);
							*/
							/*
							using namespace boost::assign;
							 ptr_vector<int> vec;
							ptr_push_back<int>(vec)(100)(1)(2)(2)(2)(10)(9)(7)(9);
							 vec.erase_if([](int x) { return x == 2; });
							 vec.erase_if(vec.begin(), boost::next(vec.begin(), 4), [](int x) {return x > 1; });
							 for_each(vec.begin(), vec.end(), [](int x) {cout << x << " "; }); cout << endl;
							 ptr_vector<int> vec1;
							 ptr_push_back<int>(vec1)(1)(2)(7)(9)(10);
							 ptr_vector<int> v2;
							 ptr_push_back(v2)(3)(5)(100);
							 for_each(v2.begin(), v2.end(), [](int x) {cout << x << " "; }); cout << endl;
							 v2.merge(vec1);
							 for_each(v2.begin(), v2.end(), [](int x) {cout << x << " "; }); cout << endl;
							 assert(vec1.empty());
							 */
							 /*
							using namespace boost::assign;
							 ptr_deque<int> dq;
							 ptr_push_back(dq)(100)(1)(2)(10)(9);
							 dq.sort(dq.begin(), boost::next(dq.begin(), 3));
							 ptr_list<int> lt(dq.begin(), dq.end());
							 lt.sort(std::greater<int>());
							 ptr_vector<int> vec;
							 ptr_push_back(vec)(100)(1)(2)(2)(2)(10)(9)(7)(9);
							 vec.sort();
							 vec.unique();
							 for_each(vec.begin(), vec.end(), [](int i) {cout << i << " "; }); cout << endl;
							 */
							 /*
							 using namespace boost::assign;
							 ptr_deque<int> dq;
							 ptr_push_back(dq)(1)(2)(9)(10)(20);
							 assert(std::binary_search(dq.begin(), dq.end(), 9));
							 cout << *std::lower_bound(dq.begin(), dq.end(), 3) << endl;
							 cout << *std::upper_bound(dq.begin(), dq.end(), 10) << endl;
							 ptr_vector<int> vec;
							 ptr_push_back(vec)(2)(9)(10);
							 assert(std::includes(dq.begin(), dq.end(), vec.begin(), vec.end()));
							 ptr_deque<int> dqs;
							 ptr_vector<int> vecs;
							 ptr_list<int> lt;
							 std::set_union(dqs.begin(), dqs.end(), vecs.begin(), vecs.end(), ptr_container::ptr_back_inserter(lt));
							 lt.clear();
							 std::set_intersection(dqs.begin(), dqs.end(), vecs.begin(), vecs.end(), ptr_container::ptr_back_inserter(lt));
							 */
							 /*
							 ptr_deque<int> dq;
							 ptr_push_back(dq)(20)(1)(2)(10)(9)(10)(100);
							 std::reverse(dq.begin(), dq.end());
							 std::stable_sort(dq.begin(), dq.end());
							 dq.erase(std::unique(dq.begin(), dq.end(), dq.end()));
							 dq.erase(std::remove(dq.begin(), dq.end(), 20), dq.end());
							 std::random_shuffle(dq.begin(), dq.end());
							 std::partial_sort(dq.begin(), boost::next(dq.begin(), 3), dq.end());
							 */
							 /*
							 ptr_deque<int> dq;
							 ptr_push_back(dq)(1)(2)(10)(10)(9);
							 std::transform(dq.begin(), dq.end(), dq.begin(), [](int x) {return x + 3; });
							 assert(dq.front() == 4);
							 std::replace(dq.begin(), dq.end(), 13, 20);
							 assert(dq[2] == 20);
							 std::fill(dq.begin(), dq.end(), 99);
							 assert(dq.back() == 99);
							 ptr_vector<int> vec;
							 ptr_push_back(vec)(1)(2)(3);
							 std::copy(dq.begin(), boost::next(dq.begin(), 3), vec.begin());
							 assert(vec[1] == 99);
							 ptr_vector<int> vecs(10);
							// std::copy(dq.begin(), dq.end(), vecs.begin());   //会运行期报错
							*/
							/*
							using namespace boost::assign;
						   ptr_deque<int> dq;
							ptr_push_back(dq)(1)(2)(10)(10)(9);
							cout << std::count(dq.begin(), dq.end(), 10) << endl;
							cout << std::count_if(dq.begin(), dq.end(), [](int x) {return x > 8; }) << endl;
							cout << *std::min_element(dq.begin(), dq.end()) << endl;
							cout << *std::max_element(dq.begin(), dq.end()) << endl;
							cout << *std::find(dq.begin(), dq.end(), 2);
							cout << std::accumulate(dq.begin(), dq.end(), 0) << endl;
							ptr_list<int> lt(dq.begin(), dq.end());
							assert(std::equal(dq.begin(), dq.end(), lt.begin()));
							*/
							/* ptr_vector<int> v = ptr_list_of<int>()(1)(2);
							 ptr_deque<complex<double> > dq = ptr_list_of<complex<double> >(1, 2)(0.618, 1.732);
							 ptr_set<std::string> s;
							 s = ptr_list_of<std::string>()("abc")("xyz").to_container(s);
							*/
							/*
							using namespace boost::assign;
							ptr_vector<int> v;
							ptr_push_back(v)()(1)(2)(100);
							assert(v.size() == 4);
							*/
							// ptr_push_front(lt)(1, 2)(0.618, 1.732);
							 /*
							 std::system("chcp 65001");
							 typedef ptr_unordered_map<int, std::string> ptr_map_t;
							 ptr_map_t m;
							 int a = 1;
							 m.insert(m.begin(), a, new std::string("one"));
							 m.insert(m.end(), 10, auto_ptr<std::string>(new std::string("ten")));
							 m[3] = "three";
							 assert(m.at(3) == "three");
							 assert(m[10] == "ten");
							 for (const auto& i : m)  cout << *i->second << ",";
							 */
							 /*
							 typedef ptr_map<int, std::string> ptr_map_t;
							 ptr_map_t m;
							 int a = 1;
							 m.insert(a, new std::string("one"));
							 m.insert(10, auto_ptr<std::string>(new std::string("ten")));
							 assert(m.size() == 2); assert(m[10] == "ten");
							 m.replace(m.begin(), new std::string("neo"));
							 m[3] = "threee";
							// assert(m.at(1) == "neo" && m.at(3) == "three");
							 for (const auto&i : m)  cout << *i->second << ",";
							 typedef ptr_map<int, nullable<std::string> > ptr_map_t1;
							 ptr_map_t1 m1;
							 m1.insert(10, auto_ptr<std::string>(new std::string("ten")));
							 m1.at(10) = "tenten";
							 */
							 // m1[3] = "three";

							  /*
							  typedef ptr_unordered_set<std::string> ptr_set_t ;
							  ptr_set_t s;   assert(s.empty());
							  assert(s.insert(new std::string("king")).second);
							  assert(s.insert(new std::string("kong")).second);
							  assert(s.size() == 2);
							  assert(!s.insert(new std::string("king")).second);
							  assert(s.size() == 2);
							  ptr_set_t s2;
							  s2.transfer(s);
							  assert(s.empty() && s2.size() == 2);
							  */
							  /*
							  on_free_store *p = new on_free_store;
							  on_free_store::free(p);
							  no_free_store loc;
							  */
							  /*
							  typedef ptr_set<std::string> ptr_set_t;
							  ptr_set_t s;
							  assert(s.empty()); assert(s.insert(new std::string("fire")).second);
							  assert(s.insert(new std::string("emblem")).second); assert(s.size() == 2);
							  assert(!s.insert(new std::string("fire")).second); assert(s.size() == 2);
							  auto ap = s.release(); assert(s.empty());
							  char *P = static_cast<char*>((void*)0);
							  */
							  /*
							  typedef ptr_vector<item> ptr_vec;
							  ptr_vec vec;
							  vec.push_back(new television);
							  vec.push_back(new computer);
							  vec.push_back(new null_item);
							  for (auto& i : vec) i.print(); cout << endl << endl;
							  vec.replace(2, new computer);
							  vec[2].print();
							  */
							  /*
							  typedef ptr_vector<nullable<int>> ptr_null_vec;
							  ptr_null_vec vec;
							  vec.push_back(nullptr);
							  vec.push_back(new int(100));
							  assert(vec.is_null(0)); assert(!vec.is_null(1));
							  for (auto i = vec.begin(); i != vec.end(); ++i)
								  if (!boost::is_null(i)) cout << *i << " ";
							  */
							  /*
							  typedef ptr_vector<std::string> ptr_vec;
							  ptr_vec vec(10);
							  assert(vec.empty()); assert(vec.capacity() == 10);
							  vec.push_back(new std::string("star")); assert(vec[0] == "star");
							  vec.replace(0, new std::string("fox")); assert(vec[0] == "fox");
							  auto arr = new std::string*[2];
							  arr[0] = new std::string("123"); arr[1] = new std::string("abc");
							  vec.transfer(vec.begin(), arr, 2);
							  assert(vec.size() == 3); auto p = vec.c_array(); assert(*p[0] == "123" && *p[2] == "fox");
							  */
							  /*
							  typedef ptr_vector<std::string> ptr_vec;
							  ptr_vec vec;
							  vec.push_back(new std::string("123")); vec.push_back(new std::string("abc"));
							  assert(vec.size() == 2);
							  auto pos = vec.insert(vec.begin(), new std::string("000"));
							  assert(vec.size() == 3); assert(pos == vec.begin());
							  ++pos; pos = vec.erase(pos); assert(vec.size() == 2); assert(*pos == "abc");
							  auto p = vec.release(pos);
							  assert(*p == "abc"); assert(vec.size() == 1);
							  ptr_vec vec2;
							  vec2 = vec.clone(); assert(vec.size() == 1); assert(vec2.size() == 1);
							  */
							  /*
							 typedef ptr_vector<std::string> ptr_vec;
							  ptr_vec vec;assert(vec.empty());
							  vec.push_back(new std::string("123"));
							  vec.push_back(new std::string("abc"));
							  assert(vec.size() == 2);
							  ptr_vec vec2(vec);
							  assert(vec2.size() == 2); assert(vec.size() == 2);
							  auto apv = vec.release();assert(vec.empty());
							  ptr_vec vec3(apv); assert(vec3.size() == 2);
							  ptr_vec vec4, vec5;
							  vec4 = vec2;
							  assert(vec2.size() == 2);assert(vec4.size() == 2);
							  vec5 = vec3.release();assert(vec3.empty()); assert(vec5.size() == 2);
							  */
							  /*
							  typedef ptr_vector<std::string> ptr_vec;
							  assert((boost::is_same<ptr_vec::value_type, std::string*>::value));
							  assert((boost::is_same<ptr_vec::pointer, std::string*>::value));
							  assert((boost::is_same<ptr_vec::reference,std::string&>::value));
							  */
							  /*
							  typedef ptr_vector<std::string> ptr_vec;
							  ptr_vec vec;
							  std::auto_ptr<std::string> ap(new std::string("123"));
							  vec.push_back(ap); assert(ap.get() == 0);
							  vec.push_back(std::auto_ptr<std::string>(new std::string("abc")));
							  vec.push_back(new std::string("xyz"));
							  assert(vec.size() == 3);
							  ptr_vec::auto_type p = vec.release(vec.begin());
							  assert(vec.size() == 2);
							  assert(p && *p == "123");
							  std::string *sp = p.release();
							  assert(!p); delete sp;
							  ptr_vec vec2;
							  vec2.transfer(vec2.end(), vec);
							  assert(vec.empty());
							  assert(vec2.size() == 2);
							  */
							  /*
							  typedef ptr_vector<std::string> ptr_vec;
							  ptr_vec vec;
							  vec.push_back(new std::string("123"));
							  vec.push_back(new std::string("abc"));
							  assert(!vec.empty());  assert(vec.size() == 2);
							  assert(vec[0] == "123"); vec[1] = "def";
							  assert(vec[1] == "def");
							  auto iter = vec.begin(); assert(iter->length() == 3);
							  vec.clear(); assert(vec.empty());
							   */
							   /*
							  int a = 10, b = 20;
							   auto pi = factory<int*>()(a);
							   auto ps = factory<string*>()("char * lvaue");
							   auto pp = factory<std::pair<int, int>*>()(a, b);
							   auto up = factory<unique_ptr<int> >()();
							   auto sp = factory<boost::shared_ptr<string> >()();
							   */
							   // auto v = factory<boost::scoped_ptr<int> >()();
							   // auto pi2 = factory<int*>()(10);
							   // auto pp2 = factory<pair<int, int>*>()(1, 2);
								// auto p = boost::bind(factory<int *>(), 10)();

								/*
								int n = Conn(123, 456);
								const char*str = Conn("asdf", "xbm");
								char a = ToChar(1);
								char b = ToChar(123);
							   const  char * sb = ToString(123132);
							   cout << "n" << n << "\n str:" << str << "\n a:" << a << "\n b:" << b << "\n sb:" << sb << endl;
							   */
							   /*
							   dem_class d;
							   boost::mem_fn(&dem_class::print)(d);
							   dem_class *p = &d;
							   boost::mem_fn(&dem_class::hello)(p, "hello");
							   std::unique_ptr<dem_class> up(new dem_class(100));
							   boost::mem_fn(&dem_class::print)(up);
							   assert(up.get() != 0);
							   boost::shared_ptr<dem_class> sp(new dem_class);
							   boost::mem_fn(&dem_class::hello)(sp, "world");
							   std::vector<dem_class>v(10);
							   std::for_each(v.begin(), v.end(), boost::mem_fn(&dem_class::print));
							   dem_class xd(1);
							   cout << boost::mem_fn(&dem_class::x)(d) << endl;
							   dem_class gw;
							   boost::bind(&dem_class::print, _1)(gw);
							   boost::bind(&dem_class::hello, _1, "hello")(&gw);
							   std::vector<dem_class> vb(10);
							   std::for_each(vb.begin(), vb.end(), boost::bind(&dem_class::hello, _1, "world"));
							   */
							   /*
							  cout << boost::hash<int>()(0x2000) << endl;
							   cout << boost::hash<double>()(1.732) << endl;
							   cout << boost::hash<const char*>()("string") << endl;
							   cout << boost::hash<std::string>()("string") << endl;
							   std::vector<int>v(12);
							   cout << boost::hash<decltype(v)>()(v) << endl;
							   std::map<int, std::string>m;
							   cout << boost::hash<decltype(m)>()(m);
							   std::array<int, 5> ar;
							   cout << boost::hash<decltype(ar)>()(ar) << endl;
							   */
							   //	 std::stack<int>s;
							   //	 cout << boost::hash<decltype(s)>()(s) << endl;
									/*
									typedef any_range<int, boost::single_pass_traversal_tag> range_type;
									std::list<int> l = { 1,3,5,7,9 };
									range_type r(l);
									for (const auto&x : r) cout << x << ",";
									std::vector<int> v = { 2,4,6,8,0 };
									r = v;
									for (const auto&x : r) cout << x << ",";
									*/
									/*
									//std::string str = "abcde";
									std::string str = "xyz";
									std::vector<int>v = { 5,4,3,2,1 };
									auto r = combine(str, v);
									for (const auto&x : r)
									{
										auto& c = get<0>(x);
										auto& i = get<1>(x);
										cout << "(" << c << "," << i << ")";
									}
									*/
									/*
									char a[] = "iterator range";
									auto r = boost::find_first(a, " ");
									assert(r.front() == ' ');
									auto r2 = make_iterator_range(a, r.begin());
									assert(copy_range<std::string>(r2) == "iterator");
								   */
								   /*
								  std::vector<int> v(10);
								   auto r1 = make_iterator_range(v);
								   assert(has_range_iterator<decltype(r1)>::value);
								   int a[10];
								   auto r2 = make_iterator_range(a, a + 5);
								   auto r3 = make_iterator_range(a, 1, -1);
								   assert(r3.size() == 8);
								   */
								   /*
								   std::vector<int> v(10);
								   typedef boost::iterator_range<std::vector<int>::iterator> vec_range;
								   vec_range r1(v);
								   assert(!r1.empty());
								   assert(r1.size() == 10);
								   int a[10];
								   typedef boost::iterator_range<int*> int_range;
								   int_range r2(a, a + 5);
								   assert(r2.size() == 5);
								   */
								   /*
								  typedef counting_iterator<int> ci_t;
								   std::vector<int>v;
								   std::copy(ci_t(0), ci_t(10), back_inserter(v));
								   auto f = boost::bind(std::plus<int>(), _1, 5);
								   std::copy(make_transform_iterator(v.begin(), f),
									   make_transform_iterator(v.end(), f), ostream_iterator<int>(cout, " ")); cout << "隔开" << endl;
								   std::transform(v.begin(), v.end(), ostream_iterator<int>(cout, " "), f); cout << endl;
								   char s[] = "abcdefg";
								   int idx[] = { 6,0,2,2,4 };
								   std::copy(make_permutation_iterator(s, idx),
									   make_permutation_iterator(s, idx + 5),
									   ostream_iterator<char>(cout, " "));
								   assert(has_range_iterator<std::vector<int>>::value);
								   assert(has_range_iterator<std::string>::value);
								   assert(!has_range_iterator<std::stack<int>>::value);
								   typedef boost::array<char, 5> array_t;
								   assert(has_range_iterator<array_t>::value);
								   typedef std::pair<int*, int*> pair_t;
								   assert(has_range_iterator<pair_t>::value);
								   char agwe[] = "range"; assert(has_range_iterator<decltype(agwe)>::value);
								   assert(has_range_iterator<char*>::value);
								   std::vector<int> wb{ 3,4,8,1,7 };
								   std::sort(boost::begin(wb), boost::end(wb));
								   for (auto a : wb)cout << "a:" << a << endl;
								   */
								   /*
								   char s[] = "1234abcd";
								   std::vector<unsigned char> v;
								   static to_hex h(v);
								  // function_output_iterator<to_hex> foi(h);
								   //std::copy(s, s + 8, foi);
								  // assert(v.size() == 4);
								   std::copy(s, s + 8, make_function_output_iterator(to_hex(v)));
								   */
								   /*
								   rand48 rng;
								   std::copy(make_function_input_iterator(rng, 0),
									   make_function_input_iterator(rng, 5),
									   std::ostream_iterator<int>(cout, "\n")
								   );
								   */
								   /*
								   counting_iterator<int> i(100);
								   assert(*i++ == 100); assert(*i == 101); assert(*++i == 102);
								   std::vector<int> v;
								   std::copy(make_counting_iterator(0), make_counting_iterator(10), std::back_inserter(v));
								   typedef counting_iterator<rand_int<rand48>, boost::single_pass_traversal_tag, int> RandIter;
								   rand48 r;
								   rand_int<rand48> r1(r, 0), r2(r, 10);
								   RandIter first(r1), last(r2);
								   std::vector<int>v1;
								   std::copy(first, last, std::back_inserter(v1));
								   assert(v1.size() == 10);
								  */
								  /*
								  std::vector<int*> v = { new int(1),new int(2) };
								  for (auto pos = v.begin(); pos != v.end(); ++pos) cout << **pos << ","; cout << endl;
								  auto start = make_indirect_iterator(v.begin());
								  auto finish = make_indirect_iterator(v.end());
								  for (; start != finish;) cout << *start++ << ","; cout << endl;
								  */
								  /*
								 auto sv = boost::make_shared<std::vector<int> >(10);
								  typedef boost::shared_container_iterator<std::vector<int>> sci_t;
								  sci_t first(sv->begin(), sv), last(sv->end(), sv);
								  std::fill(first, last, 9);
								  for_each(first, last, [](int&c) {cout << c << ','; });
								  std::fill(
									  boost::make_shared_container_iterator(sv->begin(), sv),
									  boost::make_shared_container_iterator(sv->end(), sv), 29);
								  for_each(sv->begin(), sv->end(), [](int&c) {cout << c << ','; });
								  random::rand48 rng;
								  auto iter = boost::make_generator_iterator(rng);
								  for (int i = 0; i < 5; ++i) cout << *++iter << ","; cout << endl;
								  char s[] = "hello iterator";
								  std::copy(boost::iterators::make_reverse_iterator(s + std::char_traits<char>::length(s)),
									  boost::iterators::make_reverse_iterator(s), std::ostream_iterator<char>(cout));
								  */
								  /*
								  std::vector<int> a = { 1,2,3 };
								  typedef delta_iterator<decltype(a.cbegin())> delta_iter;
								  delta_iter start(a.begin()), finish(a.end());
								  std::copy(start, finish, std::ostream_iterator<int>(cout, ","));
								  */
								  /*
								 std::vector<int> v{ 1,2,3,4,5 };
								  vs_iterator<int> vsi(v), vsi_end(v, v.size());
								  *vsi = 9;
								  std::copy(vsi, vsi_end, std::ostream_iterator<int>(cout, ","));
								  */
								  /*
								 boost::container::vector<int> v1, v2;
								  boost::assign::push_back(v1), 1, 2, 3, 4, 5;
								  std::copy(v1.begin(), v1.end(), std::back_inserter(v2));
								  assert(v2.size() == 5);
								  std::copy(v2.begin(), v2.end(), std::ostream_iterator<int>(cout));
								  std::list<int> l{ 1,2,3,4 }; auto p1 = l.begin(), p2 = l.end();
								  assert(*(next(p1, 1)) == 2); assert(*(next(p2, -1)) == 4); assert(*(next(p2, -2)) == 3);
								  typedef int* I;
								  assert((boost::is_same<iterator_value<I>::type, int>::value));
								  assert((boost::is_same<iterator_reference<I>::type, int&>::value));
								  assert((boost::is_same<iterator_category<I>::type, std::random_access_iterator_tag>::value));
								  typedef std::list<int>::const_iterator II;
								  assert((boost::is_same<iterator_value<II>::type, int>::value));
								  assert((boost::is_same<iterator_reference<II>::type, const int&>::value));
								  assert((boost::is_same<iterator_category<II>::type, std::bidirectional_iterator_tag>::value));
								  */
								  /*
								  assert((boost::is_same<pointee<int*>::type, int>::value));
								  assert((boost::is_same<pointee<std::unique_ptr<int> >::type, int>::value));
								  assert((boost::is_same<pointee<std::string::iterator>::type, char>::value));
								  typedef std::shared_ptr<int> P;
								  P p(new int(10));
								  pointee<P>::type v = *p;
								  assert(v == 10);
								  assert((boost::is_same<indirect_reference<int*>::type, int&>::value));
								  assert((boost::is_same<indirect_reference<std::unique_ptr<int> >::type, int&>::value));
								  assert((boost::is_same<indirect_reference<std::string::iterator>::type, char&>::value));
								  assert((boost::is_same<int*, pointer_to_other<void*, int>::type>::value));
								  assert((boost::is_same<std::string*, pointer_to_other<void*, std::string>::type>::value));
								  assert((boost::is_same<boost::scoped_ptr<int>, pointer_to_other<boost::scoped_ptr<float>, int>::type>::value));
								  assert((boost::is_same<boost::shared_ptr<int>, pointer_to_other<boost::shared_ptr<std::string>, int>::type>::value));
								  assert((!boost::is_same<std::unique_ptr<int>, pointer_to_other<std::unique_ptr<char>, int>::type>::value));
								  assert((boost::is_same<std::unique_ptr<int>, pointer_to_other<std::unique_ptr<char, default_delete<int>>, int>::type>::value));
								  boost::scoped_ptr<int> px1(new int(10)), px2(new int(20));
								  assert(!equal_pointees(px1, px2));   assert(less_pointees(px1, px2));
								  px2.reset(); assert(!less_pointees(px1, px2));
								  boost::optional<std::string> op1, op2;
								  assert(equal_pointees(op1, op2)); op2 = "hello"; assert(less_pointees(op1, op2));
								  assert((boost::is_same<boost::pointer_traits<int*>::pointer, int*>::value));
								  assert((boost::is_same<boost::pointer_traits<int*>::element_type, int>::value));
								  assert((boost::is_same<boost::pointer_traits<int*>::rebind<char>, pointer_to_other<int*, char>::type>::value));
								  typedef boost::shared_ptr<std::string> sptr;
								  assert((boost::is_same<boost::pointer_traits<sptr>::element_type, pointee<sptr>::type>::value));
								  assert((boost::is_same<boost::pointer_traits<sptr>::difference_type, ptrdiff_t>::value));
								  assert((boost::is_same<boost::pointer_traits<sptr>::rebind<char>, pointer_to_other<sptr, char>::type>::value));
								  typedef std::unique_ptr<char> char_ptr;
								  typedef std::unique_ptr<int> int_ptr;
								  typedef std::pointer_traits<char_ptr>::rebind<int> new_ptr;
								  assert((!std::is_same<int_ptr, new_ptr>::value));
								  */
								  /*
								  using namespace boost::numeric;
								  cout << numeric_limits<short>::min() << endl;
								  cout << numeric_limits<short>::max() << endl;
								  cout << numeric_limits<unsigned short>::min() << endl;
								  cout << numeric_limits<unsigned short>::max() << endl;
								  cout << numeric_limits<float>::min() << endl;
								  cout << numeric_limits<float>::max() << endl;
								  cout << bounds<short>::lowest() << endl;
								  cout << bounds<short>::highest() << endl;
								  cout << bounds<short>::smallest() << endl;
								  cout << bounds<float>::lowest() << endl;
								  cout << bounds<float>::highest() << endl;
								  cout << bounds<float>::smallest() << endl;
								  assert(bounds<short>::lowest() == numeric_limits<short>::min());
								  assert(bounds<float>::lowest() == -numeric_limits<float>::max());
								  short s = bounds<short>::highest();
								  int i = numeric_cast<int>(s);
								  assert(i == s);
								  try
								  {
									 // char c = numeric_cast<char>(s);
									  char c =static_cast<char>(s);
									  cout << "c:" << c << endl;
								  }
								  catch (const std::bad_cast&e)
								  {
									  cout << e.what() << endl;
								  }
								  */
								  /*
								  int i; std::string s;
								  assert(&i == boost::addressof(i)); assert(&s == boost::addressof(s));
								  int a[10]; assert(&a == boost::addressof(a));
								  assert(a + 1 == boost::addressof(a[1]));
								  assert(&printf == boost::addressof(printf));
								  dont_do_this d;
								  assert(&d != (size_t)boost::addressof(d));
								  assert(&d == (size_t)&d.y);
								  dont_do_this *p = boost::addressof(d);
								  p->x = 1;
								  danger_class dd;
								  cout << boost::addressof(dd);
								  */
								  /*
								  std::vector<demo_classb*>v; v.push_back(new demo_classb); v.push_back(new demo_classb);
								  for_each(v.begin(), v.end(), boost::checked_deleter<demo_classb>());
								  auto p = new int(10); my_checked_deleter()(p);
								  std::vector<int*> vx; vx.push_back(new int(10));
								  for_each(vx.begin(), vx.end(), my_checked_deleter());
								  cout <<"ndem1:" << sizeof(dem1) << endl;
								  auto pxx = new int[2][2];
								  my_checked_delete(pxx);
								  auto gw = (demg*)(1996);
								 // boost::checked_delete(gw);
								  */
								  /*
								  auto p1 = new int(10); auto p2 = new int[10];
								   checked_delete(p1); checked_array_delete(p2);
								   auto px1 = new demo_classb; auto px2 = new demo_classb[10];
								   checked_delete(px1); cout << "隔开" << endl; checked_array_delete(px2);
								   */
								   /*
								  static_assert(boost::integral_constant<int, 10>::value == 10,"");
								   std::map<int, int>m;
								   BOOST_FOREACH(BOOST_IDENTITY_TYPE((std::pair<int, int>)) x, m);
								   BOOST_FOREACH(function_traits<void(std::pair<int, int>)>::arg1_type x, m);
								   cout << "empty1:" << sizeof(empty1) << endl;
								   cout << "empty2:" << sizeof(empty2) << endl;
								   cout << "empty3:" << sizeof(empty3) << endl;
								   cout << "empty4:" << sizeof(empty4) << endl;
								   typedef boost::compressed_pair<int, std::string> pair_type;
								   pair_type cp1; pair_type cp2(10);
								   pair_type cp3("hello"); pair_type cp4(20, "pair");
								   pair_type cp5(cp2); cp1 = cp4;
								   int i = 313; std::string s; boost::compressed_pair<int&, std::string&> cp23(i, s);
								   boost::compressed_pair<int, std::string> cp;
								   assert(cp.second().empty());
								   cp.first() = 10; cp.second() = "hello";
								   assert(10 == cp.first()); assert(!cp.second().empty());
								   assert(sizeof(boost::compressed_pair<int, empty1>) == sizeof(int));
								   assert(sizeof(std::pair<int, empty1>) > sizeof(int));
								   cout << "std::pair<int,empty1>:" << sizeof(std::pair<int, empty1>) << endl;
								   cout << "compressed_pair:" << sizeof(boost::compressed_pair<empty1, empty2>) << endl;
								   cout << ":" << sizeof(boost::compressed_pair<empty1, empty2>) << endl;
								   cout << "w:" << sizeof(std::pair<empty1, empty2>) << endl;
								   auto cp1x = make_compressed_pair(10, "char*");
								   auto cp2x = make_compressed_pair(3.14, empty1());
								   cout << "cp1x.first:" << cp1x.first() << "\ncp1x.second:" << cp1x.second() << endl;
								   cout << "cp2x.first:" << cp2x.first() << endl;
								   printf("cp2x.second:", cp2x.second());
								   boost::compressed_pair<int, double> cpxb1(10, 0), cpxb2(10, 0);
								   assert(cpxb1 == cpxb2);
								   boost::compressed_pair<int, empty1> cpxb3(0), cpxb4(10);
								   assert(cpxb3 != cpxb4);
								   boost::compressed_pair<empty1, empty2> cpxb5, cpxb6;
								   assert(cpxb5 == cpxb6);
								   */
								   /*
								  auto x = 2_kb;
								   assert(x == 2 * 1024);
							  //	 auto c = "1.414+1.414i"_c;
								  // cout << "c:" << c << endl;
								   auto t1 = 2min; auto t2 = 30s; auto s = "std string type"s;
								   cout << "t1:" << t1.count()<< "\nt2:" << t2.count() << "\ns:" << s << endl;
								   */
								   /*
								  boost::asio::io_service io;
								   boost::asio::ip::tcp::socket sock(io);
								   boost::asio::ip::tcp::endpoint ep(boost::asio::ip::address::from_string("219.239.33.104"), 80);
								   sock.async_connect(ep, [](const boost::system::error_code&) {});
								   boost::asio::steady_timer t(io, 500_ms);
								   t.async_wait(
									   [&](const boost::system::error_code&) {
									   cout << "time expired" << endl;
									   sock.close();
								   });
								   io.run();
								  */
								  /*
								 typedef boost::asio::ip::tcp::acceptor acceptor_type;
								  typedef boost::asio::ip::tcp::endpoint endpoint_type;
								  typedef boost::asio::ip::tcp::socket socket_type;
								  boost::asio::io_service io;
								  boost::asio::spawn(io,[&](boost::asio::yield_context yield){
									  acceptor_type acceptor(io, endpoint_type(boost::asio::ip::tcp::v4(), 6688));
									  for (; ;)
									  {
										  socket_type sock(io);
										  boost::system::error_code ec;
										  acceptor.async_accept(sock, yield[ec]);
										  if (ec) return;
										  auto len = sock.async_write_some(boost::asio::buffer("hello coroutine"), yield);
										  cout << "send " << len << " bytes" << endl;
									  }
								  });
								  io.run();
								  */
								  /*
								boost::asio::io_service io;
								  boost::asio::ip::tcp::socket sock(io);
								 resolve_connect(sock, "www.gzzb.gd.cn", 80);
								  cout << sock.remote_endpoint() << endl;
								 */
								 /*
								 boost::asio::ip::address addr;
								 addr = addr.from_string("127.0.0.1");
								 assert(addr.is_v4());
								 cout << addr.to_string() << endl;
								 addr = addr.from_string("ab::12:34:56");
								 assert(addr.is_v6());
								 cout << addr.to_string() << endl;
								 boost::asio::ip::address add;
								 add = add.from_string("127.0.0.1");
								 boost::asio::ip::tcp::endpoint ep(add, 6688);
								 assert(ep.address() == add);
								 assert(ep.port() == 6688);
								 boost::shared_ptr<int> wge;
								*/
								/*
							   boost::asio::io_service io;
								timer_with_func t1(io, 6, [] {cout << "hello timer1" << endl; });
								timer_with_func t2(io, 6, [] {cout << "hello timer2" << endl; });
								io.run();
								*/
								/*
								boost::asio::io_service io;
								boost::asio::steady_timer t(io, 500_ms);
								t.async_wait([](const boost::system::error_code&ec) {
									cout << "hello asio" << endl;
								});
								io.run();
								*/
								/*
								boost::asio::io_service io;
								boost::asio::steady_timer t(io, 500_ms);
								printf("", t.expires_at());
								printf("", t.expires_from_now());
								t.wait();
								cout << "hello asio" << endl;
								*/

								/*
							   using namespace boost::asio;
								using namespace boost::system;
								boost::asio::io_service io;
								boost::asio::signal_set sig(io, SIGINT);
								auto handler1 = [](const boost::system::error_code& ec, int n) {
									if (ec) {
										cout << ec.message() << endl; return;
									}
									if (n != SIGINT) return;
									cout << "handler recv= " << n << endl;
									cout << "do something" << endl;
								};
								sig.async_wait(handler1);
								io.run();
								cout << "io stoped" << endl;
								*/
								/*
							   boost::asio::io_service we;
								boost::asio::io_service::strand wrg;
								boost::asio::mutable_buffer sd;
								boost::asio::mutable_buffers_1 we;
								*/
								/*
								boost::thread_specific_ptr<int> pi;
								auto func = [&] {
									pi.reset(new int());
									++(*pi);
									cout << "thread v=" << *pi << endl;
								};
								boost::async(func);
								boost::async(func);
								boost::this_thread::sleep_for(100_ms);
								*/
								/*
								boost::atomic<int> x;
								boost::barrier br(5);
								auto func = [&]() {
									cout << "thread" << ++x << " arrived barrier." << endl;
									br.wait();
									cout << "thread run." << endl;
								};
								boost::thread_group tg;
								for (int i = 0; i < 5; ++i) tg.create_thread(func);
								tg.join_all();
								*/
								/*
								auto func = [](int n, boost::promise<int>& p) {p.set_value(fab(n)); };
								boost::promise<int> p;
								boost::thread(func, 10, boost::ref(p)).detach();
								auto f = p.get_future();
								cout << f.get() << endl;
								*/
								/*
								auto f5 = boost::async(fab, 5).share();
								auto func = [](decltype(f5) f) { cout << "[" << f.get() << "]"; };
								boost::async(func, f5);
								boost::async(func, f5);
								boost::this_thread::sleep_for(100_ms);
								assert(f5.valid());
								*/
								/*
							   std::vector<boost::future<int>> vec;
								for (int i = 0; i < 5; ++i) vec.push_back(boost::async(fab, i + 10));
								boost::wait_for_all(vec.begin(), vec.end());
								for (auto& x : vec) cout << x.get() << ',';
							   // boost::wait_for_any(vec[1], vec[2]);
							   // for (auto& x : vec) if (x.valid()) cout << x.get() << endl;
								*/
								/*
								 auto f5 = boost::async(fab, 5);
								 auto f7 = boost::async(boost::launch::async, fab, 7);
								 cout <<"f5:"<< f5.get() <<"f7:"<<f7.get() << endl;
								 assert(!f5.valid() && !f7.valid());
								 auto f10 = boost::async(fab, 10);
								 auto s = f10.wait_for(100_ms);
								 if (f10.valid())
								 {
									 assert(s == boost::future_status::ready);
									 cout << f10.get() << endl;
								 }
								 */
								 /*
								 rw_data d;
								 boost::thread_group pool;
								 pool.create_thread(boost::bind(writer, boost::ref(d)));
								 pool.create_thread(boost::bind(writer, boost::ref(d)));
								 pool.create_thread(boost::bind(reader, boost::ref(d)));
								 pool.create_thread(boost::bind(reader, boost::ref(d)));
								 pool.create_thread(boost::bind(reader, boost::ref(d)));
								 pool.create_thread(boost::bind(reader, boost::ref(d)));
								 pool.join_all();
								 */
								 /*
								 boost::thread_group tg;
								 tg.create_thread(boost::bind(producer, 20));
								 tg.create_thread(boost::bind(consumer, 10));
								 tg.create_thread(boost::bind(consumer, 10));
								 tg.join_all();
								 */
								 /*
								 (boost::scoped_thread<>(call_func));
								 (boost::scoped_thread<>(call_func));
								*/
								/*
								cout << BOOST_VERSION << endl;
								cout << BOOST_LIB_VERSION << endl;
								cout << BOOST_PLATFORM << endl;
								cout << BOOST_COMPILER << endl;
								cout << BOOST_STDLIB << endl;
								*/
								/*
								int* p1 = nullptr;
								std::vector<int>* p2 = nullptr;
								assert(!p1 && !p2);
								assert(p1 == nullptr);
								typedef decltype(nullptr) nullptr_t;
								nullptr_t nil;
								double* p3 = nullptr;
								assert(nil == nullptr);
								*/
								/*
								decltype(auto) x = 6;
								decltype(auto) y = 7L;
								decltype(auto) z = x + y;
								*/
								/*
							   volatile auto *p = new dem;
								decltype(p->x) d5 = 42;
								decltype((p->x)) d6 = p->x;
							   // decltype(p->x)& d7 = const_cast<decltype(p->x)&>(p->x);
							   // decltype(p->x)& d7 = const_cast<decltype(d5)&>(p->x);
								decltype(p->x)& d7 = const_cast<decltype(d5)&>(d6);
								*/
								/*
							   int x = 10;
								print12(x);
								print12(std::move(x));
								*/
								/*
								int x = 0;
								int & r1 = ++x;
								int && r2 = x++;
								const int& r3 = x++;
								const int&& r4 = x++;
								cout << "r1:" << r1 << "\nr2:" << r2 << "\nr3:" << r3 << "\nr4:" << r4 << endl;
								std::map<std::string, std::string>m;
								m.emplace("me", "prime");
								*/
								/* int* p = &++x;
								 ++x = 10;
								 p = &x;
								 */
								 /*
								boost::thread_group tg;
								 tg.create_thread(boost::bind(dummy, 100));
								 tg.create_thread(boost::bind(dummy, 200));
								 tg.join_all();
								 */
								 /*
								boost::thread t(to_interrupts, 10);
								 t.interrupt();
								 t.join();
								 */
								 /*
								 boost::thread t(to_interrupt, 10);
								 boost::this_thread::sleep_for(2_s);
								 t.interrupt();
								 assert(t.interruption_requested());
								 t.join();
								 */
								 /*
								 boost::scoped_thread<boost::detach> t1(dummy, 100);
								 boost::scoped_thread<> t2(dummy, 200);
								 */
								 /*
								boost::thread t1(dummy, 200);
								 boost::thread t2(dummy, 300);
								 boost::thread_guard<boost::detach> g1(t1);
								 boost::thread_guard<> g2(t2);
								 */
								 /*
								 boost::thread t1(dummy, 100);
								  t1.detach();
								  assert(!t1.joinable());
								  */
								  // boost::thread(dummy, 100).detach();
								   /*
								  boost::thread t1(boost::bind(dummy, 100));
								   boost::thread t2([] {dummy(500); });
								   t1.try_join_for(100_ms);
								   t2.join();
								   */
								   /*
								   boost::thread t1(dummy, 100);
								   boost::thread t2(dummy, 500);
								   boost::this_thread::sleep_for(2000_ms);
								   cout << "文跟" << endl;
								   */
								   /*
								  account a;
								   {
									   auto g = boost::make_unique_lock(a);
									   a.deposit(100);
									   a.withdraw(20);
									   assert(a.sum() == 80);
								   }
								   {
									   auto b = boost::make_unique_lock(a, boost::try_to_lock);
									   if (b) {
										   a.withdraw(a.sum());
										   assert(a.sum() == 0);
									   }
								   }
								   BOOST_CONCEPT_ASSERT((boost::BasicLockable<boost::mutex>));
								   BOOST_CONCEPT_ASSERT((boost::Lockable<boost::mutex>));
								   BOOST_CONCEPT_ASSERT((boost::Lockable<boost::timed_mutex>));
								   BOOST_CONCEPT_ASSERT((boost::TimedLockable<boost::timed_mutex>));
								   BOOST_CONCEPT_ASSERT((boost::Lockable<account>));
								   BOOST_CONCEPT_ASSERT((boost::Lockable < boost::lockable_adapter<boost::mutex>>));
								  // BOOST_CONCEPT_ASSERT((boost::Lockable<boost::atomic<int>>));       //会编译错误
								   boost::mutex m1, m2;
								   {
									   auto g1 = boost::make_unique_lock(m1, boost::adopt_lock);
									   auto g2 = boost::make_unique_lock(m2, boost::adopt_lock);
									   boost::lock(m1, m2);
								   }
								   {
									   auto g1 = boost::make_unique_lock(m1, boost::defer_lock);
									   auto g2 = boost::make_unique_lock(m2, boost::defer_lock);
									   boost::try_lock(g1, g2);
								   }
								   boost::this_thread::sleep_for(2_s);
								   cout << boost::this_thread::get_id() << endl;
								   boost::this_thread::yield();
								   */
								   /*
								  boost::mutex mu;
								   {
									   auto g = boost::make_unique_lock(mu);
									   assert(g.owns_lock());
									   cout << "some operations" << endl;
								   }
								   {
									   auto g = boost::make_unique_lock(mu, boost::defer_lock);
									   assert(!g);
									   assert(g.try_lock());
									   assert(g);
									   cout << "some !!1" << endl;
								   }
								   boost::timed_mutex tm;
								   {
									   auto g = my_make_lock(tm, 100_ms);
									   if (g)cout << "lock time mutex" << endl;
								   }
								   auto g = boost::make_unique_locks(mu, tm);
								   assert(std::tuple_size<decltype(g)>::value == 2);
								   */
								   /*
								   boost::mutex mu;
								   boost::lock_guard<boost::mutex> g(mu);
								   cout << "some operations" << endl;
								   boost::timed_mutex mux;
								   if (mux.try_lock_for(100_ms))
								   {
									   boost::lock_guard<boost::timed_mutex> g(mux, boost::adopt_lock);
									   cout << "lock timed mutex" << endl;
								   }
								   */
								   /*
								   boost::timed_mutex mu;
									auto flag = mu.try_lock_for(100_ms);
									if (flag)
									{
										std::cout << "lock mutex" << std::endl;
										mu.unlock();
									}
									cout << "线程未获得锁s" << endl;
									*/
									/*
									boost::atomic<int> n(100);
									assert(n.fetch_add(10) == 100); assert(n == 110);
									assert(++n == 111); assert(n++ == 111);
									assert(n == 112); assert((n -= 10) == 102);
									boost::atomic<int> b{ BOOST_BINARY(1101) };
									auto x = b.fetch_and(BOOST_BINARY(0110));
									assert(x == BOOST_BINARY(1101) && b == BOOST_BINARY(0100));
									assert((b |= BOOST_BINARY(1001)) == BOOST_BINARY(1101));
									boost::atomic<bool> c{ true };
									assert(c);
									c = false; assert(!c.load());
									auto x1 = c.exchange(true); assert(c && !x1);
									*/
									/*
									boost::atomic<long> l(100);
									long v = 100;
									bool flag1 = l.compare_exchange_weak(v, 313);
									cout << "flag:" << flag1 << " l:" << l << " v:" << v << endl;
									v = 200;
									auto b = l.compare_exchange_strong(v, 99);
									cout << "flag:" << b<< " l:" << l << " v:" << v << endl;
									auto b1=l.compare_exchange_weak(v, 99);
									cout << "flag:" << b1<< " l:" << l << " v:" << v << endl;
									*/
									/*
								   boost::atomic<int> a(10);
									assert(a == 10);
									boost::atomic<long> l;
									cout << "l:" << l << endl;
									boost::atomic<bool> b{ false };
									assert(!b.load());
									b.store(true);
									assert(b);
									boost::atomic<int> n(100);
									assert(n.exchange(200) == 100);
									assert(n == 200);
									*/
									/*
									//signal2实现是基于signal，最大得区别是Signals具有线程安全，能够用于多线程环境
									demo_class12 obj;
									assert(obj.sig.use_count() == 1);
									demo_class12 obj2(obj);
									assert(obj.sig.use_count() == 2);
									obj.sig->connect(&pirnt);
									(*obj2.sig)();
									boost::function<void()> func;
									func = pirnt;
									func();
									boost::signals2::signal<void()> sig;
									sig.connect(&pirnt);
									sig();
									*/
									/*
									typedef boost::signals2::signal<int(int)> signal_t;
									typedef signal_t::extended_slot_type slot_t;
									signal_t sig;
									sig.connect_extended(slot_t(&slots12<10>::operator(), slots12<10>(), _1, _2));
									sig.connect_extended(slot_t(&slots12<20>::operator(), slots12<20>(), _1, _2));
									sig(5);
									*/
									/*
									//观察者模式    //访客按门铃,门铃响，护士开门，婴儿哭闹
									ring r;
									nurse<nurse1> n1;
									nurse<nurse2> n2;
									baby<baby1> b1;
									baby<baby2> b2;
									guest g;
									r.connect(boost::bind(&nurse<nurse1>::action, n1));
									r.connect(boost::bind(&nurse<nurse2>::action, n2));
									r.connect(boost::bind(&baby<baby1>::action, b1));
									r.connect(boost::bind(&baby<baby2>::action, b2));
									g.press(r);
									*/
									/*
									typedef boost::signals2::signal<int(int) >signal_t;
									typedef signal_t::slot_type slot_t;
									signal_t sig;
									auto p1 = boost::make_shared<slotss<10>>();
									auto p2 = boost::make_shared <slotss<20>>();
									boost::function<int(int)> func = boost::ref(*p1);
									sig.connect(slot_t(func).track(p1));
									sig.connect(slot_t(&slotss<20>::operator(), p2.get(), _1).track(p2));
									p1.reset(); p2.reset();
									assert(sig.num_slots() == 0);
									sig(1);
									*/
									/*
									typedef boost::signals2::signal<int(int) > signal_t;
									signal_t sig;
									sig.connect(slotss<10>());
									auto p = boost::make_shared<slotss<20> >();
									sig.connect(signal_t::slot_type(boost::ref(*p)).track(p));
									p.reset();
									assert(sig.num_slots() == 1);
									sig(1);
									*/
									/*
									boost::signals2::signal<int(int)> sig;
									sig.connect(slotss<10>());
									auto p = new slotss<20>;
									sig.connect(boost::ref(*p));
									delete p;
									sig(1);
									*/
									/*
								   boost::signals2::signal<int(int) > sig;
									boost::signals2::connection c1 = sig.connect(0, slotss<10>());
									boost::signals2::connection c2 = sig.connect(0, slotss<20>());
									assert(sig.num_slots() == 2);
									sig(2);
									cout << "begin blocking..." << endl;
									{
										boost::signals2::shared_connection_block block(c1);
										assert(sig.num_slots() == 2);
										assert(c1.blocked());
										sig(2);
									}
									cout << "end blocking..." << endl;
									assert(!c1.blocked());
									sig(2);
									*/
									/*
								   demo_classes dc(10);
									dc.accept(call_back_func);
									dc.run();
									call_back_obj cbo(2);
									dc.accept(boost::ref(cbo));
									dc.run();
									dc.run();
									call_back_factory cbf;
									dc.accept(boost::bind(&call_back_factory::call_back_func1, cbf, _1));
									dc.run();
									dc.accept(boost::bind(&call_back_factory::call_back_func2, cbf, _1, 5));
									dc.run();
									auto funcxx = &f;
									cout<<"funcxx:" << funcxx(10, 20) << endl;
									demo_class sc;
									auto funcxx1 = boost::bind(&demo_class::add, &sc, _1, _2);
									cout << "funcxx1:" << funcxx1(10, 20) << endl;
									boost::signals2::signal<void() > sig;
									sig.connect(&slots1);
									//sig.connect(&slots2);
									sig.connect(&slots2, boost::signals2::at_front);
									sig.connect(slots<1>(), boost::signals2::at_back);
									sig.connect(slots<100>(), boost::signals2::at_front);
									sig.connect(5, slots<51>(), boost::signals2::at_back);
									sig.connect(5, slots<55>(), boost::signals2::at_front);
									sig.connect(3, slots<30>(), boost::signals2::at_front);
									sig.connect(3, slots<33>(), boost::signals2::at_back);
									sig.connect(10, slots<10>());
									sig();
									boost::signals2::signal<int(int) > sig1;
									sig1.connect(slotss<10>()); sig1.connect(slotss<20>()); sig1.connect(slotss<50>());
									cout << *sig1(2) << endl;
									boost::signals2::signal<int(int), combiner<int> >sigxx1(combiner<int>(100));
									sigxx1.connect(slotss<10>()); sigxx1.connect(slotss<20>()); sigxx1.connect(slotss<30>(), boost::signals2::at_front);
									auto x = sigxx1(2);
									cout << "x.first:" << x.first << "," << x.second << endl;
									boost::signals2::signal<int(int)> sivm;
									assert(sivm.empty());
									sivm.connect(0, slotss<10>()); sivm.connect(0, slotss<20>()); sivm.connect(1, slotss<30>());
									assert(sivm.num_slots() == 3); sivm.disconnect(0);
									assert(sivm.num_slots() == 1); sivm.disconnect(slotss<30>());
									assert(sivm.empty());
									boost::signals2::signal<int(int)> sigm;
									boost::signals2::connection c1 = sigm.connect(0, slotss<10>());
									boost::signals2::connection c2 = sigm.connect(0, slotss<20>());
									boost::signals2::connection c3 = sigm.connect(1, slotss<30>());
									c1.disconnect(); assert(sigm.num_slots() == 2); assert(!c1.connected()); assert(c2.connected());
									boost::signals2::signal<int(int)>sigms;
									sigms.connect(0, slotss<10>()); assert(sigms.num_slots() == 1);
									{
										boost::signals2::scoped_connection sc = sigms.connect(0, slotss<20>());
										assert(sigms.num_slots() == 2);
									}
									assert(sigms.num_slots() == 1);
									*/
									/*
									 boost::function<int(int, int)> func;
									 assert(!func);
									 func = f;
									 assert(func.contains(&f));
									 if (func)cout << func(10, 20) << endl;
									 func = 0;
									 assert(func.empty());
									 boost::function<int(demo_class&, int, int)> func1;
									 func1 = boost::bind(&demo_class::add, _1, _2, _3);
									 demo_class sc;
									 cout << "func1:" << func1(sc, 10, 20) << endl;
									 boost::function<int(int, int)> func2;
									 func2 = boost::bind(&demo_class::add, &sc, _1, _2);
									 cout << func2(10, 20) << endl;
									 boost::function<int(int)> func3;
									 func3 = boost::bind(&demo_class::operator(), &sc, _1);
									 cout << func3(10) << endl;
									 func3 = boost::cref(sc);
									 cout << "fcx3:" << func3(30) << endl;
									 std::vector<int> vv = { 1,3,5,7,9 };
									 summary<int> s;
									 boost::function<void(int const&)> funcx(boost::ref(s));
									 std::for_each(vv.begin(), vv.end(), funcx);
									 cout<<"sum:"<<s.sum<<endl;
									 */
									 /*
									 std::vector<int>v(10, 2);
									  auto rw = boost::cref(v);
									  assert(boost::is_reference_wrapper<decltype(rw)>::value);
									  assert(!boost::is_reference_wrapper<decltype(v)>::value);
									  std::string str;
									  auto rws = boost::ref(str);
									  cout << typeid(unwrap_reference<decltype(rws)>::type).name() << endl;
									  cout << typeid(unwrap_reference<decltype(str)>::type).name() << endl;
									 std::set<int>s;
									  auto rwx = boost::ref(s);
									   boost::unwrap_ref(rwx).insert(12);
									  std::string str1("test");
									  auto rws1 = boost::cref(str1);
									  cout << boost::unwrap_ref(rws1) << endl;
									  typedef double(*pfunc)(double);
									  pfunc pf = sqrt;
									  cout << std::ref(pf)(5.0) << endl;
									  squares sq;
									  int xb = 5;
									  std::ref(sq)(xb);
									  cout << "xb:" << xb << endl;
									  std::vector<int>vs = { 1,2,3,4,5 };
									  std::for_each(vs.begin(), vs.end(), std::ref(sq) );
									  auto to_string = [](auto t) {
										  std::stringstream ss; ss << t; return ss.str();
									  };
									  boost::fusion::vector<int, std::string, float>seq{ 1,"abc",2.4f };
									  boost::fusion::vector<std::string, std::string, std::string>strings = boost::fusion::transform(seq, to_string);
									 // std::underlying_type<int>::type we;
									  std::map<int, int>intToA;
									  intToA.emplace(std::piecewise_construct, std::make_tuple(1), std::make_tuple(3 ));
									  for(const auto&elem:intToA)std::cout<<elem.first<<":"<<elem.second<<'\n';
									  using namespace boost::property_tree;
									  using namespace boost::gregorian;
									  std::string a = "{\"user\":\"haha\",\"forward\":\"buy\", \"pair_id\":4, \"from\":\"EOSS\",\"from_account\":24.33, \"to\":\"SYSS\", \"to_amount\":24.33, \"rate\":1}";
									  std::cout << a <<std::endl;
									  string b = "25.3467";
									  float c=stof(b);
									  cout << "c:" << c << endl;
									  int n123 = 100;
									  string str123 = to_string(n123);
									  cout << "str:" << str123 << endl;
									  cout << "X:" << sizeof(XB) << endl;
									  cout << "Y:" << sizeof(YB) << endl;
									  cout << "Z:" << sizeof(ZB) << endl;
									  cout << "A:" << sizeof(AB) << endl;
									  XB axx, bxx;
									  if (&axx == &bxx)cerr << "yipes!" << endl;
									  int i1 = 5;
									  int *p = &i1;
									  cout << "开是:&p:" << &p << " &*p:" << &(*p) << "  &i:" << &i1 << endl;
									  fte(&p);
									  //  printf("%d\n", *p);
									  cout << "色各位:*p:" << *p << endl;
									  cout << "结束:&p:" << &p << " &*p" << &(*p) << "  &i:" << &i1 << endl;
									  cout << "*P:" << *p << endl;
									  cout << "结束1:&p:" << &p << " &*p" << &(*p) << "  &i:" << &i1 << endl;
									  printf("%d\n", *p);
									  cout << "结束2:&p:" << &p << " &*p" << &(*p) << "  &i:" << &i1 << endl;
									  XB *pb = new XB;
									  YB *py = new YB;
									  AB* pab = new AB;
									  cout << "pb type namex=" << typeid(pb).name() << endl;
									  cout << "pb type rawnamex=" << typeid(pb).raw_name() << endl;
									  cout << "py type name=" << typeid(py).name() << endl;
									  cout << "py type rawname=" << typeid(py).raw_name() << endl;
									  cout << "pab type name=" << typeid(pab).name() << endl;
									  cout << "pab type rawname=" << typeid(pab).raw_name() << endl;
									  long l = 2222;
									  short const&ss = l;
									  l = 0;
									  printf("%ld, %d\n", l, ss);
									  int gw = 10;
									  auto r = boost::ref(gw);
									  {
										  int *y = new int(20);
										  r = boost::ref(*y);
										  cout << r << endl;
										  delete y;
									  }
									  cout << "r:" << r << endl;
									  const boost::arg<1> &_x = boost::placeholders::_1;
									  const boost::arg<1> &arg1 = boost::placeholders::_1;
									  const boost::arg<2> &_y = boost::placeholders::_2;
									  auto& _x1 = _1;
									  decltype(_2)& _y1 = _2;
									  assert(typeid(_x) == typeid(arg1));
									  auto xxb = boost::bind(std::greater<int>(), _1, _2);
									  std::cout <<"bbb:"<< xxb(10, 20) << std::endl;
									  typedef boost::rational<int> ri;
									  std::vector<ri> vsv = { ri(1,2),ri(3,4),ri(5,6) };
									  remove_if(vsv.begin(), vsv.end(), bind(&ri::numerator, _1) == 1);
									  assert(vsv[0].numerator() == 3);
									  assert(find_if(vsv.begin(), vsv.end(), bind(&ri::numerator, _1) == 1) == vsv.end());
									  auto posv = find_if(vsv.begin(), vsv.end(), bind(&ri::numerator, _1) > 3 && bind(&ri::denominator, _1) < 8);
									  std::cout << "*posv:" << *posv << std::endl;
									  auto posv1 = find_if(vsv.begin(), vsv.end(), [](ri&r) { return r.numerator() > 3 && r.denominator() < 8; });
									  std::cout << "*posv1:" << *posv1<< std::endl;
									  bind<int>(printf, "%d+%d等于%d\n", _1, 1, _2)(6, 7);
									  */
									  /*
									  int x = 10;
									  boost::reference_wrapper<int> rw(x);
									  assert(x == rw);
									  (int&)rw = 100;
									  assert(x == 100);
									  boost::reference_wrapper<int>rw2(rw);
									  assert(rw2.get() == 100);
									  std::string str;
									  boost::reference_wrapper<std::string>rws(str);
									  *rws.get_pointer() = "test reference_wrapper";
									  std::cout <<"size:"<< rws.get().size() << endl;
									  double x1 = 2.71828;
									  auto rw1 = boost::cref(x);
									  std::cout << typeid(rw1).name() << endl;
									  std::string str1;
									  auto rws1 = boost::ref(str1);
									  std::cout << typeid(rws1).name() << std::endl;
									  double xs = 2.0;
									  cout << std::sqrt(boost::ref(xs)) << endl;
									  */
									  /*
									 options_description opts("demo options");
									  boost::program_options::variables_map vm;
									 // boost::filesystem::ifstream ifs("E:\\test\\config.ini");
									 // boost::program_options::store(parse_config_file(ifs, opts, true), vm);
									  const char *str = "E:\\test\\config.ini";
									  boost::program_options::store(parse_config_file<char>(str, opts, true), vm);
									  notify(vm);
									  */
									  /*
									 options_description opts("demo options");
									  string filename;
									  opts.add_options()("help,h", "help message\n a bit of long text")
										  ("filename,f",boost::program_options::value<string>(&filename)->default_value("test"),"to find a file")
										  ("dir,D", boost::program_options::value<vector<string>>()->multitoken(),"search dir")
										  ("depth,d",boost::program_options::value<int>()->implicit_value(5),"search depth");
									  boost::program_options::variables_map vm;
									  boost::program_options::store(boost::program_options::parse_command_line(argc, argv, opts), vm);
									  boost::program_options::notify(vm);
									  print_vm(opts, vm);
									  */
									  /*
									 boost::program_options::options_description opts("demo options");
									  opts.add_options()
										  ("help", "just a help info")
										  ("filename",boost::program_options::value<string>(),"to find a file");
									  boost::program_options::variables_map vm;
									  boost::program_options::store(boost::program_options::parse_command_line(argc, argv, opts), vm);
									  if (vm.count("help")) { cout << opts << endl; return 0; }
									  if (vm.count("filename"))cout << "find " << vm["filename"].as<string>() << endl;
									  if (vm.empty())cout << "no options" << endl;
									  double x;
									  boost::program_options::value<double>(&x)->zero_tokens()->multitoken()->required();
									  */
									  /*
									  path p("E:\\test\\link.txt");
									   newfs::ifstream ifs(p);
									   assert(ifs.is_open());
									   cout << ifs.rdbuf() << endl;
									   */
									   //copy_files("E:\\test", "E:\\newTest");
									   /*
									  auto v = find_files("D:\\houtai\\boost\\boost_1_71\\software\\boost_1_71_0\\boost\\timer", "*.hpp");
									   cout << v.size() << endl;
									   for (path&p : v)cout << p.string() << endl;
									 */
									 /*
									 auto r = find_file("E:\\admin\\video", "FSET324.avi");
									 if (r) cout << *r << endl;
									 else cout << "file not found." << endl;
									 */
									 /*
									  typedef recursive_directory_iterator rd_iterator;
									 rd_iterator end;
									  for (rd_iterator pos("E:\\admin\\company"); pos != end; ++pos)
									  {
										  //cout << "leven" << pos.level() << ":" << *pos << endl;
										  if (is_directory(*pos))pos.no_push();
										  cout << *pos << endl;
									  }
									  */
									  /*
									   using namespace boost::filesystem;
									  namespace fs = boost::filesystem;
									   path ptest = "E:\\Test\\learn\\webserv_win.cpp";
									   if (exists(ptest))
									   {
										   if (fs::is_empty(ptest)) remove(ptest);
										   else remove_all(ptest);
									   }
									   assert(!exists(ptest));
									   create_directory(ptest);
									   copy_file("E:\\learnCPP\\sales.cpp", ptest/"a.txt");
									   assert(exists(ptest / "a.txt"));
									   rename(ptest / "a.txt", ptest / "b.txt");
									   assert(exists(ptest / "b.txt"));
									   create_directories(ptest / "sub_dir1" / "sub_dir2");
									   */
									   /*
									  using namespace boost::filesystem;
									   cout << initial_path() << endl;
									   cout << current_path() << endl;
									   path p("E:\\learnCPP\\sales.cpp");
									   cout << file_size(p) << endl;
									   time_t t = last_write_time(p);
									   cout << "t:" << t << endl;
									   last_write_time(p, time(0));
									   cout << "new:" << last_write_time(p) << endl;
									   space_info si = space("E:\\learnCPP");
									   cout << si.capacity / boost::giga::num << endl;
									   cout << si.available / boost::giga::num << endl;
									   cout << si.free / boost::giga::num << endl;
									   */
									   /* must_be_same_size<int, int> a;
									   must_be_same_size<int, long> b;
									   must_be_same_size<void, void> c;
									   must_be_same_size<void, int> d;
									   /*
									  /* must_be_pod<int> a;
									   must_be_pod<not_subs> b;
									   must_be_pod<NonPOD> c;
									   */
									   /*
									   must_be_subscriptable<int[]> a;
										must_be_subscriptable<int*> b;
										must_be_subscriptable<subs> c;
										must_be_subscriptable_as_decayable_pointer<int*> d;
										*/
										// must_be_subscriptable<not_subs> d;
										// must_be_subscriptable_as_decayable_pointer<subs> e;
										/* using namespace boost::filesystem;
										 path p("E:\\learnCPP\\sales.cpp");
										 try {
											uintmax_t x= file_size(p);
											cout << "x:" << x << endl;
										 }
										 catch (filesystem_error&e) { cout << e.path1() << endl; cout << e.what() << endl; }
										 assert(is_regular_file(p));
										 assert(status(p).type() != directory_file);
										 */

										 /*
										using namespace boost::timer;
										 const nanosecond_type ms = 1000 * 1000;
										 cpu_times ct = { 2000 * ms,1000 * ms,100 * ms };
										 cpu_times ct1 = { 2000,1000,100 };
										 cout << "格式为:" << boost::timer::format(ct, 7);
										 cout << "新的格式:" << boost::timer::format(ct, 3) << endl;
										 int a = 1;
										 int*const p = &a;
										 cout << "p:" << *p <<"\a:"<<a<< endl;
										 *p = 23;
										 cout << "p:" << *p <<"\a:"<<a<< endl;
										 union {
											 short s;
											 char c[sizeof(short)];
										 } un;
										 un.s = 0x0102;
										 if (sizeof(short) == 2)
										 {
											 if (un.c[0] == 1 && un.c[1] == 2)printf("big-endian\n");
											 else if (un.c[0] == 2 && un.c[1] == 1)printf("little-endian\n");
											 else printf("unknown\n");
										 }
										 else printf("unknown\n");
										 */
										 /*
										 const std::string fmt("%w 苗,%u s+%s 擦=%t 事,百分比是 %p");
										 auto_cpu_timer t(3,fmt);
										  std::vector<std::string> v(10, "monado");
										  for(int i = 0; i < 10000; ++i)boost::algorithm::join(v, "-");
										  cout << "232草为购买围观围观" << endl;
										  */
										  /*
										  using namespace boost::timer;
										 std::vector<std::string> v(10, "monado");
										  cpu_timer t;
										  assert(!t.is_stopped());
										  for (int i = 0; i < 10000; ++i)boost::algorithm::join(v, "-");
										  t.stop();
										  assert(t.is_stopped());
										  cout << "pause for a while..." << endl;
										  cout << "we can do something..." << endl;
										  t.resume();
										  assert(!t.is_stopped());
										  BOOST_FOREACH(string&x, v)x += x;
										  cout << t.format() << endl;
										  */
										  /*
										 auto tps = system_clock::now();
										  auto d = tps.time_since_epoch();
										  cout << duration_cast<hours>(d).count() << endl;
										  cout << duration_cast<minutes>(d).count() << endl;
										  auto tp2 = tps + minutes(1);
										  cout << tp2.time_since_epoch().count() << endl;
										  auto h = 5_h;
										  auto  s = 45_s;
										  auto ms = 200_ms;
										  cout << "h:" << h.count() << "\ns:"<<s.count()<<"\nms:"<<ms.count() << endl;
										  auto tp = system_clock::now();
										  auto t = system_clock::to_time_t(tp);
										  cout << std::ctime(&t) << endl;
										  */
										  /*
										 typedef boost::chrono::duration<int, boost::ratio<60 * 60>> my_hour;
										  typedef boost::chrono::duration<int, boost::ratio<-1, 1000> >my_ms;
										  cout <<"system_clock_name:"<< clock_desc<boost::chrono::system_clock>::name() << endl;
										  cout << "system_clock_since:" << clock_desc<boost::chrono::system_clock>::since() << endl;
										  cout <<"steady_clock_name:"<< clock_desc<boost::chrono::steady_clock>::name() << endl;
										  cout << "steady_clock_since:" << clock_desc<boost::chrono::steady_clock>::since() << endl;
										  cout <<"process_real_cpu_clock_name:"<< clock_desc<boost::chrono::high_resolution_clock>::name() << endl;
										  cout << "process_real_cpu_clock_since:" << clock_desc<boost::chrono::high_resolution_clock>::since() << endl;
										  */
										  /* using namespace boost::system::errc;
										  using namespace boost::system::windows_error;
									 //	 boost::system::system_category();
									   */
									   /*
										try
										 { throw boost::system::system_error(boost::system::error_code(5,boost::system::system_category())); }
										 catch (boost::system::system_error&e) { cout <<"e.waht():"<< e.what() << endl; }
										 */
										 /*
										  cout << boost::system::system_category().name() << endl;
										   boost::system::error_code ec;
										   assert(ec.value() == boost::system::errc::success);
										   assert(!ec);
										   assert(ec.category() == boost::system::system_category());
										   ec.assign(3L, boost::system::system_category());
										   auto econd = ec.default_error_condition();
										   assert(econd == ec);
										   assert(econd == boost::system::system_category().default_error_condition(3L));
										   cout << ec.message() << endl;
										   cout << econd.message() << endl;
										   cout << econd.value() << endl;
										*/
										/*
									   my_category my_cat;
										boost::system::error_code ec(10, my_cat);
										cout << ec.value() << "\nmessage:" << ec.message() << endl;
										ec = boost::system::error_code(10, boost::system::system_category());
										cout << ec.value() << "\nmessage:" << ec.message() << endl;
										*/
										/*
										random_device rng;
										for (int i = 0; i < 10; ++i)cout << rng() << " "; cout << endl;
										uniform_real<>ur(1.0, 2.0);
										for (int i = 0; i < 10; ++i)cout << ur(rng) << " "; cout << endl;
										variate_generator<random_device&, uniform_smallint<> >gen(rng, uniform_smallint<>(0, 255));
										for (int i = 0; i < 10; ++i)cout << gen() << " "; cout << endl;
										*/
										/*
									  unsigned char buf[10];
										rand_bytes<mt19937>(buf, 10);
										for (int i = 0; i < 10; ++i)cout << (short)buf[i] << " "; cout << endl;
										rand_bytes<rand48>(buf, 10);
										for (int i = 0; i < 10; ++i)cout << (short)buf[i] << " "; cout << endl;
										/*
										mt19937 rng(time(0));
										random::uniform_int_distribution<>ui(0, 255);
										for (int i = 0; i < 10; ++i)cout << ui(rng) << ","; cout << endl;
										uniform_01<>u01;
										for (int i = 0; i < 10; ++i)cout << u01(rng) << ","; cout << endl;
										normal_distribution<>nd(1, 2);
										int count = 0;
										for (int i = 0; i < 10000; ++i)
											if (abs(nd(rng) - 1) <= 2.0)	++count;
										cout << 1.0*count / 10000 << endl;
										mt19937 rn((int32_t)time(0));
										uniform_smallint<>us(1, 100);
										variate_generator<mt19937&, uniform_smallint<> >gen(rn, us);
										for (int i = 0; i < 10; ++i)cout << gen() << " "; cout << endl;
										*/
										/*
									   mt19937 rng(time(0));
										cout << mt19937::min() << "<->" << mt19937::max() << endl;
										mt19937 rng2(rng);
										for (int i = 0; i < 100; ++i) { assert(rng() == rng2()); }
										for (int i = 0; i < 100; ++i)cout << "rng:" << rng() << endl;
										rng.discard(5);
										std::vector<int>vec(10);
										rng.generate(vec.begin(), vec.end());
										*/
										/*
									   crc_32_type crc32;
										cout << hex;
										cout << crc32.checksum() << endl;
										crc32.process_byte('a');
										cout << crc32.checksum() << endl;
										crc32.process_bytes("1234567890", 10);
										cout << crc32.checksum() << endl;
										cout << "crc32():" << crc32() << endl;
										char szCh[] = "1234567890";
										crc32.reset();
										crc32.process_block(szCh, szCh + 10);
										cout << crc32.checksum() << endl;
										string str = "1234567890";
										crc32.reset();
										cout <<"crc32:"<< std::for_each(str.begin(), str.end(), crc32)() << endl;
										*/
										// typedef boost::ratio<1, 2> half;
										/*
										cout << boost::kilo::num << endl;
										// assert(half::num == 1); assert(half::den == 2);
										 cout << string_out<boost::kilo>::symbol() << endl;
										 cout << string_out<boost::kilo>::prefix() << endl;
										 cout << string_out<boost::nano>::symbol() << endl;
										 cout << string_out<boost::nano>::prefix() << endl;
										 cout << string_out<boost::ratio<22, 7> >::prefix() << endl;
										 */
										 /*
										boost::rational<int> a(3), b(65534), c(22, 7);
										 b += a; c -= a;
										 if(c>=0) {c = a * b;  ++a;  }
										 assert(a == 4);
										 rational<int>r(10);
										 if (r) r -= 10;
										 assert(!r);
										 rational<int>r1(2718, 1000);
										 cout << "r1:" << r1 << endl;
										 cout <<"r1:"<< rational_cast<int>(r1) << endl;
										 cout <<"r1:"<< rational_cast<double>(r1) << endl;
										 rational<int>r2;
										 cin >> r2;
										 cout << r2.numerator() << ":" << r2.denominator() << "=" << rational_cast<double>(r2) << endl;
										 cout<<"++r2:" << ++r2 << endl;
										 rational<int>r3(-1414, 1000), pi(314, 100);
										 cout << "r3:" << abs(r3) << endl;
										 cout << "pow:" << pow(rational_cast<double>(r3), 2) << endl;
										 cout << "cos:" << cos(rational_cast<double>(pi)) << endl;
										// assert(std::numeric_limits<rational<int> >::is_specialized() == true);
										 int a1 = 37, b1 = 62;
										 format fmt("gcd(%1%,%2%)=%3%. lcm(%1%,%2%)=%4%\n");
										 cout << fmt % a1%b1%gcd(a1, b1) % lcm(a1, b1) << endl;
										 */
										 /*
										format fmt("type:%s,size=%dbit\n");
										 typedef uint_t<15>::fast u15;
										 cout << fmt % ::type_name<u15>() % (sizeof(u15) * 8) << endl;
										 typedef int_max_value_t<32700>::fast i32700;
										 cout << fmt % ::type_name<i32700>() % (sizeof(i32700) * 8) << endl;
										 typedef int_min_value_t<-33000>::fast i33000;
										 cout << fmt % ::type_name<i33000>() % (sizeof(33000) * 8) << endl;
										 typedef uint_value_t<33000>::fast u33000;
										 cout << fmt % ::type_name<u33000>() % (sizeof(u33000) * 8) << endl;
										 */
										 /*
										uint8_t u8;  int_fast16_t i16;  int_least16_t i32;	 uintmax_t um;
										 u8 = 255; i16 = 32000; i32 = i16; um = u8 + i16 + i32;
										 cout << "u8:" << sizeof(u8) << " v="<<(short)u8 << endl;
										 cout << "i16:" << sizeof(i16) << " v=" << i16 << endl;
										 cout << "i32:" << sizeof(i32) << " v=" << i32 << endl;
										 cout << "um:" << sizeof(um) << " v=" << um << endl;
										 cout << (short)std::numeric_limits<int8_t>::max() << endl;
										 cout << std::numeric_limits<uint_least16_t>::max() << endl;
										 cout << std::numeric_limits<int_fast32_t>::max() << endl;
										 cout << std::numeric_limits<intmax_t>::min() << endl;
										 typedef int_fast_t<char>::fast cfast;
										 cout << typeindex::type_id<cfast>().pretty_name() << endl;
										 typedef int_fast_t<int>::fast ifast;
										 cout << typeindex::type_id<ifast>().pretty_name() << endl;
										 typedef int_fast_t<uint16_t>::fast u16fast;
										 cout << typeindex::type_id<u16fast>().pretty_name() << endl;
										*/
										/*
									   cout << integer_traits<int>::const_max << endl;
										cout << integer_traits<bool>::const_min << endl;
										cout << integer_traits<long>::is_signed << endl;
										*/
										/*
										using namespace boost::math;
										using namespace constants;
										assert(pi<float>() == float_constants::pi);
										assert(pi<double>() == double_constants::pi);
										typedef boost::multiprecision::cpp_dec_float_100 float_100;
										cout << setprecision(100) << pi<float_100>() << endl;
										 */
										 /*
										 using namespace boost::math;
										 cout << setprecision(64);
										 float wg = float_constants::pi;
										 cout << "pi=" << wg << endl;
										 auto a = float_constants::pi * 2 * 2;
										 cout << "area=" << a << endl;
										 using namespace double_constants;
										 auto x = root_two * root_three;
										 cout << "root*2*3=" << x << endl;
										 cout << "root pi=" << root_pi << endl;
										 cout << "pi pow e=" << pi_pow_e << endl;
										 */
										 /*
										using namespace boost::algorithm;
										 hex("123", std::ostream_iterator<char>(cout));
										 cout << endl;
										 string s;
										 hex("ABC", std::back_inserter(s));
										 cout << s << endl;
										 try {
											 unhex("313", std::ostream_iterator<char>(cout));
											 unhex("xyz", std::ostream_iterator<char>(cout));
										 }
										 catch (const boost::exception&e) { cout << "unhex error" << endl; }
										 */
										 /*
										 assert(boost::algorithm::clamp(5, 1, 10) == 5);
										 assert(boost::algorithm::clamp(5, 5, 10) == 5);
										 assert(boost::algorithm::clamp(5, 1, 5) == 5);
										 assert(boost::algorithm::clamp(5, 10, 15) == 10);
										 assert(boost::algorithm::clamp(5, 0, 4) == 4);
										 std::vector<int>v = { 2,4,6,8,10 };
										 boost::algorithm::clamp_range(v, ostream_iterator<int>(cout, ","), 3, 9);
										 */
										 /*

										auto x = boost::minmax(1, 2);
										 cout << get<0>(x) << ' ' << get<1>(x) << endl;
										 auto y = std::minmax({ 3,4,8,1 });
										 cout << get<0>(y) << ' ' << get<1>(y) << endl;
										 std::vector<int>v = { 633,90,67,83,2,100 };
										 auto m = boost::minmax_element(v.begin(), v.end());
										 cout << "min:" << *m.first << endl;
										 cout << "max:" << *m.second << endl;
										 std::vector<int> vs = { 3,5,2,2,10,9,10,8 };
										 decltype(vs.begin())pos;
										 pos = first_min_element(vs.begin(), vs.end());
										 assert(pos - vs.begin() == 2);
										 pos = last_min_element(vs.begin(), vs.end());
										 assert(pos - vs.begin() == 3);
										 auto xs = first_min_last_max_element(vs.begin(), vs.end());
										 assert(xs.first - vs.begin() == 2 && xs.second - vs.begin() == 6);
										 */
										 /*
										 using namespace boost::assign;
										 std::array<int, 5>ar= (boost::assign::list_of(1), 2, 3, 4, 5);
										 foreach(int x, ar)cout << x << ' '; cout << endl;
										 std::pair<decltype(ar.begin()), decltype(ar.end())>rng(ar.begin(), ar.end() - 2);
										 foreach(auto x, rng)cout << x << ' '; cout << endl;
										 boost::circular_buffer<int> cb = boost::assign::list_of(1)(2)(3);
										 foreach(auto x, cb)cout << x << ' '; cout << endl;
										 std::unordered_set<double> us = boost::assign::list_of(3.14)(2.717)(0.618);
										 foreach(auto x, us)cout << x << ' '; cout << endl;
										*/
										/*
										int ar[] = { 1,2,3,4,5 };
										 foreach(auto&x, ar)cout << x << ' '; cout << endl;
										 map<int, string>m = { {1,"111"},{2,"222"},{3,"333"} };
										 foreach(auto&x, m)cout << "[" << x.first << ',' << x.second << "]"; cout << endl;
										 std::vector<std::vector<int> >v = { {1,2},{3,4} };
										 foreach(std::vector<int>&row, v)
										 {
											 reverse_foreach(auto&z, row)cout << z << ','; cout << endl;
										 }
										 */
										 /*
										 std::vector<int> v = (list_of(1),2,3,4,5);
										 BOOST_FOREACH(auto x, v) cout << x << ' '; cout << endl;
										 string str("boost foreach");
										 BOOST_FOREACH(auto&c, str)cout << c << ' '; cout << endl;
										 */
										 /*
										 using namespace boost::property_tree;
										 ptree pt;
										 read_xml("e:\\learnCPP\\conf.xml", pt,xml_parser::no_concat_text|xml_parser::no_comments|xml_parser::trim_whitespace);
										 try { cout << pt.get<string>(ptree::path_type("conf/theme.id",'/') )<< endl; }
										 catch (const std::exception&e) { cout << e.what() << endl; }
										 */
										 //	 read_xml("e:\\learnCPP\\conf.xml", pt);
										 //	 cout << pt.get<int>(ptree::path_type("conf/.hello",'/')) << endl;
											  /*
											  ptree pt;
											  read_info("e:\\learnCPP\\test.info", pt);
											  cout << pt.get<string>("conf.theme") << endl;
											  pt.put<string>("conf.傻逼","哈哈");
											  pt.put<string>("conf.urls.操你妈", "2gw");
											  pt.put<int>("conf.new图形设备", 2346);
											  write_info("e:\\learnCPP\\test.info", pt);
											  */
											  /*
											  ptree pt;
											  read_ini("e:\\learnCPP\\overlay.ini",pt);
											  pt.put<string>("什么鬼.渣渣", "宋体");
											  pt.put<string>("什么鬼.we", "张三");
											  pt.put<string>("other.名字12", "nobody");
											  pt.put<string>("other.名字", "nobody强奸为各位和各位");
											  std::cout << pt.get<std::string>("什么鬼.渣渣") << std::endl;
											  write_ini("e:\\learnCPP\\overlay.ini", pt);
											  */
											  /*
											 ptree pt;
											  std::string dir = "e:\\learnCPP\\confs.json";
											  read_json(dir, pt);
											  cout << pt.get<string>("conf.theme") << endl;
											  cout << pt.get<int>("conf.clock_style") << endl;
											  cout << pt.get<long>("conf.gui") << endl;
											  cout << pt.get("conf.no_prop", 100) << endl;
											  for (auto x : pt.get_child("conf.urls"))cout << x.second.data() << endl;
											  */
											  /*
											  ptree pt;
											  std::string dir = "e:\\learnCPP\\conf.xml";
											 read_xml(dir, pt);
											  cout << pt.get<string>("conf.theme") << endl;
											  cout << pt.get<int>("conf.clock_size") << endl;
											  cout << pt.get<long>("conf.gui") << endl;
											  cout << pt.get("conf.no_prop", 100) << endl;
											  cout <<"conf.xmlcomment:"<< pt.get<string>("conf.<xmlcomment>") << endl;
											  cout << "clock_size.name:" << pt.get<string>("conf.clock_size.<xmlattr>.name") << endl;
											  cout << "theme.id:" << pt.get<long>("conf.theme.<xmlattr>.id") << endl;
											  cout << "urls.xmlcomment:" << pt.get<string>("conf.urls.<xmlcomment>") << endl;
											  for (auto&x : pt.get_child("conf.urls")) cout << x.second.data() << ','; cout << endl;
											  */
											  //cout << pt.get_optional<string>("conf.shabi").value() << endl;

											   /*
											  pt.put("conf.theme", "Matrix Reloaded");
											  pt.put("conf.clock_style", 12);
											  pt.put("conf.urls.url", "http:\//www.url4.org");
											  pt.put("conf.shabi", "我肏你吗的小屄");
											  pt.add("conf.urls.url", "我在这等着你回来");
											  pt.add("conf.shabi.哈哈", "什么鬼");
											  ofstream ofs (dir, ios::out | ios::binary|ios::app);
											 // write_xml(cout, pt);
											  write_xml(ofs, pt);
											  ofs.close();
											 */
											 /*
											 typedef multi_array<int, 3> ma_type;
											 typedef ma_type::extent_range range;
											 ma_type ma(extents[range(1, 5)][4][range(-2, 2)]);
											 ma[1][0][-2] = 10;
											 ma.reindex(1);
											 assert(ma[1][1][1] == 10);
											 ma.reindex(std::array<int, 3>{1, 0, -4});
											 assert(ma[1][0][-4]==10);
											 cout << *ma.index_bases() << endl;
											 */
											 /*
											 int arr[12];
											 for (int i = 0; i < 12; ++i)arr[i] = i;
											 multi_array_ref<int, 2> mar(arr, extents[3][4]);
											 for(std::size_t i=0;i<3;++i)
											 {
												 cout << "(";
												 for (std::size_t j = 0; j < 4; ++j)
												 {
													 cout << mar[i][j]++;
													 cout << (j != 3 ? ',' : ' ');
												 }
												 cout << ")" << endl;
											 }
											 const_multi_array_ref<int, 2> cmar(arr, extents[2][6]);
											 for (std::size_t i = 0; i < 2; ++i)
											 {
												 cout << "(";
												 for (std::size_t j = 0; j < 6; ++j)
												 {
													 cout << cmar[i][j]; cout << (j != 5 ? ',' : ' ');
												 }
												 cout << ")" << endl;
											 }
											 */
											 /*
											 boost::multi_array<int, 3>ma(extents[2][3][4]);
											  ma.resize(extents[2][9][9]);
											  assert(ma.num_elements() == 2 * 9 * 9);
											  assert(ma.shape()[1] == 9);
											  */
											  /*
											  boost::array<std::size_t, 3>idx = { 0,1,2 };
												   ma( idx ) = 10;
												   cout << ma(idx) << endl;
											  */
											  //	 auto shape = ma.shape();
												  // for (std::size_t i = 0; i < ma.num_dimensions(); ++i)cout << shape[i] << ','; cout << endl << ma.num_elements();
											  /*
											  for (int i = 0, v = 0; i < 2; ++i)
													   for (int j = 0; j < 3; ++j)
														   for (int k = 0; k < 4; ++k)
														   {
															   ma[i][j][k] = v++;
														   }
												   for (int i = 0, v = 0; i < 2; ++i)
												   {
													   for (int j = 0; j < 3; ++j)
													   {
														   for (int k = 0; k < 4; ++k)
														   {
															   cout << ma[i][j][k] << ',';
														   }
														   cout << endl;
													   }
													   cout<<endl;
												   }
												   */
												   /*
												   typedef variant<int, float, string> var_t;
												   var_t v;
												   assert(v.type() == typeid(int));
												   assert(v.which() == 0);
												   v = "variant demo";
												   cout << *get<string>(&v) << endl;
												   try { cout << get<double>(v) << endl;  }
												   catch (bad_get&) { cout << "bad_get" << endl; }
												   */
												   //  v = "123"; cout << "v:" << v << endl;
												  //   cout << get<int>(var_t(108)) << endl;
													 /*
													 any a; a = 10;
													 any_print<int>()(a);
													 auto ps = boost::make_shared<string>("metroid");
													 a = ps;
													 cout << **any_cast<boost::shared_ptr<string>>(&a) << endl;
													 std::vector<any>v; v.push_back(10); v.push_back(1.414); v.push_back(boost::shared_ptr<int>(new int(100)));
													 v.push_back(string("曹国伟个")); v.push_back("wegwe");
												   //  v += boost::assign::list_of<any>(10)(0.618)(string("char"));
													 cout << "size:" << v.size() << endl;
													 */
													 //   any a2 = ps;
													  //  any_print<boost::shared_ptr<string> >(a2);
														/*
													  any a(10);
														int n = any_cast<int>(a); assert(n == 10);
														any_cast<int&>(a) = 20;  assert(any_cast<int>(a) == 20);
														try { any a; any_cast<int>(a); }
														catch (boost::exception&) { cout << current_exception_diagnostic_information(); }
														any a1, a2(2.0);
														assert(any_cast<int*>(&a1) == nullptr);
														assert(any_cast<string*>(&a2) == nullptr);
														*/
														/*
													   my_tuple t(1, 2.1, "string visitor");
														visit_tuple(print_visitors(), t);
														boost::tuples::tuple<int, long, float, double> t1(100, 5, 3.14, 314.15);
														double *max_value = new double(t1.get_head());
														max_visitors<double>mv(max_value);
														visit_max_tuple(mv, t1);
														cout <<"max_value:"<< *max_value << endl;
														typedef boost::tuples::tuple<int, double, std::vector<string> >t_type;
														assert(sizeof(dem1) == sizeof(t_type));
														typedef boost::tuples::tuple<int, string>tup1;
														typedef boost::tuples::tuple<int, tup1>tup2;
														assert(typeid(int) == typeid(boost::tuples::element<0, tup1>::type));
														assert(typeid(string) == typeid(boost::tuples::element<1, tup1>::type));
														cout << boost::tuples::length<tup2>::value << endl;
														int a = 10, b = 20;
														boost::tuples::tuple<int&, int&>x(b, a), y(a, b);
														y = x;
														cout << "a:" << a << "\nb:" << b << endl; a = 10,b = 20;
														boost::tuples::tie(a, b) = boost::make_tuple(b, a);
														cout << "现在a:" << a << "\nb:" << b << endl;
														*/
														/*
														int i; double d; string s;
														boost::tuples::tie(i, d, s) = funcs();
														cout << "i:" << i << "\nd:" << d << "\ns:" << s << endl;
														int i1; string s1; boost::tuples::tie(i1, s1) = std::make_pair(100, "abc");
														cout << "i1:" << i1 << "\ns1:" << s1 << endl;
														double d1; boost::tuples::tie(boost::tuples::ignore, d1, boost::tuples::ignore) = funcs();
														cout << "d1:" << d1 << endl;
														std::vector<my_tuple> v = boost::assign::tuple_list_of(1, 1.0, "123")(2, 2.0, "456");
														assert(v.size() == 2);
														v += boost::tuples::make_tuple(3, 3.0, "789"), boost::tuples::make_tuple(4, 4.0, "abc");
														assert(v.size() == 4);
														my_tuple fg(1, 2.0, "string tuple");
														print_tuple(fg);
														*/
														/*
													 typedef boost::tuple<int, string> my_tuple1;
														typedef boost::tuple<int, string> my_tuple2;
														typedef boost::tuple<int, string, double> my_tuple;
														my_tuple t1, t2(1, "123"), t3(t1);   t2 = t3;
														int x = 10;  boost::tuple<int&>t4(x);
													 //    boost::tuple<void> no_instance_t1;
													 //    boost::tuple<double(int)> no_instance_t2;
														boost::tuple<void*> t1s; boost::tuple<double(*)(int)> t2s;
														auto test1 = boost::tuples::make_tuple(2, 3.0);
														auto test2 = boost::tuples::make_tuple(string("丢你毛磊"), std::vector<int>());
														int i; string s;
														boost::tuple<int, string&> tx1 = boost::tuples::make_tuple(i, std::ref(s));
														boost::tuple<const int&, string&> tx2 = boost::tuples::make_tuple(std::cref(i), std::ref(s));
														auto gt = boost::tuples::make_tuple(1, "char[]", 100.0);
														assert(gt.get<0>() == 1);
														assert(gt.get<1>() == 100.0); cout << gt.get<1>() << endl; cout << ++gt.get<0>() << endl;
														cout << get<0>(gt) << endl;

														auto sb1 = boost::tuples::make_tuple(1, 100.0, string("abc"));
														auto sb2 = boost::tuples::make_tuple(1, 200.0, string("def"));
														assert(sb1 < sb2);
														decltype(sb1) sb3(sb2);   assert(sb2 == sb3);
														struct A	{};
														boost::tuple<A> g41, g42;
													   // g41 == g42;  没有==操作符函数重载，会编译报错
														typedef boost::tuple<int, double, string> my_tuples;
														my_tuples skt(1, 2.0, "string");
														cout << boost::tuples::set_open('<') << boost::tuples::set_close('$')<<boost::tuples::set_delimiter('#') << skt << endl;
														cout << "please input tuple:";
														my_tuples skt1;
														cin >> skt1;
														cout << skt1 << endl;
														*/
														/*
														circular_buffer<int>cb(5);
														assert(cb.empty());
														cb.push_back(1); cb.push_front(2); assert(cb.front() == 2); cb.insert(cb.begin(), 3);
														for (auto pos = cb.begin(); pos != cb.end(); ++pos)cout << *pos << ' '; cout << endl;
														cb.pop_front(); assert(cb.size() == 2); cb.push_back(); assert(cb[0] == 2);
														circular_buffer<int>cb1 = (boost::assign::list_of(1), 2, 3);
														circular_buffer<int>cb2 = (boost::assign::list_of(3), 4, 5);
														circular_buffer<int>cb3 = cb1;
														assert(cb1 < cb2); assert(cb1 == cb3);
														circular_buffer<int> c = (boost::assign::list_of(1), 2, 3);
														for (auto&x : c)cout << x << ' '; cout << endl;
														c.push_back(4); for (auto&x : c)cout << x << ' '; cout << endl;
														c.push_back(5); for (auto&x : c)cout << x << ' '; cout << endl;
														c.pop_front(); for (auto&x : c)cout << x << ' '; cout << endl;
														circular_buffer<int> c1 = (boost::assign::list_of(1), 2, 3 , 4, 5);
														assert(c1.full());   for (auto&x : c1)cout << x << ' '; cout << endl;
														int *p = c1.linearize(); assert(p[0] == 1 && p[3] == 4);
														c1.rotate(c1.begin() + 2);   for (auto&x : c1)cout << x << ' '; cout << endl;
														circular_buffer<int> cx = (boost::assign::list_of(0), 1, 2, 3, 4, 5, 6, 7, 8, 9);
														auto pcx = cx.begin(); assert(*(pcx + 3) == 3);
												 //	   cout << *(pcx + 10) << endl;     越界运行时出错
														circular_buffer_space_optimized<int> cbs(10);
														boost::assign::push_back(cbs)(1), 2, 3, 4;
														assert(cbs.size() == 4); assert(cbs.capacity() == 10);
														cbs.resize(100, 10); assert(cbs.size() == cbs.capacity());
														*/
														/*
													   using namespace boost::bimaps;
													   typedef  bimap < set_of<tagged<int, struct id> >, multiset_of<tagged<string, struct name> > > bm_t;
														bm_t bm = assign::list_of<bm_t::relation>(1, "mario")(2, "peach");
														boost::assign::insert(bm.by<id>())(3, "wario")(4, "luigi");
														boost::assign::insert(bm.by<name>())("yoshi",5)("olima",6);
														auto right_pos = bm.by<name>().find("yoshi");
														auto left_pos = bm.project<id>(right_pos);
														++left_pos;
														cout << "left:[" << left_pos->get<id>() << "]=" << left_pos->get<name>()<<endl;
														bm.left.insert(bm_t::left_value_type(7, "seven"));
														bm.right.insert(bm_t::right_value_type("八", 8));
														bm.left.insert(bm_t::map_by<id>::value_type(9,"nine"));
														bm.right.insert(bm_t::map_by<name>::value_type("十", 10));
														for (auto&x : bm.left)cout << x.first << "<-->" << x.second << endl;
														*/
														/*
													 bimap<tagged<int, struct id>, tagged<string, struct name> > bm;
														bm.by<id>().insert(make_pair(1, "samus"));
														bm.by<id>().insert(make_pair(2, "adam"));
														bm.by<name>().insert(make_pair("link", 10));
														bm.by<name>().insert(make_pair("zelda", 11));
														for (auto&x : bm.by<name>())cout <<x.first<< "<-->" <<x.second<< endl;
														for (auto&x : bm.by<id>())cout <<x.first<< "<-->" <<x.second<< endl;
														typedef bimap<multiset_of<int>, vector_of<string> >bm_t;
														bm_t bms = boost::assign::list_of<bm_t::relation>(1, "111")(2, "222")(1, "重复一");
														boost::assign::insert(bms.left)(3, "333")(4, "444")(3, "重复三");
														boost::assign::push_back(bms.right)("555", 5)("666", 6);
														for (auto&x : bms.left)cout << x.first << "<-->" << x.second << endl;
														bimap<tagged<int, struct id>, tagged<string, struct name>> bg;
														bg.by<id>().insert(make_pair(1, "samus"));
														bg.by<id>().insert(make_pair(2, "adam"));
														bg.by<name>().insert(make_pair("link", 10));
														bg.by<name>().insert(make_pair("zelda", 11));
														auto po = bg.left.find(1);
														cout << "[" << po->first << "]=" << po->second << endl;
														auto po2 = bg.right.find("link");
														cout << "[" << po2->first << "]=" << po2->second << endl;
														bg.left.replace_key(po, 111);
														bg.left.replace_data(po, "垃圾");
														for (auto&x : bg.left)cout << x.first << "<-->" << x.second << endl;
														 auto po1 = bms.left.find(1);
														 // bms.left.modify_key(po1, boost::bimaps::_key = 1310);
														bms.left.modify_data(po1, boost::bimaps::_data == "fuckYou");
														for (auto&x : bms.left)cout << x.first << "<-->" << x.second << endl;
														auto left_pos = bms.left.find(3);
														auto right_pos = bms.project_right(left_pos);
														cout << "right:[" << right_pos->first << "]=" << right_pos->second;
														*/
														/*
													   bimap<unordered_multiset_of<int>, unordered_multiset_of<string> >bm;
														bm.left.insert(make_pair(1, "111"));
														bm.left.insert(make_pair(2, "222"));
														bm.left.insert(make_pair(2, "555"));
														bm.right.insert(make_pair("string", 10));
														bm.right.insert(make_pair("bimap", 20));
														bm.right.insert(make_pair("bimap", 2));
														for (auto&x : bm.left)cout << x.first << "<-->" << x.second << endl;
														bimap<set_of<int>, vector_of<string> >bm1;
														bm1.left.insert(make_pair(1, "111"));
														bm1.left[2] = "222";
														bm1.left[300] = "bimap";
														for (auto&x : bm1.left)cout << x.first << "<-->" << x.second << endl;
														*/
														/*
													 bimap<int, unordered_set_of<string> >bm1;
														bimap<multiset_of<int>, multiset_of<string> >bm2;
														bimap<unordered_set_of<int>, boost::bimaps::list_of<string> >bm3;
														bimap<vector_of<int>, unconstrained_set_of<string> >bm4;
														*/
														/*
													  bimap<int, string>bm;
														bm.left.insert(make_pair(1, "111"));
														bm.left.insert(make_pair(2, "222"));
														bm.right.insert(make_pair("string", 10));
														bm.right.insert(make_pair("bimap", 20));
														for (auto pos = bm.left.begin(); pos != bm.left.end(); ++pos)
															cout << "left[" << pos->first << "]=" << pos->second << endl;
														bm.left.insert(make_pair(2, "233"));
														bm.right.insert(make_pair("string", 2));
														for (auto pos = bm.left.begin(); pos != bm.left.end(); ++pos)
															cout << "left[" << pos->first << "]=" << pos->second << endl;
													  //  bimap<int, string> bm;
														typedef decltype(bm.left)::value_type left_type;
														typedef decltype(bm.right)::value_type right_type;
														bm.left.insert(left_type(3, "333"));
														bm.right.insert(right_type("double", 32765));
														for (auto pos = bm.left.begin(); pos != bm.left.end(); ++pos)
															cout << "left[" << pos->first << "]=" << pos->second << endl;
														*/
														/*
													   typedef std::complex<double> complex_t;
														typedef std::unordered_map<int, complex_t> um_t;
														um_t s;
														s.emplace(boost::unordered::piecewise_construct, make_tuple(1), make_tuple(1.0, 2.0));
														s.emplace(boost::unordered::piecewise_construct, make_tuple(3), make_tuple(3.0, 4.0));
														for (auto&x : s)  cout << "[" << x.first << "<->" << x.second << "]"; cout << endl;
														s.emplace_hint(s.begin(), boost::unordered::piecewise_construct, make_tuple(5), make_tuple(5.0, 6.0));
														for (auto&x : s)  cout << "[" << x.first << "<->" << x.second << "]"; cout << endl;
														std::unordered_set<demo_classe,demo_classe_hash>ew;
														std::unordered_set<int>us1 = (boost::assign::list_of(1), 2, 3, 4);
														cout << us1.bucket_count() << endl;
														for (std::size_t i = 0; i < us1.bucket_count(); ++i)cout << "第" << i << "个桶:" << us1.bucket_size(i) << endl;
														us1.rehash(10);
														cout<<"rehash:" << us1.bucket_count() << endl;
														for (std::size_t i = 0; i < us1.bucket_count(); ++i)cout << "第" << i << "个桶:" << us1.bucket_size(i) << endl;
														*/
														/*
													  std::unordered_map<int,string > um = boost::assign::map_list_of(1, "one")(2, "two")(3, "three");
														um.insert(make_pair(10, "ten"));
														cout << um[10] << endl;
														um[11] = "eleven"; um[15] = "fifteen";
														auto p = um.begin();
														for (; p != um.end(); ++p)cout << "[" << p->first << "-" << p->second << "]"; cout << endl;
														um.erase(11); cout << um.size() << endl;
														std::unordered_set<int>us1 = boost::assign::list_of(1)(2)(3);
														std::unordered_set<int>us2 = boost::assign::list_of(3)(1)(2);
													   assert(us1 == us2);
													   */
													   /*
													 int n; cin >> n;
													   boost::dynamic_bitset<>db(n);
													   db.set();
													   for (dynamic_bitset<>::size_type i = db.find_next(1); i != dynamic_bitset<>::npos; i = db.find_next(i))
														   for (dynamic_bitset<>::size_type j = db.find_next(i); j != dynamic_bitset<>::npos; j = db.find_next(j))
															   if (j%i == 0)db[j] = 0;
													   for (dynamic_bitset<>::size_type i = db.find_next(2); i != dynamic_bitset<>::npos; i = db.find_next(i))
														   cout << i << ', ';
													   */
													   /*
													dynamic_bitset<>db(5, BOOST_BINARY(01110));
													   cout << db << endl;
													   assert(db.size() == 5);
													   db.clear();
													   assert(db.empty() && db.size() == 0);
													   assert(dynamic_bitset<>(64).num_blocks() == 1);
													   assert(dynamic_bitset<>(65).num_blocks() == 2);
													   dynamic_bitset<>db1(5, BOOST_BINARY(01001));
													   db1.push_back(true);
													   assert(db1.to_ulong() == BOOST_BINARY_UL(101001));
													   dynamic_bitset<>db2(5, BOOST_BINARY(010001));
													   db2.append(BOOST_BINARY(101));
													   assert(db2.size() == sizeof(unsigned long) * 8 + 5);
													   cout << db2 << endl;
													   dynamic_bitset<>db3(4, BOOST_BINARY(1010));
													   db3[0] &= 1;
													   db3[1] ^= 1;
													   cout << db3 << endl;
													   dynamic_bitset<>db4(4, BOOST_BINARY(0101));
													   assert(db3 > db4);
													   cout << (db3^db4) << endl;
													   cout << (db3 | db4) << endl;
													   dynamic_bitset<>db5(4, BOOST_BINARY(0101));
													   assert(db5.test(0) && !db5.test(1));
													   assert(db5.any() && !db5.none());
													   assert(db5.count() == 2);
													   dynamic_bitset<>db6(4,BOOST_BINARY(0101)); db6.flip();
													   assert(db6.to_ulong() == BOOST_BINARY(1010));db6.set();
													   assert(!db6.none());  db6.reset();
													   assert(!db6.any());   db6.set(1, 1);
													   assert(db6.count() == 1);
													   cout <<"db6.count:"<< db6.count() << endl;
													   dynamic_bitset<>db9(5, BOOST_BINARY(10101));
													   dynamic_bitset<>db10(5, BOOST_BINARY(10010));
													   cout <<"并集:"<< (db9 | db10) << endl;
													   cout << "交集:" << (db9&db10) << endl;
													   cout << "差集:" << (db9 - db10) << endl;
													   dynamic_bitset<>db11(5, BOOST_BINARY(101));
													   assert(db11.is_proper_subset_of(db9));
													   dynamic_bitset<>db12(db10);
													   assert(db12.is_subset_of(db10));
													   assert(!db12.is_proper_subset_of(db10));
													   */
													   /*
													   dynamic_bitset<>db8(10, BOOST_BINARY(1010101));
													   string str;
													   boost::to_string(db8, str);
													   cout << str << endl;
													   */
													   //   db8.push_back(1);
													   //   cout << db8.to_ulong() << endl;
														  /*
														  dynamic_bitset<>db;
														  db.resize(10, true);  cout << db << endl;
														  db.resize(5); cout << db << endl;
														 */
														 /*
													   boost::array<int, 3>arr(assign::list_of(2)(4)(6));
														 for (int i = 0; i < arr.size(); ++i)cout << arr[ i ] << ' '; cout << endl;
														 std::vector<bool>d;  std::bitset<34>ew;
														 dynamic_bitset<>db1;
														 dynamic_bitset<>db2(10);
														 dynamic_bitset<>db3(0x16, BOOST_BINARY(10101));
														 dynamic_bitset<>db4(string("0100"));
														 dynamic_bitset<>db5(db3);
														 dynamic_bitset<>db6;  db6 = db4;
														 cout << hex << db5.to_ulong() << endl;
														 cout << db4[0] << db4[1] << db4[2] << endl;
													   */
													   /*
													  execution_monitor em;
													   em.register_exception_translator<my_errors>(&translate_my_err);
													   try
													   {
														   em.execute(gm);
													   }
													   catch (const execution_exception&e) {
														   cout << "execution_exception" << endl;
														   cout << e.what().begin() << endl;
													   }
													   */
													   /*
													   try
														{	 em.execute(test_execution_monitor);}
														catch (execution_exception&e)  {
															cout << "execution_exception" << endl;
															cout << e.what().begin() << endl;
														}
														*/
														// BOOST_TEST_TRAIT_TRUE((std::is_integral<int>));
														// BOOST_TEST_TRAIT_FALSE((std::is_function<int>));
														// boost::report_errors();
														 /*
														boost::shared_ptr<int> p = boost::make_shared<int>(10);
														 BOOST_TEST(*p == 10);
														 BOOST_TEST(p.unique());
														 BOOST_TEST_EQ(p.use_count(), 1);
														 BOOST_TEST_NE(*p, 20);
														 p.reset();
														 BOOST_TEST(!p);
														 BOOST_TEST_THROWS(*p, std::runtime_error);
														 BOOST_ERROR("error accured!!");
														 boost::report_errors();
														 */
														 /*
														cout << my_min((short)1, (short)3) << endl;
														 cout << my_min(1L, 3L) << endl;
														 */
														 /*
														 int aaa = 0x2468;
														 double bbb;
														bit_copy(aaa, bbb);
														*/
														// fux(0);
														 //BOOST_ASSERT_MSG(string().size()==1, "操你妈个B");
														 /*
														char str[] = "*Link*||+Mario+||Zelda!!!||Metroid";
														 cregex reg = cregex::compile("\\w+", icase);
														 cregex_token_iterator pos(str, str + strlen(str), reg);
														 for (; pos != cregex_token_iterator(); ++pos) cout << "[" << *pos << "]"; cout << endl;
														 cregex split_reg = cregex::compile("\\|\\|");
														 pos = cregex_token_iterator(str, str + strlen(str), split_reg, -1);
														 for (; pos != cregex_token_iterator(); ++pos)cout << "[" << *pos << "]"; cout << endl;
														 pos = cregex_token_iterator(str, str + strlen(str), split_reg);
														 for (; pos != cregex_token_iterator(); ++pos)cout << "[" << *pos << "]"; cout << endl;
														 cregex_compiler rc;
														 rc["reg1"] = rc.compile("a|b|c");
														 rc["reg2"] = rc.compile("\\d*");
														 assert(!regex_match("abc", rc["reg1"]));
														 assert(regex_match("123", rc["reg2"]));
														 char es[] = "*Link||+Mario+Zelda!!!||Metroid";
														 cregex rw = cregex::compile("\\w+", icase);
														 cout << regex_replace(es, rw, formater()) << endl;
													   */
													   /* const char haha[] = "123abc";    //静态regex库不能跟boost::mpl::placeholder放一起会有符号冲突
														using namespace boost::proto;
														cregex ri = bos >> *_d >> +_w;
														assert(regex_match(haha, ri));
														*/
														/*
													   string str("Power-bomb,power-suit,pOWER-beam all items\n");
														sregex reg = sregex::compile("power-(\\w{4})", icase);
														sregex_iterator pos(str.begin(), str.end(), reg);
														sregex_iterator end;
														for (; pos != end; ++pos)cout <<"["<< (*pos)[0] << "]";  cout << endl;
														*/

														/*
														string str("readme.txt");
														sregex reg1 = sregex::compile("(.*)(me)");
														sregex reg2 = sregex::compile("(t)(.)(t)");
														cout << regex_replace(str, reg1, "manual") << endl;
														cout << regex_replace(str, reg1, "$1you") << endl;
														cout << regex_replace(str, reg1, "$&$&") << endl;
														cout << regex_replace(str, reg2, "$1N$3") << endl;
														str = regex_replace(str, reg2, "$1$3");
														cout << str << endl;
														*/
														/* string str("2010 Happy new Year!!!");
														sregex reg1 = sregex::compile("^(\\d| )*");
														sregex reg2 = sregex::compile("!*$");
														cout << regex_replace(str, reg1, "") << endl;
														cout << regex_replace(str, reg2, "") << endl;
														str = regex_replace(str, reg1, "Y2000 ");
														cout << str << endl;
														*/
														/*
													   char str[] = "there is a POWER-suit item";
														cregex reg = cregex::compile("(power)-(.{4})", icase);
														assert(regex_search(str, reg));
														cmatch what;
														regex_search(str, what, reg);
														assert(what.size() == 3);
														cout << what[1] << what[2] << endl;
														assert(!regex_search("error message", reg));
														string st("readme.TXT");
														sregex start_reg = sregex::compile("^re");
														sregex end_reg = sregex::compile("txt", icase);
														assert(regex_search(st, start_reg));
														assert(regex_search(st, end_reg));
														assert(regex_search(st, sregex::compile("me")));
														*/
														/*
													  // cregex reg = cregex::compile("\\d{6}(1|2)\\d{3}(0|1)\\d[0-3]\\d\\d{3}(X|\\d)", icase);
														cregex reg = cregex::compile(R"---(\d{6}(1|2)\d{3}(0|1)\d[0-3]\d\d{3}(X|\d))---", icase);
														assert(regex_match("999555197001019999", reg));
														assert(regex_match("99955519700101999X", reg));
														assert(regex_match("99955520100101999x", reg));
														assert(!regex_match("99955520100101999Z", reg));
														assert(!regex_match("99955530100101999X", reg));
														assert(!regex_match("999555201099019998", reg));
														assert(!regex_match("999555201012419998", reg));
														*/
														/*
														sregex re = sregex::compile("\\d{6} ( (1|2) \\d{3}) ( (0|1)\\d) ([0-3]\\d) (\\d{3}(X|\\d) )", icase);
													   // cregex re = cregex::compile(R"--(\d{6} ( (1|2) \d{3}) ( (0|1)\d) ([0-3]\d) (\d{3}(X|\d)) )--", icase);
														smatch what;
														string te = "99955519700101999X";
														if (regex_match(te, what, re)) {
															cout << "这regex_" << endl;
															for (int i = 0; i < what.size(); i++) cout << "str :" << what[i].str() << endl;
														}
														else cout << "哈哈" << endl;
														///for (auto&x : what) cout << "[" << x << "]";   cout << endl;
													   // cout << "date:" << what[1] << what[3] << what[5] << endl;
													   cregex expression=cregex::compile("^select ([a-zA-Z]*) from ([a-zA-Z]*)");
													   std::string in;
													   cmatch whats;
													   //cout << "enter test string" << endl;
													   //getline(cin, in);
													   if (regex_match("select name from table", whats, expression))
													   {
														   cout << "进来le" << endl;
														   for (int i = 0; i < whats.size(); i++) cout << "str :" << whats[i].str() << endl;
													   } else {cout << "Error Input" << endl;}
													   cout << "为各位"<< endl;
													   string s("readme.txt");
													   sregex start_reg = sregex::compile("^re.*");
													   sregex end_reg = sregex::compile(".*txt$");
													   assert(regex_match(s, start_reg));
													   assert(regex_match(s, end_reg));
													   */
													   /*
													   cregex reg = cregex::compile("a.c");
														assert(regex_match("abc", reg));
														assert(regex_match("a+c", reg));
														assert(!regex_match("ac", reg));
														assert(!regex_match("abd", reg));
														*/
														/*
														char str[] = "Link ; ; <master-sword> zelda";
														char_separator<char>sep;
														tokenizer<char_separator<char>, char*>tok(str, str + strlen(str), sep);
														for (auto&x : tok)cout << "[" << x << "]"; cout << endl;
														tok.assign(str, str + strlen(str), char_separator<char>(" ;-", "<>"));
														for (auto&x : tok)cout << "[" << x << "]"; cout << endl;
														tok.assign(str, str + strlen(str), char_separator<char>(" ;-<>", "", keep_empty_tokens));
														for (auto&x : tok)cout << "[" << x << "]"; cout << endl;
														string st = "id,100,name,\"mario\"";
														escaped_list_separator<char>sep1;
														tokenizer<escaped_list_separator<char> >to(st, sep1);
														for (auto&x : to)cout << "[" << x << "]"; cout << endl;
														string s = "2233344445";
														int offsets[] = { 2,3,4 };
														offset_separator sep2(offsets, offsets + 3, true, false);
														tokenizer<offset_separator>t(s, sep2);
														for (auto&x : t)cout << "[" << x << "]"; cout << endl;
														t.assign(s, offset_separator(offsets, offsets + 3, false));
														for (auto&x : t)cout << "[" << x << "]"; cout << endl;
														s += "56667";
														t.assign(s, offset_separator(offsets, offsets + 3, true, false));
														for (auto&x : t)cout << "[" << x << "]"; cout << endl;
														t.assign(s, offset_separator(offsets, offsets + 3, true, true));
														for (auto&x : t)cout << "[" << x << "]"; cout << endl;
														 */
														 /*
														 string str("Link raise the master-sword.");
														 tokenizer<>tok(str);
														 for (auto&x : tok)cout << "[" << x << "]"; cout << endl;
														 */
														 /*
													   string str("Samus||samus||mario||||Link");
														 typedef find_iterator<string::iterator> string_find_iterator;
														 string_find_iterator pos, end;
														 for (pos = make_find_iterator(str, first_finder("samus", is_iequal())); pos != end; ++pos)cout << "[" << *pos << "] "; cout << endl;
														 typedef split_iterator<string::iterator> string_split_iterator;
														 string_split_iterator p, endp;
														 for (p = make_split_iterator(str, first_finder("||", is_equal())); p != endp; ++p)cout << "[" << *p << "] "; cout << endl;
														 auto po= make_find_iterator(str, first_finder("samus", is_iequal()));
														 decltype(po) en;
														 for (; po != en; ++po)cout << "[" << *po << "]"; cout << endl;
														 */
														 /*
													   string str = "Samus,Link.Zelda::Mario-Luigi+zelda";
														 deque<string>d;
														 ifind_all(d, str, "zELDA");
														 assert(d.size() == 2);
														 for (auto&x : d)cout << "[" << x << "] "; cout << endl;
														 std::list<boost::iterator_range<string::iterator> >l;
														 split(l, str, is_any_of(",.:-+"));
														 for (auto&x : l)cout << "[" << x << "] "; cout << endl;
														 l.clear();
														 split(l, str, is_any_of(".:-"), token_compress_on);
														 for (auto&x : l)cout << "[" << x << "] "; cout << endl;
														  l.clear();
														 split(l, str, is_any_of(".:-"), token_compress_off);
														 for (auto&x : l)cout << "[" << x << "] "; cout << endl;
														 std::vector<string>v = boost::assign::list_of("Samus")("Link")("Zelda")("Mario");
														 cout << join(v, "+") << endl;
														 cout << join_if(v, "**", [](string_ref s) {return  boost::algorithm::contains(s, "a"); });
														 */
														 /*
														string str = "Samus beat the monster.\n";
														 cout << replace_first_copy(str, "Samus", "samus");
														 replace_last(str, "beat", "kill");  cout << str;
														 replace_tail(str, 9, "riddley.\n");cout << str;
														 cout << ierase_all_copy(str, "samus");
														 cout << replace_nth_copy(str, "l", 0, "L");
														 cout << erase_tail_copy(str, 9);
														 */
														 /*
														 format fmt("|%s|.pos=%d\n");
														 string str = "Long long ago,there was a king.";
														 boost::iterator_range<string::iterator>rge;
														  rge=find_first(str, "long");
														  cout << fmt % rge % (rge.begin() - str.begin());
														  rge = ifind_first(str, "long");
														  cout << fmt % rge % (rge.begin() - str.begin());
														  rge = find_nth(str, "ng", 2);
														  cout << fmt % rge % (rge.begin() - str.begin());
														  rge = find_head(str, 4);
														  cout << fmt % rge % (rge.begin() - str.begin());
														  rge = find_tail(str, 5);
														  cout << fmt % rge % (rge.begin() - str.begin());
														  rge = find_first(str, "samus");
														  assert(rge.empty() && !rge);
														  */
														  /*
														 string str("I Don't know.\n");
														  cout << to_upper_copy(str); cout << str; to_lower(str); cout << str << endl;
														  string str1("Samus"), str2("samus");
														  assert(!is_equal()(str1, str2)); assert(is_less()(str1, str2));
														  assert(!is_equal()(str1, string_ref(str2)));
														  auto test = [](int i)->int {return i; };
														  cout << test(3) << endl;
														  format fmt("|%s|\n");
														  string st = "  samus aran   ";
														  cout << fmt % trim_copy(st);   cout << fmt % trim_left_copy(st);
														  trim_right(st); cout << fmt % st;
														  string sts = "2015Happy new Year!!!";
														  cout << fmt % trim_left_copy_if(sts, is_digit());
														  cout << fmt % trim_right_copy_if(sts, is_punct());
														  cout << fmt % trim_copy_if(sts, is_punct() || is_digit() || is_space());
														  */
														  /*
														 string str("readme.txt");
														  if (ends_with(str, "txt")) {
															  cout << to_upper_copy(str) + " UPPER" << endl;
															  assert(ends_with(str, "txt"));
														  }
														  replace_first(str, "readme", "followme"); cout << "str:" << str << endl;
														  std::vector<char>v(str.begin(), str.end());
														  std::vector<char>v2 = to_upper_copy(erase_first_copy(v, "txt"));
														  for (auto&ch : v2)cout << ch; cout << endl;
														  */
														  /*
														 const char*ch = "Apple iPhone iPad";
														  string_ref str(ch);
														  assert(!str.empty()); assert(str.size() == strlen(ch));
														  for (auto&x : str)cout << x; cout << endl;
														  assert(str.front() == 'A'); assert(str[1] == 'p'); assert(str.find('i') == 6);
														  auto substr = str.substr(6, 6); assert(substr == "iPhone");
														  string s = str.to_string(); assert(str == s); str.clear(); assert(str.empty());
														  string_ref st("Apple iPhone iPad"); st.remove_prefix(6); assert(st.starts_with("iP"));
														  st.remove_suffix(5); assert(st.ends_with("one"));
														 auto trunk = [](string_ref str)->string_ref { return str.substr(0, 5); };
														 cout <<"trunk:"<< trunk("abcdefg") << endl;
														 */
														 /*
														 cout << format("%s: %d+%d=%d\n") % "sum" % 1 % 2 % (1 + 2);
														 format fmt("(%1%+%2%)*%2%=%3%\n");
														 fmt % 2 % 5; fmt % ((2 + 5) * 5);
														 cout << fmt.str() << endl;
													   //  format fm("%05d\n%8.3f\n% 13s\n%05X\n");
														  format fm("%|05d|\n%|8.3f|\n%| 13s|\n%|05X|\n");
														 cout <<fm % 62 % 2.236%"123456789" % 48;
														  const format f("%|010d|\n%|10.8f|\n%|010X|\n%|010.5f|\n");
														 cout << format(f) % 62 % 2.236 % 255 % 0.618;
														 format fbi("%1% %2% %3% %2% %1% \n");
														 cout << fbi % 1 % 2 % 3;
														 fbi.bind_arg(2, 10); cout << fbi %1 %3;
														 fbi.clear();
														 cout << fbi % boost::io::group(showbase, oct, 111) % 333;
														 fbi.clear_binds();
														 fbi.modify_item(1, boost::io::group(hex, right, showbase, setw(8), setfill('*')));
														 cout << fbi % 49 % 20 % 100;
														 */
														 /*
													   try
														 {
															 cout << lexical_cast<int>("0x100");
															 cout << lexical_cast<double>("HelloWorld");
															 cout << lexical_cast<long>("1000L");
															 cout << lexical_cast<bool>("false") << endl;
														 }
														 catch (bad_lexical_cast&e) { cout << "error:" << e.what() << endl; }
														 assert(num_valid<double>("3.14"));
														 assert(!num_valid<int>("3.14"));
														 assert(num_valid<int>("65535"));
														 cout << "de:" << lexical_cast<string>(demo_classes()) << endl;
														 cout << "new:" << lexical_cast<string>(demo_classx()) << endl;
														 assert(stoi(" 42 ") == 42);
														 assert(stol("100L") == 100L);
														 assert(stol("1000 9") = 1000L); assert(stod("3.14ispi") == 3.14); assert(to_string(776ul) == "776");
														 */
														 //cout << stoul("x100"); cout << stoi("99999999999");
														 /*  int x = lexical_cast<int>("100");
														 long y = lexical_cast<long>("2000");
														 float pai = lexical_cast<float>("3.14159e5");
														 double e = lexical_cast<double>("2.71828");
														 double r = lexical_cast<double>("1.414,x", 5);
														 cout << "x:" << x << "\ny:" << y << "\npai:" << pai << "\ne:" << e << "\nr:" << r << endl;
														 cout << lexical_cast<string>(456) << "\n" << lexical_cast<string>(0.618) << "\n" << lexical_cast<string>(0x10) << endl;
														 cout << "bool:" << lexical_cast<bool>("1") << endl;
														 */
														 /*
														 string str = BOOST_CURRENT_FUNCTION;
														   cout <<"str:"<< str << endl;
														   cout << "_fu_:" << __FUNCTION__ << endl;
														   cout <<"current:"<< BOOST_CURRENT_FUNCTION << endl;
														   func();
														   */
														   /*	cout << hex << showbase;
														   cout << BOOST_BINARY(0110) << endl;
														   cout << BOOST_BINARY(0110 1101) << endl;
														   cout << BOOST_BINARY(10110110 01) << endl;
														   cout << std::bitset<5>(BOOST_BINARY(0110)) << endl;
														   cout << BOOST_BINARY_UL(101 1001) << endl;
														   long long x = BOOST_BINARY_LL(1101);
														   cout << x << endl;
														   */
														   /*
														   static_int s; static_intes b;
														   cout << "s.v1:" << s.v1 << "\n b.v2:" << b.v2 << endl;
														   */
														   /*	cout << BOOST_STRINGIZE(__LINE__) << endl;
														   cout << std::boolalpha << (string("748")==BOOST_STRINGIZE(__LINE__)) << endl;
														   int x = 255;
														   cout << BOOST_STRINGIZE(x) << endl;
														   */
														   /*
															uuid u = nil_generator()();   assert(u.is_nil());
															 u = nil_uuid(); assert(u.is_nil());
															 string_generator sgen;
															 uuid u1 = sgen("0123456789abcdef0123456789abcdef");
															 cout << u1 << endl;
															 uuid u2 = sgen("01234567-89ab-cdef-0123-456789abcdef");
															 cout << u2 << endl;
															 uuid u3 = sgen(L"{01234567-89ab-cdef-0123-456789abcdef}");
															 cout << u3 << endl;
															 uuid www_xxx_com = string_generator()("{0123456789abcdef0123456789abcdef}");
															 name_generator ngen (www_xxx_com);
															 uuid u11 = ngen("mario");
															 cout << "u11:" << u11 << endl;
															 assert(!u11.is_nil() && u11.version() == uuid::version_name_based_sha1);
															 uuid u22 = ngen("link");
															 cout << "u22:" << u22 << endl;
															 uuid u33= ngen("mario");
															 cout << "u33:" << u33 << endl;
															 random_generator rgen;
															 uuid ux = rgen();
															 assert(ux.version() == uuid::version_random_number_based);
															 cout << "ux:" << ux << endl;
															 uuid_t u0s = 0;  assert(u0s.is_nil());
															 uuid_t u1s, u2s; cout << "u1s:" << u1s << "\nu2s:" << u2s << endl;
															 uuid_t u3s("{01234567-89ab-cdef-0123-456789abcdef}");
															 cout << "u3s:" << u3s << endl;
															 cout << "uuid_t:" << uuid_t(u3s, "test name genw") << endl;
															 uuid ug = string_generator()("01234567-89ab-cdef-0123-456789abcdef");
															 string str_ug = to_string(ug); cout << "str_ug:" << str_ug << endl;
															 uuid usb = lexical_cast<uuid>("01234567-89ab-cdef-0123-456789abcdef");
															 cout << "usb:" << usb << endl;
															 string str_usb = lexical_cast<string>(usb); cout << "str_usb:" << str_usb << endl;
															 sha1 sha;
															 const char szMsg[16] = "a short message";
															 sha.process_byte(0x10);
															 sha.process_bytes(szMsg, strlen(szMsg));
															 sha.process_block(szMsg, szMsg + strlen(szMsg));
															 unsigned int digest[5];
															 sha.get_digest(digest);
															 for (int i = 0; i < 5; ++i) std::cout <<hex<< digest[i] << ' '; std::cout << std::endl;
															 std::cout << "结束了\n";
															 */
															 /*
															 uuid u;  assert(uuid::static_size() == 16); assert(u.size() == 16);
															 std::vector<unsigned char>v(16, 7);
															 std::copy(v.begin(), v.end(), u.begin()); assert(u.data[0] == u.data[1] && u.data[15] == 7);
															 cout << "u:" << u << endl;
															 std::fill_n(u.data + 10, 6, 8); cout << "n:" << u << endl;
															 uuid x;
															 std::fill_n(x.begin(), x.size(), 0xab); assert(!x.is_nil()); assert(x.variant() == x.variant_rfc_4122);
															 assert(x.version() == x.version_unknown); cout << "x:" << x << endl;
															 std::memset(x.data, 0, 16); assert(x.is_nil());
															 uuid x1, x2;
															 std::fill_n(x1.begin(), x1.size(), 0xab); std::fill_n(x2.begin(), x2.size(), 0x10); assert(x1 != x2 && x1 > x2);
															 x2.data[0] = 0xff;
															 assert(x1 < x2); std::memset(x1.data, 0, 16); std::memset(x2.data, 0, 16); assert(x1 == x2);
															 */
															 /*
															 typedef boost::tuple<errinfo_api_function, errinfo_errno> err_group;
															  try	{	throw enable_error_info(std::out_of_range("out_of_range")) << err_group("syslogd", 874);	}
														  //	catch (const std::exception&) { cout << current_exception_diagnostic_information() << endl; }
															  catch (boost::exception&) { cout << current_exception_cast<std::exception>()->what(); }
															  */
															  /*try{	throw_exception(std::exception("test"));	}
															  catch (const std::exception&) { exception_ptr e = current_exception(); cout << current_exception_diagnostic_information(); }
															  */
															  /*
															  try
															  {	throw enable_error_info(my_err()) << errinfo_errno(101) << errinfo_api_function("fopen");}
															  catch (boost::exception&e) { cout << diagnostic_information(e) << endl; }
															  try
															  {	BOOST_THROW_EXCEPTION(std::logic_error("logic"));}
															  catch (boost::exception&e) { cout << diagnostic_information(e) << endl; }
															  */
															  //	try { throw enable_error_info(my_err()) << errinfo_errno(10); }
														  //	catch (boost::exception&e) { cout << *get_error_info<errinfo_errno>(e) << endl; }
															  /*
															 typedef boost::error_info<struct tag_err_no, int> err_no;
															  typedef boost::error_info<struct tag_err_str, string> err_str;
															  try
															  {
																  try { throw my_exception() << err_no(10); }
																  catch (my_exception&e)
																  {
																	  cout << *get_error_info<err_no>(e) << endl <<"什么鬼!"<< e.what() << endl;
																	  e << err_str("other info"); throw;
																  }
															  }
															  catch (my_exception&e) { cout <<"这里吗?"<< *get_error_info<err_str>(e) << endl; }
															  */
															  //point p0, p1(1, 2, 3), p2(p1), p3(3, 2, 1); assert(p1 == p2); assert(p1 != p3);
															  /*
															  point p0, p1(1, 2, 3), p2(5, 6, 7), p3(3, 2, 1);
															  std::vector<point>v = (list_of(p0), p1, p2, p3);
															  auto pos = std::find(v.begin(), v.end(), point(1, 2, 3));
															  for (; pos != v.end(); pos = std::find(pos + 1, v.end(), point(1, 2, 3))) pos->print();
															  pos = std::find(v.begin(), v.end(), point(2, 1, 3));
															  assert(pos == v.end());
															  my_smart_ptr<string>p(new string("123"));
															  assert(p->size() == 3);
															  my_smart_array<double>ma(new double[10]);
															  ma[0] = 1.0; *(ma + 1) = 2.0;
															  cout << ma[1] << endl;
															  demo_a a; demo_b b;
															  assert(a && !b);
															  */
															  //	a > b;   //编译错误。。没有这个操作

																  /*
																  tribool tb(true), tb2(!tb);
																  if (tb)cout << "true" << endl;
																  tb2 = indeterminate;
																  assert(indeterminate(tb2));
																  std::cout<<"tb2 " << tb2 << std::endl;
																  if (tb2 == indeterminate)cout << "indeterminate" << endl;
																  if (indeterminate(tb2))cout << "indeterminate" << endl;
																  tribool tb1(indeterminate);
																  if (tb1)cout << "never reach" << endl;
																  if (!tb1)cout << "here" << endl;
																  if (indeterminate(tb1))cout << "indeterminate灌灌灌wegw" << endl;
																  tribool tbs(tmp_ns::unknown);
																  if (indeterminate(tbs))cout << "unknown" << endl;
																  tribool t1(true), t2(false), t3(indeterminate);
																  cout<<boolalpha << "t1:" << t1 << ", t2: " << t2 << ", t3: " << t3 <<noboolalpha<< endl;
																  optional<bool>v;
																  if (!v)cout << "indeterminate" << endl;
																  v = false;
																  if (v)cout<<boolalpha << "v=" << *v<<noboolalpha << endl;
																  */
																  /*
															  int a1[10], a2[10];
																  std::fill_n(a1, 10, 5); std::fill_n(a2, 10, 20);
																  boost::swap(a1, a2);
																  for (int i = 0; i < 10; ++i)cout << a1[i] << ' '; cout << endl;
																  using boost::serialization::singleton;
															  */
															  /*
															  std::vector<int>v = boost::assign::list_of(1)(2)(3)(4)(5);
															   std::deque<string>d = (boost::assign::list_of("power")("bomb"), "phazon", "suit");
															   std::set<int>s = (boost::assign::list_of(10), 20, 30, 40, 50);
															   std::map<int, string>m = boost::assign::list_of(make_pair(1, "one"))(make_pair(2, "two"));
															   std::map<int, int>m1 = boost::assign::map_list_of(1, 2)(3, 4)(5, 6);
															   std::map<int, string,std::greater<int> >m2 = boost::assign::map_list_of(1, "one")(2, "two");
															   for (auto&a : v)cout << a << ' '; cout << endl;
															   for (auto&a : d)cout << a << ' '; cout << endl;
															   for (auto&a : s)cout << a << ' '; cout << endl;
															   for (auto&a : m)cout << a.first<<' '<<a.second<<"\n"; cout << endl;
															   for (auto&a : m1)cout << a.first<<' '<<a.second<<"\n"; cout << endl;
															   for (auto&a : m2)cout << a.first<<' '<<a.second<<"\n"; cout << endl;
															   std::vector<int>v2 = boost::assign::list_of(1).repeat(3, 2)(3)(4)(5);
															   std::multiset<int>ms; boost::assign::insert(ms).repeat_fun(5, &rand).repeat(2, 1), 10;
															   std::deque<int>d2; boost::assign::push_front(d2).range(v2.begin(), v2.begin() + 5);
															   for (auto&a : v2)cout << a << ' '; cout << endl;
															   for (auto&a : ms)cout << a << ' '; cout << endl;
															   for (auto&a : d2)cout << a << ' '; cout << endl;
															   std::stack<int>stk = (boost::assign::list_of(1), 2, 3).to_adapter();
															   stk += 4, 5, 6;
															   for (; !stk.empty();) { cout << stk.top() << ' '; stk.pop(); }	cout << endl;
															   std::queue<string>q = (boost::assign::list_of("china")("us")("uk")).repeat(2, "russia").to_adapter();
															   boost::assign::push(q)("germany");
															   for (; !q.empty();) { cout << q.front() << ' '; q.pop(); }	cout << endl;
															   std::priority_queue<double>pq = (boost::assign::list_of(1.414), 1.732, 2.236).to_adapter();
															   boost::assign::push(pq), 3.414, 2.71828;
															   for (; !pq.empty();) { cout << pq.top()<<' '; pq.pop(); }	cout << endl;
															   int a1 = 1, b1 = 2, c1 = 3;
															   std::vector<int>vs = boost::assign::ref_list_of<3>(a1)(b1)(c1);
															   assert(vs.size() == 3);
															   */
															   /*
															   std::vector<int>v; boost::assign::push_back(v)(1)(2)(3)(4)(5);
															   std::list<string>l;  boost::assign::push_front(l)("cpp")("java")("c#")("python");
															   std::forward_list<string>fl; boost::assign::push_front(fl)("matrix")("reload");
															   std::set<double>s; boost::assign::insert(s)(3.14)(0.618)(1.732);
															   std::map<int, string>m; boost::assign::insert(m)(1, "one")(2, "two");
															   std::vector<int>v1; boost::assign::push_back(v1), 1, 2, 3, 4, 5; boost::assign::push_back(v1), (6), 7, 64 / 8, (9), 10;
															   std::deque<string>d; boost::assign::push_front(d)() = "cpp", "java", "c#", "python"; assert(d.size() == 5);
															   for (auto&a : v1)cout << a << ' '; cout << endl;
															   for (auto&a : l)cout << a << ' '; cout << endl;
															   for (auto&a : fl)cout << a << ' '; cout << endl;
															   */
															   /*	std::vector<int>v;
															   v += 1, 2, 3, 4, 56 * 6;
															   std::set<int>s; s += "cpp", "java", "c#", "python";
															   std::map<int, string>m; m += std::make_pair(1, "one"), std::make_pair(2, "two");
															   */
															   /*
															   optional<int>op0;
															   optional<int>op1(boost::none);
															   assert(!op0); assert(op0 == op1); assert(op1.value_or(253) == 253);
															   cout << op1.value_or_eval([]() {return 874; }) << endl;
															   optional<string>ops("test"); cout << *ops << endl;
															   ops.emplace("monado", 3); assert(*ops == "mon");
															   std::vector<int>v(10); optional<std::vector<int>& >opv(v); assert(opv);
															   opv->push_back(5); assert(opv->size() == 11); opv = boost::none; assert(!opv);
															   boost::optional<double>d = calc(10);
															   if (d)cout << *d << endl;
															   d = sqrt_op(-10); if (!d)cout << "no result" << endl;
															   auto x = boost::make_optional(5); assert(*x == 5);
															   auto y = boost::make_optional<double>(*x > 10, 1.0); assert(!y);
															   */
															   //func(1, 2);
															   /*
															   boost::object_pool<demo_class>p1;
															   auto p = p1.malloc(); assert(p1.is_from(p));
															   assert(p->a != 1 || p->b != 2 || p->c != 3);
															   p = p1.construct(7, 8, 9); assert(p->a == 7);
															   boost::object_pool<string>pls;
															   for (int i = 0; i < 10; ++i) {
																   string *ps = pls.construct("hello object_pool");
																   cout << *ps << endl;
															   }
															   boost::object_pool<demo_c>px;
															   auto d = construct(px, 1, 2, 3, 4);
															   typedef boost::singleton_pool<pool_tagx, sizeof(int)>spl;
															   int *spls = (int*)spl::malloc();
															   assert(spl::is_from(spls));
															   spl::release_memory();
															   std::vector<int, boost::pool_allocator<int> >v;
															   v.push_back(10);
															   cout << "size:" << v.size() << endl;
															   boost::simple_segregated_storage<int>df;
															  */
															  /*	boost::pool<>p1(sizeof(int));
																  int *p = static_cast<int*>(p1.malloc());
																  assert(p1.is_from(p)); p1.free(p);
																  for (int i = 0; i < 100; ++i)p1.ordered_malloc(10);
																  */
																  /*
																 typedef boost::intrusive_ptr<counted_data> counted_ptr;
																  counted_ptr p(new counted_data); assert(p); assert(p->m_count == 1);
																  counted_ptr p2(p); assert(p->m_count == 2);
																  counted_ptr	weak_p(p.get(), false); assert(weak_p->m_count == 2);
																  p2.reset(); assert(!p2); assert(p->m_count == 1);
																  */
																  /*
																  auto p1 = boost::make_shared<nodes>();
																  auto p2 = boost::make_shared<nodes>();
																  p1->next = p2; p2->next = p1;
																  assert(p1.use_count() == 1);assert(p2.use_count() == 1);
																  if (!p1->next.expired())auto p3 = p1->next.lock();
																  */
																  /*
																  auto p = new raw_shared;
																  decltype(shared_from_raw(p)) spx(p);
																  */
																  /*
																  auto p = new raw_shared;
																  auto wp = weak_from_raw(p);
																  assert(wp.use_count() == 0);
																  auto sp = boost::shared_from_raw(p);
																  assert(sp.use_count() == 2);
																  cout <<"cout:"<< sp.use_count() << endl;
																  auto sp2 = sp;
																  auto wp2 = weak_from_raw(p);
																  assert(wp2.use_count() == 3);
																  */
																  /*	raw_shared x; assert(!weak_from_raw(&x).use_count());
																  auto px = boost::shared_from_raw(&x);
																  assert(px.use_count() == 2);
																  */
																  /*
																 auto sp = boost::make_shared<self_shared>(313);
																  sp->print();
																  auto p = sp->shared_from_this();
																  p->x = 1000; p->print();
																  */
																  /*
																  boost::shared_ptr<int>sp(new int(10)); assert(sp.use_count() == 1);
																  boost::weak_ptr<int>wp(sp); assert(wp.use_count() == 1);
																  if (!wp.expired()) {
																	  boost::shared_ptr<int>sp2 = wp.lock();
																	  *sp2 = 100; assert(wp.use_count() == 2);
																  }
																  assert(wp.use_count() == 1);
																  sp.reset();
																  //boost::shared_ptr<int>x = wp.lock(); *x = 201;
																  assert(wp.expired()); assert(!wp.lock());
																  cout << "cout:" << wp.use_count() << endl;
																  */
																  /*
																  int* p = new int[100];
																	  boost::shared_array<int>sa(p);
																	  assert(sa.unique());
																	  boost::shared_array<int>sa2 = sa;
																	  assert(sa2.use_count() == 2);
																	  sa[0] = 10; assert(sa2[0] == 10);
																	  cout << "100:" << sa2[0] << endl;
																	  */
																	  /*
																		 auto p = create();
																		 p->f(); p->g();
																		 socket_t* s = open_socket();
																		 boost::shared_ptr<socket_t>x(s, &close_socket);
																		 boost::shared_ptr<std::exception>sp1(new bad_exception);
																		 auto sp2 = boost::dynamic_pointer_cast<bad_exception>(sp1);
																		 auto sp3 = boost::static_pointer_cast<std::exception>(sp2);
																		 assert(sp3 == sp1);
																		 boost::shared_ptr<void>b(nullptr, any_func);
																		 auto d1 = boost::make_shared<std::pair<int, int> >(0, 1);
																		 boost::shared_ptr<int>d2(d1, &d1->second);
																		 assert(d1.use_count() == 2 && d1.use_count() == d2.use_count());
																		 assert((void*)d1.get() != (void*)d2.get());
																		 assert(&d1->second == d2.get());
																		 typedef boost::shared_ptr<int> int_ptr;
																		 typedef boost::owner_less<int_ptr> int_ptr_less;
																		 int_ptr p1s(new int(10)); int n = 20; int_ptr p2s(p1s, &n);
																		 assert(!int_ptr_less()(p1s, p2s) && !int_ptr_less()(p2s, p1s));
																		 typedef std::set<int_ptr> int_set; int_set sb;
																		 sb.insert(p1s); sb.insert(p2s); assert(sb.size() == 1);
																		 */
																		 /*
																			std::shared_ptr<int>p(new int(100));
																			 shared s1(p), s2(p); s1.print(); s2.print();
																			 *p = 20; print_func(p); s1.print();
																			 auto sp = boost::make_shared<string>("make_shared");
																			 auto spv = boost::make_shared<std::vector<int> >(10, 2);
																			 assert(spv->size() == 10);
																			 typedef std::vector<boost::shared_ptr<int> > vs; vs v(10);  int i = 0;
																		 //	for (auto pos = v.begin(); pos != v.end(); ++pos) {
																		 //		*pos = boost::make_shared<int>(++i);
																		 //		cout << **pos << ' ';
																		 //	}

																			 for (auto&ptr : v) {
																				 ptr = boost::make_shared<int>(++i);
																				 cout << *ptr << ' ';
																			 }
																			 cout << endl;
																			 boost::shared_ptr<int>px= v[9]; *px = 100;
																			 cout << *v[9] << endl;
																			 */
																			 /*
																			 scoped_ptr<posix_file>fp(new posix_file("/tmp/a.txt"));
																			 scoped_ptr<int>p(new int);
																			 if (p) {*p = 100; cout << *p << endl;}
																			 p.reset(); assert(p == 0);
																			 if (!p)cout << "scoped_ptr==nullptr" << endl;
																			 auto mp = boost::make_unique<int>(10);
																			 assert(mp&&*mp == 10);
																			 int *arr = new int[100]; scoped_array<int>sa(arr);
																			 fill_n(&sa[0], 100, 5); sa[10] = sa[20] + sa[30];
																			 unique_ptr<int[]>up(new int[10]); assert(up); up[0] = 10; cout << up[0] << endl;
																			 up.reset(); assert(!up);
																			 auto a = boost::make_unique<int[]>(5); a[0] = 100; a[4] = 500;
																			 int *xm = new int[10]; delete[ ] xm;
																			 */
																			 /*	auto d = 100_D;
																			 auto w = 1_W;
																			 assert(d.days() == 100); assert(w.days() == (7_D).days());
																			 auto today = "2014/11/3"_YMD; cout << today << endl;
																			 date dx(2014, 11, 3);
																			 date_facet* dfacet = new date_facet("%Y年%m月%d日");
																			 cout.imbue(locale(cout.getloc(),dfacet));
																			 cout << dx << endl;
																			 time_facet* tfacet = new time_facet("%Y年%m月%d日%H点%M分%S%F秒");
																			 cout.imbue(locale(cout.getloc(), tfacet));
																			 cout << ptime(dx, hours(21) + minutes(50) + millisec(100)) << endl;
																			 tz_database tz_db;
																			 tz_db.load_from_file("D:\\houtai\\boostContext\\boost_1_70_0\\libs\\date_time\\data\\date_time_zonespec.csv");
																			 time_zone_ptr shz = tz_db.time_zone_from_region("Asia/Shanghai");
																			 time_zone_ptr sfz = tz_db.time_zone_from_region("America/Los_Angeles");
																			 cout << shz->has_dst() << endl;
																			 cout << shz->std_zone_name() << endl;
																			 local_date_time dt_bj(date(2019, 9, 9), hours(16), shz, false); cout <<"时间:"<< dt_bj << endl;
																			 time_duration flight_time = hours(12);dt_bj += flight_time;
																			 cout <<"到达北京时间:"<< dt_bj << endl;
																			 local_date_time dt_sf = dt_bj.local_time_in(sfz);
																			 cout <<"到达当地时间:"<< dt_sf << endl;
																			 */
																			 //	work_time wt;
																			 //wt.greeting(second_clock::local_time());
																			 /*	typedef basic_ptimer<microsec_clock> ptimer;
																			 typedef basic_ptimer<second_clock> sptimer;
																			 ptimer t; sptimer s;
																			 */
																			 /*	ptime p(date(2014, 6, 8), hours(1));
																				 ptime p1 = time_from_string("2014-6-8 01:00:00");
																				 ptime p2 = from_iso_string("20140608T010000");
																			   cout << p << "\n" << endl << p1 << endl << p2 << endl;
																			   ptime p1s = second_clock::local_time(); ptime p2s = microsec_clock::universal_time();
																				 cout <<"p1s:"<< p1s << "\n" << p2s << endl;
																				 ptime px(date(2010, 3, 20), hours(12) + minutes(30));
																				 date dx = px.date();
																				 time_duration td = px.time_of_day();assert(dx.month() == 3 && dx.day() == 20);assert(td.total_seconds() = 12 * 3600 + 30 * 60);
																				 ptime m1(date(2010, 3, 20), hours(12) + minutes(30));
																				 ptime m2 = m1 + hours(3);
																				 assert(m1 < m2); assert(m2 - m1 == hours(3)); m2 += months(1); assert(m2.date().month() == 4);
																				 ptime x1(date(2014, 2, 14), hours(20));
																				 cout << to_simple_string(x1) << endl << to_iso_string(x1) << endl << to_iso_extended_string(x1) << endl;
																				 ptime y(date(2010, 2, 14), hours(20));
																				 tm t_m = to_tm(y);
																				 assert(t_m.tm_year == 110 && t_m.tm_hour == 20);
																				 ptime f = ptime_from_tm(t_m); ptime g = from_time_t(std::time(0)); assert(p.date() == day_clock::local_day());
																				 cout << "f:" << f << endl; cout << "g:" << g << endl;
																				 ptime pg(date(2014, 1, 1), hours(12)); time_period tp1(pg, hours(8)); time_period tp2(pg + hours(8), hours(1));
																				 assert(tp1.end() == tp2.begin() && tp1.is_adjacent(tp2)); assert(!tp1.intersects(tp2));
																				 tp1.shift(hours(1)); assert(tp1.is_after(pg)); assert(tp1.intersects(tp2));
																				 tp2.expand(hours(10)); assert(tp2.contains(pg) && tp2.contains(tp1));
																				 ptime a(date(2014, 11, 3), hours(10));
																				 for (time_iterator t_iter(a,minutes(10)); t_iter < a + hours(1); ++t_iter) cout << *t_iter << endl;
																				 */
																				 /*time_duration td(1, 10, 30, 1000);
																				 cout << td << endl; assert(td.total_milliseconds() == td.total_seconds() * 1000);
																				 assert(td.fractional_seconds() = 1000);assert(time_duration::unit()*1000*1000*1000==seconds(1));
																				 assert(td.resolution() == date_time::nano); assert(td.num_fractional_digits() == 9);
																				 time_duration::tick_type my_millisec = time_duration::ticks_per_second() / 1000;
																				 time_duration tx(1, 10, 30, 10 * my_millisec);
																				 cout << tx << endl;
																				 */
																				 /*	time_duration s(1, 10, 30, 1000), td(1, 60, 60, 1000 * 1000 * 6 + 1000),td2=hours(1)+minutes(10)+seconds(30)+millisec(1);
																				 cout << s << "\n" << td << "\n" << td2 << endl;
																				 hours h(-10); assert(h.is_negative()); time_duration h2 = h.invert_sign(); assert(!h2.is_negative() && h2.hours() == 10);
																				 */
																				 /*credit_card a("A bank", 25), b("B bank", 12);
																				 credit_card tmp = std::max(a, b);
																				 cout << "You should be " << tmp.bank_name << ", free days = " << tmp.calc_free_days() << endl;
																				 cout << a.calc_free_days(date(2010, 5, 26)) << endl;
																				 */
																				 /*	date d(2008, 11, 20);
																				 date d18years = d + years(18);
																				 cout << d18years << " is " << d18years.day_of_week() << endl;
																				 int count = 0;
																				 for (day_iterator d_iter(date(d18years.year(), 11, 1)); d_iter != d18years.end_of_month(); ++d_iter) {
																					 if (d_iter->day_of_week() == Sunday)++count;
																				 }
																				 cout << "total " << count << " Sundays." << endl;
																				 count = 0;
																				 for (month_iterator m_iter(date(d18years.year(), 1, 1)); m_iter < date(d18years.year() + 1,1, 1); ++m_iter)
																					 count += m_iter->end_of_month().day();
																				 cout << "total " << count << " days of years." << endl;
																				 cout << (gregorian_calendar::is_leap_year(d18years.year()) ? 365 : 366) << endl;
																				 */
																				 /*	date d(2019, 9, 6);
																				 date d_start(d.year(), d.month(), 1);
																				 date d_end = d.end_of_month();
																				 for (day_iterator d_iter(d_start); d_iter != d_end; ++d_iter)cout << *d_iter << " " << d_iter->day_of_week() << endl;
																				 */
																				 /*
																				 date d(2006, 11, 26); day_iterator d_iter(d); assert(d_iter == d); ++d_iter; assert(d_iter == date(2006, 11, 27));
																				 year_iterator y_iter(*d_iter, 8); assert(y_iter == d + days(1)); ++y_iter; assert(y_iter->year() == 2014);
																				 day_iterator iter(day_clock::local_day()); ++iter;
																				 typedef gregorian_calendar gre_cal;
																				 cout << "y2014 is " << (gre_cal::is_leap_year(2014)? "" : "not") << " a leap year." << endl;
																				 assert(gre_cal::end_of_month_day(2014, 2) == 28);
																				*/
																				/*	date_period dp1(date(2010, 1, 1), days(20));date_period dp2(date(2010, 1, 5), days(10));
																				date_period dp3(date(2010, 2, 1), days(5)); date_period dp4(date(2010, 1, 15), days(10));
																				assert(dp1.contains(dp2) && dp1.merge(dp2) == dp1);
																				assert(!dp1.intersects(dp3) && dp1.merge(dp3).is_null());
																				assert(dp1.intersects(dp2) && dp1.merge(dp4).end() == dp4.end());
																				assert(dp1.span(dp3).end() == dp3.end());
																				*/
																				/*
																				date_period dp(date(2010, 1, 1), days(20));
																					assert(dp.is_after(date(2009, 12, 1))); assert(dp.is_before(date(2010, 2, 1))); assert(dp.contains(date(2010, 1, 10)));
																					date_period dp2(date(2010, 1, 5), days(10)); assert(dp.contains(dp2)); assert(dp.intersects(dp2)); assert(dp.intersection(dp2) == dp2);
																					date_period dp3(date(2010, 1, 21), days(5));
																					assert(!dp3.intersects(dp2)); assert(dp3.intersection(dp2).is_null()); assert(dp.is_adjacent(dp3)); assert(!dp.intersects(dp3));
																					*/
																					/*
																					date_period dp(date(2014, 1, 1), days(20));
																					   dp.shift(days(3));
																					   assert(dp.begin().day() == 4); assert(dp.length().days() == 20);
																					   dp.expand(days(3)); assert(dp.begin().day() == 1); assert(dp.length().days() == 26);
																					   */
																					   /*
																					   date d1(2000, 1, 1), d2(2014, 11, 18),d3(2014,1,1);
																					   cout << d2 - d1 << endl;
																					   assert(d1 + (d2 - d1) == d2);
																					   d1 += days(10); assert(d1.day() == 11);
																					   d1 += months(2); assert(d1.month() == 3 && d1.day() == 11);
																					   d1 -= weeks(1); assert(d1.day() == 4);
																					   d2 -= years(10); assert(d2.year() == d1.year() + 4);
																					   date d4 = d3 + days(pos_infin); assert(d4.is_pos_infinity());
																					   d4 = d3 + days(not_a_date_time); assert(d4.is_not_a_date());
																					   d4 = date(neg_infin); days dd = d3 - d4; assert(dd.is_special() && !dd.is_negative());
																					   date d5(2014, 3, 30); d5 -= months(1); cout << "d5:" << d5 << endl;
																					   d5 -= months(1); cout << "d5:" << d5 << endl; d5 += months(2);cout<<"d5:"<<d5<<endl;
																					   date_period dp1(date(2014, 1, 1), days(20)), dp2(date(2014, 2, 19), days(10));
																					   cout << "dp1:" << dp1<< endl; assert(dp1 < dp2);
																					   */
																					   /*
																					   date d1;
																					   date d2(2010, 1, 1);
																					   date d3(2000, Jan, 1);
																					   date d4(d2); date d5(max_date_time); date d6(min_date_time); date d7 = from_string("2019-09-08"), d8(from_string("2015/1/1"));
																					   date d9 = from_undelimited_string("20011118");
																					   assert(d1 == date(not_a_date_time));
																					   assert(d2 == d4);
																					   assert(d3 < d4);
																					   cout << "d1:" << d1 << "\nd2:" << d2 << "\nd3:" << d3 << "\nd4:" << d4 << "\nd5:" << d5 << "\nd6:" << d6
																						   << "\nd7:" << d7 << "\nd8:" << d8<<"\nd9:"<<d9 << endl;
																					   date::ymd_type ymd = d8.year_month_day();
																					   assert(ymd.year == 2015); assert(ymd.month == 1); assert(ymd.day == 1);
																					   cout << d7.day_of_week() << "\n" << d7.day_of_year() << endl;
																					   assert(d7.end_of_month() == date(2019, 9, 30));
																					   cout << date(2019, 9, 8).week_number() << endl;
																					   cout << date(2019,12, 31).week_number() << endl;
																					   assert(date(2016, 1, 3).is_special());
																					   cout << to_simple_string(d7) << endl;
																					   cout << to_iso_string(d7) << endl;
																					   cout << to_iso_extended_string(d7) << endl;
																					   cout << d7 << endl;
																					   cin >> d7; cout << d7 << endl;
																					   tm t = to_tm(d7);
																					   assert(t.tm_hour == 0 && t.tm_min == 0);
																					   assert(t.tm_year ==114 && t.tm_mday == 1);
																					   date d21 = date_from_tm(t);
																					   cout << d21 << endl;
																					   days dd1(10), dd2(-100), dd3(255);
																					   assert(dd1 > dd2&&dd1 < dd3);
																					   assert(dd1 + dd2 == days(-90));
																					   assert((dd1 + dd3).days() = 265);
																					   assert(dd3 / 5 == days(51));
																					   weeks w(3);
																					   assert(w.days() == 21);
																					   months m(5); years y(2); months m2 = y + m;
																					   assert(m2.number_of_months() == 29);
																					   assert((y * 2).number_of_years() == 4);
																					   */
																					   /*
																					   std::vector<int>v;
																					   for (int i = 0; i < 100; ++i)v.push_back(i);
																					   v[10] =0; v[23] = 0;
																					   std::ofstream fs("d:\\usr\\强奸.txt",std::ios::out|std::ios::app);
																					   progress_display pd(v.size());
																					   for (auto pos = v.begin(); pos != v.end(); ++pos)
																					   {
																						   fs << *pos << std::endl;
																						   ++pd;
																						   if (*pos==0) std::cout << "null string #" << (pos - v.begin()) << std::endl;
																					   }
																					   */
																					   //timer t;
																					   // vector<std::unique_ptr<CExample> >bx(10); bx[0].reset(new CExample);
																					   /*
																					   std::cout << "Hello World!\n";
																					   typedef mpl::lambda<boost::add_pointer<_1>>::type z;
																					   int* x;
																					   twices<add_pointer_f, int>::type p = &x;
																					   twices<boost::add_pointer<_1>, int>::type q = &x;
																					   std::cout << mpl::apply<mpl::max<_1,_2>, mpl::int_<6>, mpl::int_<8>>::type::value << std::endl;
																					   std::cout << mpl::apply < mpl::multiplies < mpl::plus<_, _>, mpl::minus<_, _>>, mpl::int_<6>, mpl::int_<5>>::type::value << std::endl;
																					   typedef mpl::apply<std::vector<_>,mpl::int_<32>>::type vec;
																					   typedef boost::container::vector<int, char*, double &>seq;
																					   typedef boost::mpl::transform<seq, boost::add_pointer<_> >calc_ptr_seq;
																					   mpl::bool_<true>fa;
																					   std::cout << "bool_<true>fa.value:" << fa.value << std::endl;
																					   std::cout << "is_reference:" << boost::is_reference<int&>::value << std::endl;
																					   typedef boost::mpl::vector4<int,long,char,float>weg;
																					   typedef mpl::map<mpl::pair<bool, unsigned char>, mpl::pair<unsigned char, unsigned short>>::type to_larger;
																					   typedef mpl::transform <
																						   mpl::vector5<int*, char, long[5], bool, double>, returning_ptr<_1> >::type functions;
																					   typedef mpl::vector<int&, long&, char*&>s;
																					   mpl::for_each<s, print_visitor<_1> >(visit_type());
																					   typedef mpl::vector<short[2], long, char*, int>member_types;
																					   mpl::inherit_linearly<
																						   member_types, mpl::inherit<wrap<_2>, _1>
																					   >::type generated;
																					   assert(Int(4) < Int(6));
																					   assert(Int(9) > Int(6));
																					   struct X{ };
																					   BOOST_STATIC_ASSERT(is_class_or_union<X>::value);
																					   std::cout << BOOST_VERSION << std::endl;
																					   std::cout << BOOST_LIB_VERSION << std::endl;
																					   std::cout << BOOST_PLATFORM << std::endl;
																					   std::cout << BOOST_COMPILER << std::endl;
																					   std::cout << BOOST_STDLIB << std::endl;
																					   std::cout << "哈哈哈" << std::endl;
																					   std::cout << "max timespan:	" << t.elapsed_max() / 3600 << "h" << std::endl;
																					   std::cout << "min timespan:" << t.elapsed_min() << "s" << std::endl;
																					   std::cout << "now time elapsed:" << t.elapsed() << "s" << std::endl;
																					   */
																					   //std::cout << "时间:" << t.elapsed() << std::endl;
																				   //	BOOST_STATIC_ASSERT(is_class_or_union<int>::value); //测试失败
																				   //	typedef total_size<node<long, node<int, node<char> > >>::type gfwm;
																					   /*typedef boost::container::vector<char,short,int> types;
																					   typedef mpl::find<types, int>::type  long_pos;
																					   typedef mpl::end<types>finish;
																					   std::vector<int>x12(10);
																					   std::vector<int>::iterator five_pos = std::find(x12.begin(),x12.end(),5);
																					   BOOST_STATIC_ASSERT((!boost::is_same<long_pos,finish>::value));
																					   mpl::random_access_iterator_tag s;
																					   */
																					   //mpl::arg <3>we; 
																					   //boost::is_scalar<int>w;
																					 // boost::mpl::transform<int,int,int>weg;
																				   /*	const char a = 'g';
																					   std::cout << boost::is_unsigned<char>::value<<std::endl;
																					   typedef mpl::vector_c<int, 0, 0, 0, 0, 0, 0, 0>scalar;    //量纲
																					   BOOST_STATIC_ASSERT((mpl::plus<mpl::int_<2>,mpl::int_<3>>::type::value==5));
																					   */
																					   //	int sg= 43;
																						   //char x[5] = "bsmg";
																					   //	char *b = x;
																						   //boost::polymorphic_downcast<char,char>(b);
																						   /*
																						   boost::shared_mutex sh; sh.lock_shared();
																						   std::cout << "哈哈哈!\n";
																						   boost::filesystem::path filepath("D:\\usr\\test\\草泥马.txt");
																						   std::cout << filepath.filename().string() << std::endl;
																						   */
																						   /*using a = int &; using b = int;
																						   std::cout << std::is_same<b, typename add_const_ref<a>::type>::value << std::endl;
																						   using c = int const&;
																						   std::cout << std::is_same<c, typename add_const_ref<b>::type>::value <<std::endl;
																						   */
																						   //std::cout << "共耗时" << boost::chrono::duration_cast<boost::chrono::milliseconds>(boost::chrono::high_resolution_clock::now() - m_begin).count()
	std::cout << "time:" << boost::chrono::duration_cast<boost::chrono::milliseconds>(boost::chrono::high_resolution_clock::now() - m_begin).count() << " seconds" << std::endl;
	return 12;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
