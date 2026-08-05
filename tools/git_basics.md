# Git 与 GitHub 入门笔记

## 1. PowerShell、Git 与 GitHub 的关系

- **PowerShell**：Shell，负责接收命令、调用程序并显示结果。
- **Git**：安装在电脑上的版本控制工具，负责管理文件历史。
- **GitHub**：在线代码托管平台，用于保存远程仓库、展示项目和协作。

执行：

```powershell
git status
```

实际过程：

```text
用户输入命令
→ PowerShell 调用 Git
→ Git 检查仓库
→ PowerShell 显示 Git 的结果
```

Git 不等于 GitHub。没有 GitHub 时，Git 仍然可以在本地提交、查看历史、建立分支和恢复文件。

---

## 2. 仓库、提交与快照

### repository

仓库是一个由 Git 管理的项目目录，以及对应的版本历史。

执行：

```powershell
git init
```

会在当前目录创建隐藏的 `.git` 目录，使普通目录成为本地 Git 仓库。

不要手动修改或删除 `.git`。删除它会使当前目录失去提交历史、分支和仓库身份。

### commit

提交是一次正式的版本记录。

提交通常记录：

- 文件快照
- 提交者姓名和邮箱
- 提交时间
- 提交说明
- 唯一提交编号（commit hash）

### snapshot

快照表示项目在某个时间点被正式保存下来的状态。

---

## 3. Git 的四个区域

```text
工作区 working tree
        ↓ git add
暂存区 staging area
        ↓ git commit
本地仓库 local repository
        ↓ git push
远程仓库 remote repository
```

### 工作区

当前可以直接打开、编辑、创建和删除的项目文件。

类比：正在写的作业草稿。

### 暂存区

挑选出来、准备进入下一次提交的内容。

类比：从草稿中选出的“待正式保存内容”。

`git add` 只把内容放进暂存区，不是上传。

### 本地仓库

保存在自己电脑上的正式提交历史。

`git commit` 只创建本地提交，不是上传 GitHub。

### 远程仓库

保存在 GitHub 服务器上的仓库。

`git push` 才会把本地提交推送到远程仓库。

---

## 4. 常见文件状态

### untracked

文件存在于工作区，但从未被 Git 跟踪。

### modified

文件以前已经被跟踪，但工作区内容发生了变化。

### staged

当前文件内容已经通过 `git add` 加入暂存区。

### committed

暂存区内容已经通过 `git commit` 形成正式提交。

常见变化：

```text
untracked → staged → committed
modified  → staged → committed
```

---

## 5. Git 初始配置

查看版本：

```powershell
git --version
```

查看全局用户名和邮箱：

```powershell
git config --global user.name
git config --global user.email
git config --global --list
```

设置全局配置：

```powershell
git config --global user.name "用户名"
git config --global user.email "邮箱"
```

`--global` 表示当前 Windows 用户下所有仓库的默认配置。

单独为当前仓库设置邮箱：

```powershell
git config user.email "邮箱"
```

没有 `--global` 时，只影响当前仓库。

公开仓库推荐使用 GitHub 提供的隐私邮箱：

```text
数字+用户名@users.noreply.github.com
```

---

## 6. 创建本地仓库的基本流程

进入项目目录：

```powershell
cd D:\项目目录
```

初始化：

```powershell
git init
```

查看隐藏的 `.git`：

```powershell
dir -Force
```

检查状态：

```powershell
git status
```

暂存指定文件：

```powershell
git add README.md
```

暂存当前目录中符合条件的所有变化：

```powershell
git add .
```

创建提交：

```powershell
git commit -m "提交说明"
```

查看完整历史：

```powershell
git log
```

简洁查看历史：

```powershell
git log --oneline
git log --oneline --decorate -5
```

---

## 7. 查看变化

查看工作区与暂存区的差异：

```powershell
git diff
```

主要用于查看尚未暂存的修改。

查看暂存区与最新提交的差异：

```powershell
git diff --staged
```

主要用于提交前检查将要提交什么。

查看最新一次提交：

```powershell
git show
```

查看指定提交：

```powershell
git show 提交编号
```

只查看指定文件的变化：

```powershell
git diff -- README.md
```

`--` 表示后面的是文件路径。

查看暂存文件名：

```powershell
git diff --staged --name-only
```

查看暂存变化统计：

```powershell
git diff --staged --stat
```

---

## 8. 安全撤销

### 丢弃工作区中尚未暂存的修改

撤销前先执行：

