<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/6
  Time: 19:57
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@ page import="java.util.Date"%>
<%@ page import="java.text.SimpleDateFormat" %>
<html>
  <head>
    <title>一个简单的JSP页面——显示系统时间</title>
  </head>
  <body>
  <%
    Date date =new Date();//获取日期对象
    String today= String.format("%tY年%tm月%td日",date,date,date);//设置日期时间格式
  %>
  当前时间：<%=today%>     <!-- 输出系统时间-->
  </body>
</html>
