1、第一步：
初始化一个Git仓库，使用git init命令。
添加文件到Git仓库，分两步：
使用命令git add <file>，注意，可反复多次使用，添加多个文件（把一个文件放到Git仓库只需要两步）；
使用命令git commit -m <message>，完成。（备注修改的问题）

第某步：推送到github库

git remote add origin https://github.com/Sherlock-xiao/opencv_python3.git
git push -u origin master