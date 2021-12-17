#include "pch.h"
/*
#include<iostream>
#include<boost/asio.hpp>
#include<boost/smart_ptr/shared_ptr.hpp>
#include<boost/bind.hpp>

using namespace std;
class client
{
	typedef client this_type;
	typedef boost::asio::ip::tcp::endpoint endpoint_type;
	typedef boost::asio::ip::address address_type;
	typedef boost::asio::ip::tcp::socket socket_type;
	typedef boost::shared_ptr<socket_type> sock_ptr;
	typedef std::vector<char> buffer_type;
private:
	boost::asio::io_service m_io;
	buffer_type m_buf;
	endpoint_type m_ep;
public:
	client() : m_buf(100, 0), m_ep(address_type::from_string("127.0.0.1"), 6688) { start(); }
	void run() { m_io.run(); }
	void start()
	{
		sock_ptr sock(new socket_type(m_io));
	//	sock->async_connect(m_ep, boost::bind(&this_type::conn_handler, this,
	//		boost::asio::placeholders::error, sock));
		sock->async_connect(m_ep, [this, sock](const boost::system::error_code&ec) {
			if (ec) return;
			sock->async_read_some(boost::asio::buffer(m_buf), [this, sock]
			(const boost::system::error_code&ec, std::size_t) {
				read_handler(ec, sock);
			});
		});
	}
	void conn_handler(const boost::system::error_code&ec, sock_ptr sock)
	{
		if (ec) return;
		cout << "receive from " << endl;
		sock->async_read_some(boost::asio::buffer(m_buf),
			boost::bind(&client::read_handler, this, boost::asio::placeholders::error,sock));
	}
	void read_handler(const boost::system::error_code&ec,sock_ptr sock)
	{
		if (ec) return;
		cout << &m_buf[0] << endl;
		sock->async_read_some(boost::asio::buffer(m_buf),
			boost::bind(&client::read_handler, this, boost::asio::placeholders::error, sock));
	}
};
int main()
{
	try
	{
		cout << "client start." << endl;
		client cl;
		cl.run();
	}
	catch (const std::exception&e)
	{
		cout << e.what() << endl;
	}
}
*/