#ifndef DEFINES_HPP
#define DEFINES_HPP

#include<string>
using namespace std;
struct form {

	struct Date {
		int year;
		int month;
		int day;
	};

	struct Person {
		string name;		 //姓名
		string address;   //单位地址
		string telephone;    //电话
	};
  
	struct Cargo{
		string name;       //货物名称
		string type;       //包装类型
		string number;     //货物件数
		string unit;       //单位
		string weight;     //重量/体积
		string price;      //声明/价格
	};

	struct Expense{
		string freight;    //运费
		string shuttle;    //接送费
		string insurance;  //保险费
		string others;     //其他费用
		string total;      //合计
	};

	struct Total_payment{
		int wan;           //万
		int thousand;      //千
		int hundred;       //百
		int ten;           //十
		int yuan;          //元   
	};
	
	string id;           //单号

	string location;  //到达站

	Date date;			 //日期

	Person sender;       //发货人

	Person receiver;     //收货人

	Cargo m_cargos[3];   //货物信息

	Expense expense;	 //费用（元）

	string payment_method;  //运费交付方式

	Total_payment pay;   //运费合计

	string note;         //备注
};

#endif