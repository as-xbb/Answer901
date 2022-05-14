<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/14
  Time: 8:28
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" pageEncoding="UTF-8" %>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title> Insert title here</title>
</head>
<body>
<form action="productServlet? action=add" method="post">
    <h2>添加新品</h2>
    名称:<input type="text" name="pname">
    <br> <br>
    单价：<input type="text" name="pprice">
    <br> <br>
    <input type="submit" value="添加">
    <input type="reset" value="重置">
    <br> <br>
    <a href="productServlet? action=list">查看产品</a>
</form>
</body>
</html>
