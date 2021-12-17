#include "pch.h"
#include<iostream>
#include<boost/asio.hpp>
//using namespace std ;
/*int main()
{
	system("chcp 65001");
	try
	{
	    std::cout << "server start你这个大傻逼客户端" << std::endl;
    	boost::asio::io_service ios;
		boost::asio::ip::tcp::acceptor acceptor(ios, boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), 6688));
		std::cout << acceptor.local_endpoint().address() << std::endl;
		while (1)
		{
			boost::asio::ip::tcp::socket sock(ios);
			acceptor.accept(sock);
			std::cout << "client:";
			std::cout << sock.remote_endpoint().address() << std::endl;
			sock.write_some(boost::asio::buffer("叼你妈嗨"));
		}
		
	}
	catch (const std::exception&e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
*/