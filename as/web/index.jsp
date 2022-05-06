<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/6
  Time: 16:30
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
  <h2>用户注册</h2>
  <form name ="form1" method="post" action="show.jsp">
    用户名:<input name="username"type="text"/><br>
    密&nbsp;&nbsp;&nbsp;码：<input name="pwd" type="password"/><br><br>
    <input type="submit" value="提交"/>
    <input type="reset" value="重置"/>
  </form>
  </body>
</html>
