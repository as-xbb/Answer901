<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/6
  Time: 17:15
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>
        request 对象获取请求参数
    </title>
</head>
<body>
<h2>获取到的注册信息如下：</h2>
<%
    request.setCharacterEncoding("utf-8");
    String username=request.getParameter("username");
    String pwd=request.getParameter("pwd");
    out.println("用户名为:"+username+"<br>");
    out.println("密码为:"+pwd+"<br>");
%>
</body>
</html>
