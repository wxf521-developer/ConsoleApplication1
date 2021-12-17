#include "pch.h"
/*
#include<iostream>
#include<boost/asio.hpp>
using namespace std;

int main()
{
  try {
	  typedef boost::asio::ip::tcp::endpoint endpoint_type;
	  typedef boost::asio::ip::tcp::socket socket_type;
	  typedef boost::asio::ip::address address_type;
	  cout << "client start." << endl;
	  boost::asio::io_service io;
	  socket_type sock(io);
	  endpoint_type ep(address_type::from_string("127.0.0.1"), 6688);
	  sock.connect(ep);
	  cout << sock.available() << endl;
	  std::vector<char> str(sock.available() + 1, 0);
	  sock.receive(boost::asio::buffer(str));
	  cout << "receive from " << sock.remote_endpoint().address();
	  cout << &str[0] << endl;
  }
  catch (std::exception&e)
  {
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
	/*
	for (int i = 0; i < 5; ++i)
	{
		boost::asio::ip::tcp::iostream tcp_stream("127.0.0.1", "6688");
		std::string str;
		getline(tcp_stream, str);
		cout <<" receive:"<< str << endl;
	}
	*/
/*
	cout << "client start." << endl;
	boost::asio::io_service io;
	boost::asio::ip::udp::endpoint send_ep(boost::asio::ip::address::from_string("127.0.0.1"), 6699);
	boost::asio::ip::udp::socket sock(io);
	sock.open(boost::asio::ip::udp::v4());
	char buf[1];
	sock.send_to(boost::asio::buffer(buf), send_ep);
	std::vector<char> v(100, 0);
	boost::asio::ip::udp::endpoint recv_ep;
	sock.receive_from(boost::asio::buffer(v), recv_ep);
	cout << "recv from " << recv_ep.address() << endl;
	cout << &v[0] << endl;
}
*/