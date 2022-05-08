<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/8
  Time: 14:34
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" pageEncoding="utf-8" isELIgnored="false" %>
<! DOCTYPE html>
<html>
  <head>
    <meta charset="UTF-8">
    <title>Insert title here</title>
  </head>
  <body>
<form action="add.jsp">
  员工编号：<input type="text" name="id" value=""> <br/>
  员工姓名；<input type="text" name="name" value=""><br/>
  员工工作：<input type="text" name="job" value=""><br/>
  员工工资：<input type="text" name="salary" value=""><br/>
<input type="submit" value="添加员工">
</form>
  </body>
</html>
