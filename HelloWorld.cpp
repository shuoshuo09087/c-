/*#include <iostream>
using namespace std;

// main() �ǳ���ʼִ�еĵط�

int main()
{
	cout << "Hello World"; // ��� Hello World
	return 0;
}
*/
#include <iostream>
 
// �������� 
void func(void);
 
static int count = 10; /* ȫ�ֱ��� */
 
int main()
{
    while(count--)
    {
       func();
    }
    return 0;
}
// ��������
void func( void )
{
    static int i = 5; // �ֲ���̬����
    i++;
    std::cout << "���� i Ϊ " << i ;
    std::cout << " , ���� count Ϊ " << count << std::endl;
}