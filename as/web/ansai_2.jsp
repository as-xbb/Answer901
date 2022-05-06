<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/6
  Time: 20:22
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>使用JAVA程序片段动态生成表格</title>
</head>
<body>
<%
    String[] bookName = {"JavaWeb典型模块大全","JavaWeb开发实战宝典","jsp项目开发全过程实录"};
%>
<table border="1" align="center" width="400px">
    <tr>
        <td align="center">编号</td>
        <td align="center">书名</td>
    </tr>
        <%
    for(int i=0;i<bookName.length;i++){
  %>
    <tr>
        <td align="center"><%=i %></td>
        <td align="center"><%=bookName[i] %></td>
    </tr>
        <%} %>
    </table>
</body>
<body>

</body>
</html>
