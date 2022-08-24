# clionproject
例子


git init  

git add . / git add -A

git commit  

#git commit命令，-m后面输入的是本次提交的说明，可以输入任意内容，当然最好是有意义的，这样你就能从历史记录里方便地找到改动记录。

git status 命令可以让我们时刻掌握仓库当前的状态

创建远程仓库：
第1步：创建SSH Key。在用户主目录下，看看有没有.ssh目录，如果有，再看看这个目录下有没有id_rsa和id_rsa.pub这两个文件，如果已经有了，可直接跳到下一步。如果没有，打开Shell（Windows下打开Git Bash），创建SSH Key：

ssh-keygen -t rsa -C "youremail@example.com"

----------------------------------------------------------------------------
从版本库中删除文件，那就用命令git rm删掉，并且git commit：

git rm test.txt

git commit -m "remove test.txt"
