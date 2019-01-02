#include <iostream>

using namespace std;


//传值调用
void GetMemory( char **p )
{
	*p = (char *) malloc( 100 );
}
//引用调用
void GetMemory_1(char *&p)
{
	p = (char *) malloc (100);
}

int main()
{
	char *str = NULL;
	char *str1 = NULL;
  
	GetMemory( &str ); //传值调用
	GetMemory_1( str1 );//引用调用

	strcpy( str, "hello world" );
	strcpy( str1, "hello world+1" );
  
	cout<<str<<endl;
	cout<<str1<<endl;
	
  //释放内存
  free(str);
	free(str1);
	
  return 0;
}
