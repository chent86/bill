#ifndef DEFINES_HPP
#define DEFINES_HPP

#include <string>
using namespace std;
struct form {

	struct Date {
		string year;
		string month;
		string day;
	};

	struct Person {
		string company;		 //��˾
		string landline_telephone;    //�̶��绰
		string address;   //��λ��ַ
		string telephone;    //�ֻ�
	};
  
	struct Cargo{
		string number;     //�������
		string name;       //��������
		string type;       //��װ����
		string weight;     //����
		string volume;     //���
		string price;      //������ֵ
	};

	struct Expense{
		string freight;    //�˷�
		string shuttle;    //�ͻ���
		string others;     //��������
		string pick_up;    //�����
		string insurance;  //���շ�
		string total;      //�ϼ�
	};

	struct Total_payment{
		string wan;           //��
		string thousand;      //ǧ
		string hundred;       //��
		string ten;           //ʮ
		string yuan;          //Ԫ   
	};
	
	string id;           //����

	string location;  //����վ

	Date date;			 //����

	Person receiver;       //�ջ���

	Person sender;     //������

	Cargo cargo;   //������Ϣ

	string note;         //��ע

	Expense expense;	 //���ã�Ԫ��

	Total_payment pay;   //�˷Ѻϼ�

	string document_maker;  //�Ƶ���

	string consignee;     //�����

};

#endif