```powershell
git status
git diff
```

确认后执行：

```powershell
git restore 文件名
```

警告：这会丢弃该文件尚未暂存的修改。

旧写法：

```powershell
git checkout -- 文件名
```

现在优先使用 `git restore`。

### 撤销暂存，但保留文件修改

```powershell
git restore --staged 文件名
```

效果：

```text
staged → modified
```

它只是撤销 `git add`，不会删除工作区中的代码。

### 撤销已经提交的修改

```powershell
git revert 提交编号
```

`revert` 通常不会删除旧提交，而是创建一个新提交来反向抵消旧提交的效果，适合已经共享的历史。

当前阶段不要随意使用：

```powershell
git reset --hard
git clean -fd
git push --force
```

---

## 9. .gitignore

`.gitignore` 用来忽略不应该进入版本历史的未跟踪文件。

C++ 项目示例：

```gitignore
*.exe
*.o
*.out
*.obj
```

应该跟踪：

```text
.cpp
.h
.hpp
README.md
学习笔记
必要的项目配置
```

通常不跟踪：

```text
.exe
.o
.out
.obj
```

查看被忽略的文件：

```powershell
git status --ignored
```

`.gitignore` 不会自动停止跟踪已经提交过的文件。

---

## 10. 分支基础

查看分支：

```powershell
git branch
```

创建并切换到新分支：

```powershell
git switch -c practice
```

切换回主分支：

```powershell
git switch main
```

合并分支：

```powershell
git merge practice
```

删除已经合并的分支：

```powershell
git branch -d practice
```

分支不是复制整个文件夹，而是一个指向提交的位置标记。

### Fast-forward

如果主分支在创建实验分支后没有产生新提交，合并时只需要把主分支指针向前移动：

```text
Fast-forward
```

### 合并冲突

当两个分支对同一部分内容进行了互相矛盾的修改时，Git 可能无法自动决定保留哪一边。

解决基本流程：

```text
打开冲突文件
→ 人工决定最终内容
→ 删除冲突标记
→ git add
→ git commit
```

---

## 11. GitHub 远程仓库

### origin

`origin` 是给远程仓库起的本地简称，不是 GitHub 强制规定的固定名称。

添加远程仓库：

```powershell
git remote add origin 远程地址
```

查看远程关联：

```powershell
git remote -v
```

### push

把本地提交推送到远程：

```powershell
git push
```

第一次推送并建立上游关系：

```powershell
git push -u origin main
```

`-u` 会让本地 `main` 记住默认对应 `origin/main`。

### pull

获取远程新提交并整合到当前分支：

```powershell
git pull
```

### clone

从已有远程仓库创建新的本地副本：

```powershell
git clone 远程地址
```

指定本地目录名：

```powershell
git clone 远程地址 本地文件夹名
```

`clone` 会自动：

- 创建目录
- 下载项目文件
- 下载提交历史
- 初始化本地仓库
- 添加 `origin`
- 检出默认分支

不需要再次执行 `git init` 或 `git remote add origin`。

---

## 12. 本地与远程状态

查看本地分支和上游关系：

```powershell
git branch -vv
```

典型输出：

```text
* main 1b57f58 [origin/main] 提交说明
```

表示：

```text
当前位于本地 main
main 指向提交 1b57f58
main 跟踪 origin/main
```

注意：

```powershell
git status
```

不会主动联网获取 GitHub 最新状态。

要连接远程更新信息，可以使用：

```powershell
git fetch
```

要获取并整合远程修改，可以使用：

```powershell
git pull
```

---

## 13. Public 与 Private

### Public

任何人都可以查看代码和提交历史，适合展示学习成果和开源项目。

### Private

只有仓库所有者和获得授权的人能访问。

无论 Public 还是 Private，都不要提交：

- 密码
- GitHub 令牌
- API Key
- `.env`
- SSH 私钥
- 个人敏感信息

---

## 14. 当前电脑的 GitHub 网络配置

当前 VPN 提供的本地代理：

```text
127.0.0.1:7890
```

GitHub 全局代理配置：

```powershell
git config --global http.https://github.com.proxy http://127.0.0.1:7890
```

查看配置：

```powershell
git config --get-urlmatch http.proxy https://github.com
```

删除配置：

```powershell
git config --global --unset http.https://github.com.proxy
```

如果 VPN 更改本地代理端口，只需更新一次全局配置，不需要逐个仓库配置。

当前还设置了：

```powershell
git config --global http.version HTTP/1.1
```

