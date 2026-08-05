# Markdown 基础

## 1. Markdown 是什么

Markdown 是一种轻量级标记语言。

`.md` 文件本质上是纯文本文件，和 `.txt` 类似，但可以通过简单符号表示标题、列表、代码块、加粗等格式。

Markdown 常用于：

- 编写技术笔记；
- 编写项目说明；
- 编写 GitHub 仓库的 README；
- 展示代码和命令；
- 记录学习过程。

## 2. Markdown 和 TXT 的区别

`.txt` 只能保存普通文本。

`.md` 同样保存纯文本，但支持使用简单符号组织排版，并且可以在 `VS Code` 和 `GitHub` 中渲染成更清晰的页面。

## 3. 常用语法

### 标题

```markdown
# 一级标题
## 二级标题
### 三级标题
```

### 无序列表

```markdown
- 第一项
- 第二项
- 第三项
```

### 有序列表

```markdown
1. 第一项
2. 第二项
3. 第三项
```

### 加粗

```markdown
**重点内容**
```

### 行内代码

```markdown
`pwd`
```

适合记录较短的命令、文件名和代码。

### 代码块

使用三个反引号包裹代码：

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, C++!" << endl;
    return 0;
}
```

PowerShell 命令可以写成：

```powershell
Get-ChildItem -Recurse -Filter *.exe -File
```

### 引用或提示

```markdown
> 注意：执行删除命令前先检查当前路径。
```

### 任务清单

```markdown
- [x] 已经完成
- [ ] 尚未完成
```

## 4. VS Code 预览 Markdown

打开 `.md` 文件后，按：

```text
Ctrl + Shift + V
```

可以查看渲染后的 Markdown 页面。

## 5. README.md 的作用

`README.md` 也是普通 Markdown 文件，但它是项目中约定俗成的说明文件。

通常用于记录：

- 项目或仓库是什么；
- 学习目标；
- 目录结构；
- 使用方法；
- 当前进度。

GitHub 会自动展示仓库根目录下的 `README.md`。

## 6. 当前需要记住的内容

1. `.md` 是纯文本文件；
2. Markdown 比 `.txt` 更适合技术笔记；
3. `README.md` 是项目总说明；
4. 代码块可以保留格式并显示语法高亮；
5. VS Code 可以直接预览 Markdown。