#include "pch.h"
/*
#include<iostream>
#include<boost/asio.hpp>
using namespace std;
int main()
{
	try
	{
		typedef boost::asio::ip::tcp::acceptor acceptor_type;
		typedef boost::asio::ip::tcp::endpoint endpoint_type;
		typedef boost::asio::ip::tcp::socket socket_type;
		cout << "server start." << endl;
		boost::asio::io_service io;
		acceptor_type acceptor(io, endpoint_type(boost::asio::ip::tcp::v4(), 6688));
		cout << acceptor.local_endpoint().address() << endl;
		for (;;)
		{
			socket_type sock(io);
			acceptor.accept(sock);
			cout << "client:";
			cout << sock.remote_endpoint().address() << endl;
			sock.send(boost::asio::buffer("hello asio"));
		}
	}
	catch (std::exception& e) {
		cout << e.what() << endl;
	}
}
*/
	/*
#include<iostream>
#include<boost/asio.hpp>
using namespace std;
int main()
{
	boost::asio::io_service io;
	boost::asio::ip::tcp::endpoint ep(boost::asio::ip::tcp::v4(), 6688);
	boost::asio::ip::tcp::acceptor acceptor(io, ep);
	for (; ;)
	{
		boost::asio::ip::tcp::iostream tcp_stream;
		acceptor.accept(*tcp_stream.rdbuf());
		tcp_stream<<"server send:" << "hello tcp stream";
	}
	*/
	/**
	cout << "udp server start." << endl;
	boost::asio::io_service io;
	boost::asio::ip::udp::socket sock(io, boost::asio::ip::udp::endpoint(boost::asio::ip::udp::v4(), 6699));
	for (; ;)
	{
		char buf[1];
		boost::asio::ip::udp::endpoint ep;
		boost::system::error_code ec;
		sock.receive_from(boost::asio::buffer(buf), ep, 0, ec);
		if (ec) throw boost::system::system_error(ec);
		cout << "send to " << ep.address() << endl;
		sock.send_to(boost::asio::buffer("hello asio udp"), ep);
	}
}
	*/