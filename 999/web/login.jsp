<%--
  Created by IntelliJ IDEA.
  User: С��ë
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
    <h2>�û���¼</h2>
    �û�����<input type="text" name="userName">
    <br> <br>
    �� &nbsp;&nbsp;�룺<input type="password" name="userPass">
    <br> <br>
    <input type="submit" value="��¼">
    <input type="reset" value="����">
</form>
</body>
</html>
