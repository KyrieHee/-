#include<iostream>

using namespace std;

class String
{
    public:
      //普通构造函数
      String(const char *str=NULL);
      
      //拷贝构造函数
      String(const String &other);
      
      //析构函数
      ~ String(void);
      
      //赋值函数
      String & operator =(const String &other);
    
    private:
      //保存字符串
      char *m_data; 
};


//普通构造函数
String::String(const char *str)
{
	cout<<"Constructing Function"<<endl;
	//若str为空，存空字符串""
	if(str == NULL)
	{
		//分配一个字节
		m_data = new char[1];
		//将其赋值为字符串结束符
		*m_data = '\0';
	}
	else
	{
		int len = strlen(str);
		//分配空间
		m_data = new char[len+1];
		//拷贝到m_data
		strcpy(m_data, str);
	}
}


//拷贝构造函数
String::String(const String &other)
{
	cout<<"Constructing Copy Function"<<endl;
	int len = strlen(other.m_data);
	//分配空间
	m_data = new char[len+1];
	//拷贝到m_data
	strcpy(m_data, other.m_data);
}


//析构函数
String::~String(void)
{
	cout<<"Destructing Function"<<endl;
	//若m_data不为空，释放堆内存
	if(m_data != NULL)
	{
		delete [] m_data;
		//释放后将m_data置为NULL，防止出现野指针。
		m_data = NULL;
	}
	
}


//赋值函数
String & String::operator=(const String & other)
{
	cout<<"Operator = Function."<<endl;
	//若对象和other是同一个对象直接返回
	if(this == &other)
	{
		return *this;
	} 

	//释放堆内存
	delete[] m_data;
	m_data = NULL;
  
	int len = strlen(other.m_data);
	//分配空间
    m_data = new char[len+1];
	//拷贝到m_data
	strcpy(m_data, other.m_data);
}

//main函数
int main(char argc, char *argv)
{
	String s1; //普通构造函数
	String s3(s1); //拷贝构造函数
	String s2("hello CPP");//普通构造函数
	s1 = s2;//赋值函数
	system("pause");
	return 0;
}











