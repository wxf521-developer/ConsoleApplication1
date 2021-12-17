#include "pch.h"
#include<iostream>
#include<boost/asio.hpp>
using namespace std;
/*
int main()
{ 
	system("chcp 65001");
	try
	{
		std::cout << "client start...你妈个臭嗨服务器" << std::endl;
		boost::asio::io_service ios;
		boost::asio::ip::tcp::socket sock(ios);
		boost::asio::ip::tcp::endpoint ep(boost::asio::ip::address::from_string("127.0.0.1"), 6688);
		sock.connect(ep);
		char data[128];
		sock.read_some(boost::asio::buffer(data));
		std::cout << "recive from " << sock.remote_endpoint().address() << std::endl;
		std::cout << data << std::endl;
		system("pause");
		return 0;
	}
	catch (const std::exception&e)
	{
		std::cout << e.what() << std::endl;
	}
}
*/
