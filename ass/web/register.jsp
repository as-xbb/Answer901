<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/9
  Time: 14:30
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<jsp:useBean id="user" class="com.test.User" scope="request"/>
<jsp:setProperty name="user" property="*"/>
<!DOCTYPE html>
<html>
<head>
    <title>Insert title here</title>
</head>
<body>
注册成功<br>
<hr>
使用 Bean 属性方法：<br>
姓名：<%=user.getName()%><br>
密码：<%=user.getPassword()%><br>
年龄：<%=user.getAge()%><br>
<hr>
使用getProperty动作：<br>
姓名：<jsp:getProperty name="user" property="name"/><br>
密码：<jsp:getProperty name="user" property="password"/><br>
年龄：<jsp:getProperty name="user" property="age"/><br>
</body>
</html>
