//写法一
void strcpy(char *dest, char *src)
{
   while((*dest++ = *src++) != '\0')
}


//写法二
void strcpy(char *dest,const char *src)
{
   while((*dest++ = *src++) != '\0')
}

//写法三
void strcpy(char *dest, const char *src)
{
    //对源地址和目的地址加非0断言
   assert((dest != NULL)&&(src != NULL));
   while((*dest++ = *src++) != '\0')
}

//写法四 
//为了实现链式操作，将目的地址返回
void strcpy(char *dest, const char *src)
{
   assert((dest != NULL)&&(src != NULL));
   char *addr = dest;
   while((*dest++ = *src++) != '\0')
      return addr;
}
