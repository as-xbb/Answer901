<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/9
  Time: 14:48
  To change this template use File | Settings | File Templates.
--%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
         pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <title>登录中……</title>
</head>
<body>
<%
    String username=request.getParameter("userName");
    String password=request.getParameter("pwd");
    if("zhangsan".equals(username)&&"123".equals(password)){
        out.print("成功登陆,3秒后进入loginSuccess.jsp页面");
        response.setHeader("refresh", "3;url=loginSuccess.jsp");
    }else{
        out.print("账号或密码错误,2秒后回到login1.jsp页面");
        response.setHeader("refresh", "2;url=login_1.jsp");
    }

%>
</body>
</html>
