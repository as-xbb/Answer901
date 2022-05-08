<%--
  Created by IntelliJ IDEA.
  User: Ð¡ÈüÃ«
  Date: 2022/5/8
  Time: 14:54
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=gb2312" %>
<%@ page import="java.util.ArrayList" %>
<jsp:useBean id="emp" class="com.systtem.valuebean.Employee" scope="request">
    <jsp:setProperty name="emp" property="*"/>
</jsp:useBean>
<jsp:forward page="show.jsp"/>
