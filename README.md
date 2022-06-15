# learncpp - 基于 Windows 环境下的 C++ 入门指南
C++ 相比于 Python、Java、Go、JavaScript、PHP 等主流语言运行速度更快，但难度相对较高。熟悉了 C++ 后再去学习其它的语言会容易很多。

C++ 是编译性语言。通常运行 C++ 程序分为两步，编译和运行。编译就是把代码变成可执行文件 `*.exe`，运行就相当于双击。

这个仓库里的内容不会深入地讲，更重要的是积累学习的经验。

## 常用快捷键
用惯后打字会很方便。
| 按键                | 含义                |
| ------------------- | ------------------- |
| CTRL + c            | 复制                |
| CTRL + v            | 粘贴                |
| CTRL + a            | 全选                |
| CTRL + x            | 剪切（复制 + 删除） |
| CTRL + 方向键       | 快速移动光标        |
| CTRL + tab          | 切换标签页          |
| Shift + 方向键      | 选择文本            |
| Alt + F4            | 关闭窗口            |
| Alt + tab           | 切换窗口            |
| Win + d             | 回到桌面            |
| Win + 方向键        | 移动窗口            |
| Win + tab           | 多桌面视图          |
| Win + CTRL + 方向键 | 切换多桌面          |
| Win + CTRL + d      | 新建桌面            |
| Win + alt + F4      | 删除桌面            |
| Win + S             | 截图                |
| Win + alt + r       | 录屏                |
| F2                  | 重命名              |
| F4                  | 选中 URL（浏览器）  |
| F5                  | 刷新（浏览器）      |

## 一些网站
### MingW
MingW 是一个厂商，它开发的 g++ 与 Linux 下的 g++ 兼容性较好。在后面的内容实际输出的 `.exe` 文件都以 g++ 编译为准。

官网：<https://osdn.net/projects/mingw/>

类似的另外一个厂商是 LLVM，它开发的 C++ 编译器是 clang++，再次不做过多介绍，建议自行搜索。

### VSCode
一个轻量级集成开发环境（IDE）（看不到没关系反正用起来很方便就是了）。

下载地址：<https://code.visualstudio.com/>

下载后可以通过桌面快捷方式或 Win + r 运行 code 或开始菜单搜索来运行。

一些推荐的插件（扩展）：
- 中文翻译 Chinese (Simplified) (简体中文)
- 代码截图 Polacode-2020
- 彩虹括号 Rainbow Brackets
- C++ 扩展包 C/C++ Extension Pack，包括 CMake，代码补全，语法高亮，调试工具等。

## 命令行
按下 Win + r，输入 wt，回车或者在 vscode 按下 CTRL + \`，弹出了一个黑底白字的窗口，现在你可以简单地认为它就是我指的**命令行**。在这里用户通过输入命令来与计算机交互。
```
PS C:\Users\86135>
```
`C:\Users\86135` 是当前的**工作目录**，我们进行的所有操作都以这个目录为起点进行。`>` 提示你输入命令。这是一些常用命令：
| 命令      | 描述                                    |
| --------- | --------------------------------------- |
| type/cat  | 输出文件内容                            |
| cd        | change working directoty，切换工作目录  |
| md/mkdir  | make directory，新建文件夹              |
| rd/rmdir  | remove directory，删除文件夹            |
| rm/del    | remove/delete，删除文件                 |
| man/help  | 教你做事                                |
| cls/clear | clear，清除屏幕                         |
| rename/mv | move，重命名                            |
| move/mv   | 移动文件 / 文件夹                       |
| tree      | 以树状图显示文件结构                    |

如果想运行工作目录下的某个脚本 `*.bat` 或可执行文件 `*.exe`，可以这样做（假设它是 `hello.exe`）：
```
PS C:\Users\86135> .\hello
Hello world.
PS C:\Users\86135>
```
在 Windows 中的 Powershell 运行脚本 / 可执行文件不需要加后缀，但需要加上所在目录。`.` 表示当前所在目录，`..` 表示上一级目录。

在命令行中，表示一个文件的位置有两种方式，**绝对路径**和**相对路径**。绝对路径就是以盘符（如 `C:\`）开头的，相对路径是相对于工作目录而言的。

## 目录
基础
1. Hello world
2. 变量与输入
3. scanf 与 printf
4. 函数与命名空间
5. 类与结构体

数据结构
1. 数组
2. 栈、队列
3. 堆、优先队列

预处理专题
1. define
2. include
3. pragma

算法
1. 排序
2. 搜索
3. 动态规划初步
