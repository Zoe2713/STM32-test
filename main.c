#include <stdio.h>
#include <stdarg.h>//处理可变参数列表
int sum(int num_arg,...)//num_arg=number of argument,可变参数的数量
{
  int total = 0;
  va_list ap;//va_list是用于处理可变参数列表的一种类型，通过它可以遍历可变参数;
  va_start(ap,num_arg);
  int i;
  for(i=0;i<num_arg;i++)
  {
    total += va_arg(ap,int);//va_arg宏从可变参数列表中获取下一个参数;
  }
  va_end(ap);
  return total;

}
int main()
{
    int Sum = sum(5,4,7,3,8,2);
    printf("The sum is %d\n",Sum);
    return 0;
}