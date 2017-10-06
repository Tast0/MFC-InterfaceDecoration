MFC-InterfaceDecoration
=======================

编译环境
----------------------
VS2013外加一个MFC插件[坑逼微软] （http://blog.csdn.net/shuaihj/article/details/17071351 ）<br>

目的
----------------------
用于MFC界面的装饰<br>

主要实现功能
----------------------
 * 按钮的自绘<br>
* Picture Control的使用<br>

主要算法
----------------------
*  按钮自绘<br>
1． 打开ICON按钮的属性页，在Style中选中Icon 。 <br>
2．ClassWizard加入这个成员变量： CButton m_ IconBtn；//对应于图标按钮 <br>
3． 创建相应的图标或者位图资源： 图标资源：IDI_ICONBUTTON <br>
4.在*** DLG的初始化中加入以下代码：<br>
```c++
HICON hIcon=AfxGetApp()->LoadIcon(IDI_ICONBUTTON); 
m_IconBtn.SetIcon(hIcon); 
```
