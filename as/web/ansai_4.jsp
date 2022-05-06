<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/6
  Time: 20:42
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>99乘法表</title>
</head>
<body>
<%
  for(int i = 1; i <= 9; i++){
    for(int j = 1; j <= i; j++){
      out.print(i + "*" + j + "=" + i * j + "&nbsp");
    }
    out.print("<br/>");
  }
%>
</body>
</html>
