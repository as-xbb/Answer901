<%--
  Created by IntelliJ IDEA.
  User: С��ë
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
        out.print("�����ˣ�"+a[0]+",");
        out.print("���⣺"+a[1]+"<br>");
        out.print("�������ݣ�"+a[2]+"<br>");
    }
%>
</body>
</html>

