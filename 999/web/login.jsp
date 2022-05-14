<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/13
  Time: 18:50
  To change this template use File | Settings | File Templates.
--%>
<%@ page language="java" import="java.util" pageEncoding="GB2312" %>
<%
    String path=request.getContextPath();
    String basePath=request.getScheme()+"://"+request.getServerName()+
            ":"+request.getServerPort()+path+"/";
%>
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
<head>
</head>
<body>
<form action="loginServlet" method="post">
    <h2>用户登录</h2>
    用户名：<input type="text" name="userName">
    <br> <br>
    密 &nbsp;&nbsp;码：<input type="password" name="userPass">
    <br> <br>
    <input type="submit" value="登录">
    <input type="reset" value="重置">
</form>
</body>
</html>
