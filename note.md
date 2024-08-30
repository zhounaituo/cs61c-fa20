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
	- 
	
	  