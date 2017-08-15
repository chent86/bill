#ifndef DEFINES_HPP
#define DEFINES_HPP

#include<string>
using namespace std;
struct form {

	struct Date {
		string year;
		string month;
		string day;
	};

	struct Person {
		string company;		 //公司
		string landline_telephone;    //固定电话
		string address;   //单位地址
		string telephone;    //手机
	};
  
	struct Cargo{
		string number;     //货物件数
		string name;       //货物名称
		string type;       //包装类型
		string weight;     //重量
		string volume;     //体积
		string price;      //货保价值
	};

	struct Expense{
		string freight;    //运费
		string shuttle;    //送货费
		string others;     //其他费用
		string pick_up;    //提货费
		string insurance;  //保险费
		string total;      //合计
	};

	struct Total_payment{
		string wan;           //万
		string thousand;      //千
		string hundred;       //百
		string ten;           //十
		string yuan;          //元   
	};
	
	string id;           //单号

	string location;  //到达站

	Date date;			 //日期

	Person receiver;       //收货人

	Person sender;     //发货人

	Cargo cargo;   //货物信息

	string note;         //备注

	Expense expense;	 //费用（元）

	Total_payment pay;   //运费合计

	string document_maker;  //制单人

	string consignee;     //提货人

};

#endif