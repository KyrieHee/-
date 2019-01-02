#include<iostream>
#include<assert.h>

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
  if(str == NULL)
  {

    m_data = new char[1];
    assert(m_data != NULL);
    *m_data = '\0';
  }
  else
  {
    int length = strlen(str);
    m_data = new char[length+1];
    strcpy(m_data, str);
  }
}


//拷贝构造函数
String::String(const String &other)
{
  int length = strlen(other.m_data);
  m_data = new char[length+1];
  strcpy(m_data, other.m_data);
}


//析构函数
String::~String(void)
{
  delete [] m_data;
  m_data = NULL;
}


//赋值函数
String & String::operator=(const String & other)
{
  if(this == &other)
    return *this;
    
  delete[] m_data;
  m_data = NULL;
  
  int length = strlen(other.m_data);
  m_data = new char[length+1];
  assert(m_data != NULL);
  strcpy(m_data, other.m_data);
  
  return *this;
}

//main函数
int main(char argc, char *argv)
{
  String s1; //普通构造函数
  String s2("hello CPP");//拷贝构造函数
  s1 = s2;//赋值函数
  
  return 0;
}











