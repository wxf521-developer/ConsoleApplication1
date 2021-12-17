#include "pch.h"
/*
#include<iostream>
#include<boost/asio.hpp>
#include<boost/smart_ptr/shared_ptr.hpp>
#include<boost/bind.hpp>
using namespace std;
class server
{
	typedef server this_type;
	typedef boost::asio::ip::tcp::acceptor acceptor_type;
	typedef boost::asio::ip::tcp::endpoint endpoint_type;
	typedef boost::asio::ip::tcp::socket socket_type;
	typedef boost::shared_ptr<socket_type> sock_ptr;
private:
	boost::asio::io_service m_io;
	acceptor_type m_acceptor;
public:
	server() : m_acceptor(m_io, endpoint_type(boost::asio::ip::tcp::v4(), 6688)) { accept(); }
	void run() { m_io.run(); }	
	void accept()
	{
		sock_ptr sock(new socket_type(m_io));
	//	m_acceptor.async_accept(*sock, boost::bind(&this_type::accept_handler, this, boost::asio::placeholders::error, sock));
		m_acceptor.async_accept(*sock, [this, sock](const boost::system::error_code&ec)
		{
			if (ec) return;
			sock->async_send(boost::asio::buffer("hello asio"), [](const boost::system::error_code&, std::size_t) {
				cout << "send msg complete." << endl;
			});
			accept();
		});
	}
	void accept_handler(const boost::system::error_code& ec, sock_ptr sock)
	{
		if (ec) return;
		cout << "client:";
		cout << sock->remote_endpoint().address() << endl;
		sock->async_write_some(boost::asio::buffer("hello asio"),
			boost::bind(&this_type::write_handler, this,
				boost::asio::placeholders::error));
		accept();
	}
	void write_handler(const boost::system::error_code&) { cout << "send msg complete." << endl; }
	void write_handler2(const boost::system::error_code&, std::size_t n) { cout << "send msg " << endl; }
};
int main()
{
	try
	{
		cout << "server start." << endl;
		server srv;
		srv.run();
	}
	catch (const std::exception&e)
	{
		cout << e.what() << endl;
	}
}
*/