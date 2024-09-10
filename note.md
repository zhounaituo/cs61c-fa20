- Week1
	- Lec 1
		- 主要介绍了课程的内容，包括计算机结构和其中 6 个重要的思想
		- 计算机结构（Machine Structures）
			- ![[old-school-machine-structures.png]]
			- ![[new-school-machine-structures.png]]
		- 6 个重要计算机结构的思想（Great Ideas in Computer Architecture）![[6-great-ideas-in-computer-architecture.png]]
			1. 抽象（表达/解释的层次）![[abstraction.png]]
			2. 摩尔定律![[moores-law.png]]
			3. 局限原则/内存层次![[principle-of-locality-memory-hierarchy.png]]
			4. 并行性![[parallelism-1.png]]![[parallelism-2.png]]![[parallelism-3.png]]
			5. 性能评测和改进![[performance-measurement-and-improvement.png]]
				- 将进程应用和底层硬件匹配以利用
					- 局部性（Locality）
					- 并行（Parallelism）
					- 特殊硬件功能（Special hardware features）
				- 延迟/传输
					- 在给定时间能够完成多少任务
					- 启动后执行速度有多快
					- 延迟就是完成时间
			6. 通过冗余数据获得可靠性![[Pasted image 20240828112216.png]]
			2. 其他
				1. 存储的延迟类比![[jim-grays-storage-latency-analogy.png]]
				2. 阿姆达尔定理![[amdahls-law.png]]
	- Lec 2：`Bits can represent anything!`
		- 这一节主要讲**比特如何表示一切**，其中包括重要的计算机表示正负数的知识。
		- 进制数相互转换（十进制：D；十六进制：H；二进制：B）
			- `B -> D` / `H -> D`：$d*Base^i$
				- $1101=1*2^3+1*2^2+0*2^1+1*2^0$
				- $AF=10*16^1+15*16^0$
			- `D -> B` / `D -> H`：反向计算（从左到右）/逐除法（从右到左）
				- $157 = 9 * 16^1 + 13 * 16^0 = 9D$
			- `B -> H`：四位分组转换
			  ![[decimal-table.png]]
		- 为什么使用进制数
			- 十进制，对人类友好，方便计算。
			- 十六进制，方便缩短并阅读二进制数。
			- 二进制，对计算机友好，方便计算机运算
		- 如何表示正负数
			- `Sign and Magnitude`（符合与数值表示法/原码）选择一位作为符号标记位。
				- 一般只用于信号处理
				- 缺点：
					- 算术电路复杂，需要额外的步骤处理符号
					- 符号位选择不统一
					- 需要处理两个零
						- `0b00000000 = 0`
						- `0b10000000 = -0`
			- `One's Complement`（反码）反转每个进制数
				- 优点：拥有数学上的连续
				- 缺点：
					- 计算电路依旧复杂
					- 同样有两个零
						- `0b00000000 = 0`
						- `0b11111111 = -0`
			- `Two's Complement` （补码）反码基础上加1![[twos-complement-number.png]]
				- 现代计算机常用的数据存储和错做编码。
				- 作用：
					- 将减法转换成加法，方便电路设计。（**默认存储有限，溢出位舍弃**）
					- 负数在计算机中以补码的方式存储
				- 优点：
					- 计算电路设计简单
					- 只有一个零
				- 缺点：
					- 负数比正数多一
						- `0b10000000`
			- `Bias Encoding` （偏码）始终将总表达数的中位设为 0![[bias-encoding.png]]
				- 缺点
					- 计算电路较为困难
			- `unsigned` （无符号数字）
		- 原码/反码/补码
			- `1 + (-1) = 0001 + 1001 = 0001 + 1111 = 0000 = 0`（高位舍弃）
			- `-1 = 0001 -补码-> 1111 `
			- $负数的补码 = 容量 - 负数的绝对值$   `-1 = 1001 = 2^4 - 1 = 15 = 1111`
			- $容量 = 正数原码 + 负数反码 + 1$   `-1 + 1 -> 1001 + 0001 -> 1110 + 0001 = 1111 = 15 + 1 = 16`
			- $负数的补码 = 负数反码 + 1$
		- 其他
			- 使用二进制**表示**数字的方式是一种抽象，而不是数字本身。
			- 数字本身是无限的（它的右边有无限的 0），只是一般不显示。
		- 常见异常
			- 溢出（`overflow`）：当计算机没有足够的位数可以表示数据时，溢出就发生了。
			  ![[overflow.png]]
	
	- lab01
		- 博尔特虫（`bohrbugs`）：在明确的定义/条件下出现的 bug，可以通过 debugger 捕获。
		- 海森堡虫（`heisenbugs`）：具有不确定性，会在研究他们时消失或改变行为，无法通过 debugger 捕获。