查看：

```powershell
git config --global --get http.version
```

---

## 15. 常见错误

### pathspec did not match any files

通常是文件名或路径拼错：

```text
README.md
REAEDME.md
```

### invalid option

可能是选项写错，或者缺少空格：

```powershell
git diff --README.md       # 错误
git diff -- README.md      # 正确
```

### unrecognized argument: --online

正确写法：

```powershell
git log --oneline
```

### did you mean --decorate?

长选项通常使用两个短横线：

```powershell
git log --oneline --decorate
```

### nothing to commit, working tree clean

不是说目录里没有文件，而是当前文件与最新提交一致，没有新变化。

### LF will be replaced by CRLF

Windows 换行格式提示，不是文件损坏或提交失败。

### push 连接失败

如果已经完成 `commit`，但 `push` 网络失败：

```text
本地提交不会丢
不需要重新 add
不需要重新 commit
网络恢复后重新 git push
```

---

## 16. 每次完成 C++ 学习后的推荐流程

先确认自己位于正确仓库：

```powershell
cd D:\cpp_roadmap
```

检查变化：

```powershell
git status
git diff
```

编译和运行代码，确认没有明显错误。

暂存本次修改：

```powershell
git add .
```

提交前复查：

```powershell
git status
git diff --staged
```

创建提交：

```powershell
git commit -m "说明本次学习内容"
```

例如：

```powershell
git commit -m "Add pointer syntax practice"
git commit -m "Complete array exercises"
git commit -m "Update Git study notes"
git commit -m "Fix bubble sort implementation"
```

推送到 GitHub：

```powershell
git push
```

最终确认：

```powershell
git status
```

---

## 17. 命令速查表

| 命令 | 作用 |
|---|---|
| `git --version` | 查看 Git 版本 |
| `git init` | 初始化本地仓库 |
| `git status` | 查看仓库状态 |
| `git add 文件名` | 暂存指定文件 |
| `git add .` | 暂存当前目录中的变化 |
| `git commit -m "说明"` | 创建本地提交 |
| `git log` | 查看完整提交历史 |
| `git log --oneline` | 简洁查看历史 |
| `git diff` | 查看尚未暂存的修改 |
| `git diff --staged` | 查看已经暂存的修改 |
| `git show` | 查看最新提交 |
| `git restore 文件名` | 丢弃工作区修改 |
| `git restore --staged 文件名` | 撤销暂存但保留修改 |
| `git revert 提交编号` | 用新提交撤销旧提交 |
| `git branch` | 查看分支 |
| `git switch -c 名称` | 创建并切换分支 |
| `git switch main` | 切换到 main |
| `git merge 分支名` | 合并分支 |
| `git branch -d 分支名` | 删除已合并分支 |
| `git remote -v` | 查看远程关联 |
| `git remote add origin 地址` | 添加远程仓库 |
| `git push -u origin main` | 首次推送并建立上游 |
| `git push` | 推送本地提交 |
| `git pull` | 获取并整合远程提交 |
| `git clone 地址` | 克隆远程仓库 |
| `git branch -vv` | 查看分支和上游关系 |

---

# 综合过关测试

请使用一个全新的目录：

```text
D:\git_final_exam
```

不要操作 `cpp_roadmap`，也暂时不要回看上面的命令答案。

独立完成以下任务：

1. 创建 `D:\git_final_exam`，进入目录并初始化Git仓库。
2. 把默认分支命名为 `main`。
3. 创建 `README.md` 和 `exam.cpp`。
4. 在 `exam.cpp` 中写一个能够正常输出文字的C++程序。
5. 查看文件状态，并完成第一次提交。
6. 修改 `exam.cpp`，分别观察未暂存差异和已暂存差异。
7. 在一个测试文件中制造无用修改，先检查差异，再安全撤销一次。
8. 创建 `practice` 分支，在该分支修改README并提交，然后合并回 `main`，最后删除分支。
9. 创建 `.gitignore`，忽略：

```gitignore
*.exe
*.o
*.out
*.obj
```

创建一个测试 `.exe`，证明它没有进入普通 `git status`。

10. 在GitHub创建一个空的 **Private** 测试仓库，建立 `origin`，推送 `main`。
11. 使用 `git branch -vv` 和 `git remote -v` 验证本地与远程关系。
12. 在另一个目录中 `clone` 该仓库，并确认文件、历史和 `origin` 都存在。

先独立完成第1至第5项，把完整终端输出发给我。
