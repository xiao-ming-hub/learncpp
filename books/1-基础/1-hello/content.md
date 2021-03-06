# 1 - Hello world
## 环境搭建
见 [README.md](../../../README.md)

## 编译、运行
这是 C++ Hello world 代码：
```cpp
#include <iostream>
using namespace std;
int main() {
  cout << "Hello world." << endl;
  return 0;
}
```
保存文件为 `hello.cpp`。在命令行输入编译命令：
```
PS C:\Users\<username>\Document\cpp> g++ hello.cpp
```
工作目录下多了个 `a.exe`。运行它：
```
PS C:\Users\<username>\Document\cpp> .\a.exe
Hello world!
```
很显然，这段代码的功能就是输出一行文字。现在你可以试着修改这段代码，使它输出 “Hello\_world?”。

## Hello world!
第一行的作用是 “引入头文件”。事实上在安装 g++ 时也自动下载了一些代码，其中就有一份名为 iostream 的代码文件。第一行就是让编译器自动把那份文件里的代码复制粘贴到我们写的代码里。我们可以试着去掉这一行，再编译看看会有什么反应。它报错了！它说它不认识 `cout` 是什么意思。它还很友好地提示你，是不是少了这一行。在 C++ 中，通常把以 # 号开头，换行符结尾的代码视为预处理指令。预处理在以后会详细介绍，现在只要认识这三个字就行。

看第二行。它翻译过来就是 “使用 `std` 命名空间”。关于命名空间的概念，我们会在学习函数时进一步讲解。我们可以试着去掉这一行，它又说它不认识 `cout` 了。

看第三行和第六行，它的意思是 “定义 `main` 函数”，它告诉计算机程序从哪开始执行。和前面一样我们暂且不用在乎它是什么含义，只要知道少了它程序就不能运行即可。计算机会从第四行开始运行。

第四行的意思是输出一行字符串 “Hello world!” 然后换行。`cout` 可以向屏幕输出一些东西。我们把要输出的和 `cout` 用流运算符 `<<` 连接起来，计算机就会把我们向输出的东西输出到屏幕。`endl` 是 “end line” 的缩写，计算机看到它时就会另起一行。

第五行翻译过来就是 “返回 0” 。它告诉了计算机什么时候结束这段程序。当计算机运行到 `return` 语句时就会结束运行。返回 0 意味着这个程序是因为正常退出的，如果返回其他值就意味着程序是因为其它原因才会退出的。

## 关于代码规范
在 C++ 中大多数的空格和换行符可以省略，也就是说上面的代码也可以这么写：
```cpp
#include <iostream>
using namespace std;int main(){cout<<"Hello world."<<endl;return 0;}
```
但这样写的代码会很难看，且如果哪个地方写错了，检查哪里出问题时会很麻烦。

## 注释
有的时候我们看自己以前写的代码或者别人看我们写的代码也会看不懂。所以给代码添加一些文字说明是有必要的。这就是注释的作用。注释的本质是让编译器忽略标记的一段代码。让编译器忽略一段代码有三种方法：`/**/`、`//` 和预处理语句。通常，编辑器会把注释用其它的颜色显示。这是一个给 Hello world 添加注释的例子：
```cpp
/*
这是一份 C++ 入门的代码，
它的功能是输出一行字符串 “Hello world!”。
by xiaoming, May 22nd, Sunday.
*/
#include <iostream>               // 引入 iostream 头文件
using namespace std;              // 使用 std 命名空间
int main() {                      // 声明 main 函数，并开始实现
  cout << "Hello world!";         // 输出字符串
  cout << endl;                   // 换行
  return 0;                       // 返回 0
}                                 // 结束 main 函数实现
```

预处理语句的注释在以后会讲解。可以看到，放在 `/*` 和 `*/` 之间的、`//` 和换行符之间的内容会被编译器忽略掉。注释还有一个作用是，如果我们不想计算机执行某条语句，但又不想删掉时，可以把它变成注释，也就是这样：
```cpp
// cout << "Hello world!" << endl;
```

你也许会在其它地方看到向这样的注释：
```cpp
/* ofjiwea;fhio;wae'ghnva'g
 * ;hfweoirf;ahewioafh;ewiu
 * asfjlhksjkdfhslkjdfhskjf
 * ；;fshaiufaewuifhna;weri
 * afh;hgew3iufh;goew3uaisd
 * */
```
它和前面的空格换行一样，这样做也是为了好看。

## 练习
1. 用两种方法输出数字 1234；
2. 输出三行的 abc；
3. 思考 `cout << 123 << 321 << endl;` 会输出什么，并验证；
4. 思考下面两条语句会输出什么，并验证：
```cpp
cout << "Hello";
cout << "world." << endl;
```

## 注意
1. 英语输入法写代码，如果你怕不小心切换到中文输入法，可以在输入法的设置中设置中英文切换的快捷键；
1. 一条语句结束后要带上分号；
2. 字符串用双引号 `""`，字符用单引号 `''`。`'a'` 和 `"a"` 的区别以后会讲。