- Week2
	- Lec 3
		- 简介：主要讲解了 C 语言的基础元素。
		- 资源：
			- [[Chapter 2] How Java Differs from C (litux.nl)](https://litux.nl/Books/books/www.leothreads.com/e-book/oreillybookself/java/javanut/ch02_js.htm)
		- 计算机架构
			- ![[ENIAC.png]]`ENIAC`：1946年，由宾夕法尼亚大学制作，是第一台电子通用计算机（`First Electonic General-Purpose Computer`）。
				- 通过插拔电路实现编程，通常一个程序需要 2-3 天
			- ![[EDSAC.png]]`EDSAC`：1949年，由剑桥大学制作，是第一台通用程序存储式计算机（`First General Stored-Program Computer`）。
				- 首次将程序存储到计算机的内存中。也就是说，计算机储存的不仅仅是数字，而且可以是操作计算机的指令。
				- 使用了不能理解的 35位 补码。
		- 第一个操作系统不是用汇编语言写的，而是用 C 语言写的。
		- C 语言的重要概念包括：指针、列表和内存管理。并且，这些都是*不安全*的。
		- 为什么选择 C 语言?
			- 编写程序时，可以利用计算机的底层架构。
			- C 和 C 语言的衍生受欢迎超过了 40 年
			- 如果你需要开始一个全新的程序，可以考虑使用 `Rust` 和 `Go`
				- `Rust` 更安全的 C 语言
				- `Go` 适合并发编程
		- 编译器（`Compile`）和解释器（`Interpret`）：他们之间的差异主要表现在何时转换为机器码。
			- 编译器，将代码转换成机器可以直接运行的机器码（`Machine Code`） 。例如，C 语言的编译器。
				- 特点：针对架构（`architecture-specific`）运行，速度比较快。难以移植，以及较为困难的 debug（每次都需要重新编译测试）。
			- 解释器，将代码转换成字节码（`Bytecode`或中间码），再由其他方式转换成机器码。例如，Java 和 Python
				- 特点：与架构无关（`architecture-independent`），运行速度相对较慢。方便移植。
		- 编译器的优势在于合理的编译（仅修改的文件）和运行速度快（对架构有优化）。但是，如今较多的库对不同的硬件也有优化。
			- Python
				- [Apache Spark™](https://spark.apache.org/)：GPU利用优化库。
				- [Cython](https://cython.org/)：Python 调用 C 语言。
		- ![[CPP.png]]预处理（`CPP`，`C Pre-Processor`）
			- `CPP` 标注以 `#` 开始，如 `#include "file.h"
			  ```javascript
				  #include "file.h" // 插入文件
				  #include <stdio.h> // 查询并插入标准库
				  #define PI (3.14) // 定义常量
				  #if/#endif // 条件插入
			    ```
			- `CPP` 将直接替换掉所有的注释
			- 可以通过 `-save-temps` 存储中间文件。
			- 完整[文档](https://gcc.gnu.org/onlinedocs/cpp/)
			- 可以使用 `CPP` 机制写简单函数，但注意替换机制。如 
			  ```javascript
				  #define min(X,Y) ((X) < (Y) ? (X) : (Y))
				  next = min(w, foo(z)); 
				  /* 被转换为：
				  next = ((w) < (foo(z)) ? (w) : (foo(z)));
				  */
				```
		- [C vs. Java](https://introcs.cs.princeton.edu/java/faq/c2java.html)
			- ![[CvsJava_3.png]]
		- C 标准（`ANSI C`）
			- [C99](https://en.wikipedia.org/wiki/C99)：1999-01
			- [C11](https://en.wikipedia.org/wiki/C11_(C_standard_revision))：2011-12
		- C 语言中的 `main()` -> `int main (int argc, char *argv[])`
			- `argc` 表示参数的数量，包括一个程序名称，所以参数至少是 1。
			- `argc[]` 表示参数数组，第一个是程序名称。
		- C 语言中的 `True/False`
			- `0` 表示 `False`，其他一切都为真。
			- `Null -> 0x00000000`：`Null` 被储存为 `0`
			- 建议使用 `stdbool.h` 库。
	  