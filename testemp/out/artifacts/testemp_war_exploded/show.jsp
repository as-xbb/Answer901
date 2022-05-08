<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/8
  Time: 15:01
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" pageEncoding="UTF-8" isELIgnored="false"%>
<! DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Insert title here</title>
</head>
<jsp:useBean id="emp" class="com.system.valuebean.Employee" scope="request"/>
<body>
    员工编号：<%=emp.getId()%>
    <p>
    员工姓名：<%=emp.getName()%>
    <p>
    员工工作：<%=emp.getJob()%>
    <p>
    员工工资：<%=emp.getSalary()%>
    <p>
        <a href="index.jsp">添加员工</a>
    <hr width="100%">
</body>
</html>
