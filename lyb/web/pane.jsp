<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/13
  Time: 11:18
  To change this template use File | Settings | File Templates.
--%>
<%@page contentType="text/html;charset=gb2312" %>
<%@page import="java.util.*"%>
<html>
<body>
<%
    request.setCharacterEncoding("gb2312");
    Vector v=(Vector)application.getAttribute("Mess");
    for(int i=0; i<v.size(); i++){
        String message=(String)v.elementAt(i);
        String []a=message.split("#");
        out.print("留言人："+a[0]+",");
        out.print("标题："+a[1]+"<br>");
        out.print("留言内容："+a[2]+"<br>");
    }
%>
</body>
</html>

