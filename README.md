# 创建本地仓库：

```
git init  
```
```
git add . / git add -A
```
```
git commit  "some messages"
```
git commit命令，-m后面输入的是本次提交的说明，可以输入任意内容，当然最好是有意义的，这样你就能从历史记录里方便地找到改动记录。

git status 命令可以让我们时刻掌握仓库当前的状态

# 创建远程仓库：

## 第1步：
创建SSH Key。在用户主目录下，看看有没有.ssh目录，如果有，再看看这个目录下有没有id_rsa和id_rsa.pub这两个文件，如果已经有了，可直接跳到下一步。如果没有，打开Shell（Windows下打开Git Bash），创建SSH Key：
```
ssh-keygen -t rsa -C "youremail@example.com"
```
你需要把邮件地址换成你自己的邮件地址，然后一路回车，使用默认值即可，由于这个Key也不是用于军事目的，所以也无需设置密码。

## 第2步：
登陆GitHub，打开“Account settings”，“SSH Keys”页面

然后，点“Add SSH Key”，填上任意Title，在Key文本框里粘贴id_rsa.pub文件的内容：


## 第3步：
登陆GitHub，然后，在右上角找到“Create a new repo”按钮，创建一个新的仓库：
```
git remote add origin git@github.com:michaelliao/learngit.git
```

添加后，远程库的名字就是origin，这是Git默认的叫法，也可以改成别的，但是origin这个名字一看就知道是远程库。

把本地库的所有内容推送到远程库上：
```
git push -u origin master
```
## Git删除本地文件后，同步到远程
从版本库中删除文件，那就用命令git rm删掉，并且git commit：
```
git rm test.txt
```
```
git commit -m "remove test.txt"
```
```
git push
```



