1. java中的基本数据类型有哪些
1. Integer a = 100, b = 100, c = 150, d = 150, a == b = (), c == d = ();----java
1. 0.6322 的数据类型是（）：float double Float Double;----java
1. 下面的方法，当输入为2的时候返回值是多少？
```java
public static int getValue(int i) {
    int result = 0;
    switch (i) {
        case 1: 
            result = result + i;
        case 2:
            result = result + i * 2;
        case 3:
            result = result + i * 3;
    }
    return result;
}
```
A.0 B.4 C.6 D.10
1. & 和 && 的区别；
1. 访问修饰符 public， private， protected以及不写时的区别
1. 下面程序的运行结果
```java
class A {
    static {
        System.out.print("A");
    }
    public A() {
        System.out.print("a");
    }
}
class B extends A {
    static {
        System.out.print("B");
    }
    public B() {
        System.out.print("b");
    }
}
public class Hello {
    public static void main(String[] args) {
        A ab = new B();
        ab = new B();
    }
}
```
1. 下面java代码的运行结果是
```java
public class test {
    public static void main() {
        String a = "Hello";
        String b = "Hello";

        String c = new String(a);

        System.out.println(a == b);
        System.out.println(a == c);
    }
}
```
1. 下面的代码是否可以编译通过，如果不能，指出原因，如果能，指出输出结果
```java
public class NULL {
    public static void haha(){
        System.out.println("haha");
    }
    public static void main(String[] args) {
        ((NULL)null).haha();
    }
}
```
1. 下面程序的运行结果
```java
class A {
    public static String value = "A";
    public static void haha() {
        System.out.print(value);
    }
    static {
        System.out.print("Hello");
    }
}
class B extends A {
    public static String value = "World";

    static {
        System.out.print("B" + value);
    }
}
public class HelloB {
    public static void main(String[] args) {
        B.haha();
    }
}
```
1. 链表和数组的区别
2. set和list的区别
2. java中接口和抽象类的区别
3. 什么是值传递, 什么是引用传递
4. 进程和线程的区别
5. 进栈序列为1, 2, 3, 4, 进栈过程中可以出栈, 则下列不可能的出栈序列是(1, 4, 3, 2), (1, 2, 3, 4), (1, 3, 4, 2), (3, 1, 2, 4), (1, 4, 2, 3), (2, 4, 3, 1), (2, 4, 1, 3), (2, 1, 3, 4), (4, 2, 3, 1), (4, 1, 2, 3)
6. 在顺序表(1, 3, 4, 6, 9, 11, 15, 16, 19, 21, 25, 28, 34, 36, 39)中, 用二分法查找关键码值11, 所需的关键码比较次数为多少次
7. 下面C程序的输出结果是
```c
int main()
{
    int m[][3] = {1, 4, 7, 2, 5, 8, 3, 6, 9};
    int i，k = 2;
    for(i = 0; i < 3; i++)
    {
        printf("％d", m[k][i]);
    }
}
```
1. 下面C程序的输出结果是
```c
unsigned fun(unsigned);
int main()
{
	unsigned num = 26;
	printf("%d", fun(num));
    return 0;
}
unsigned fun(unsigned num)
{
	unsigned k = 1;
	do
	{
		k *= num % 10;
		num /= 10;
	} while (num);
	return(k);
}
```
1. 下面C程序的输出结果是
```c
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr=(int *)(&a + 1);
    printf("%d, %d",*(a + 1), *(ptr -1 ));
}
```
1. 下面C程序的输出结果是（windows 32位机）
```c
struct MyStruct
{
	int i;
	char c;
	struct InnerStruct
	{
		int i;
		long l;
		double d;
		char c;
	} innerStruct;
};
union MyUnion
{
	int i;
	char c;
};
int main()
{
   printf("%d, %d", sizeof(MyStruct), sizeof(MyUnion));
}
```
1. 不调用C++/C的字符串库函数，请编写strcat函数
2. 下面C程序的输出结果是
```c
int main()
{
    int a[] = { 1, 2, 3, 4, 5 };
	int *p = a;
	printf("%d, %d", *(p + 1), *(a + 4));
}
```
1. char * const p; chat const * p; const char * p 有什么区别