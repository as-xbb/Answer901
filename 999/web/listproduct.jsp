<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/14
  Time: 8:36
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" pageEncoding="UTF-8" %>
<%@ page import="java.util.ArrayList"%>
<%@ page import="com.lx.entity.Product" %>
<% ArrayList productlist=(ArrayList)session.getAttribute("productlist");%>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title> Insert title here</title>
</head>
<body>
<tr border="1" width="450" rules="none" cellspacing="0" cellpadding="0">
    <tr height="50"><td colspan="3" align="center">产品列表如下</td> </tr>
    <tr align="center" height="30" bgcolor="#d3d3d3"></tr>
    <td> 名称</td>
    <td> 单价</td>
</tr>
<% if(productlist==null||productlist.size()==0) {%>
    <tr height="100"> <td colspan="3" align="center">没有产品可显示!</td></tr>
<%
}
else {
    for (int i=0;i<productlist.size();i++) {
        Product product=(Product)productlist.get(i);
        %>
<tr height="50" align="center">
    <td><%=product.getPname()%></td>
    <td><%=product.getPprice()%></td>
</tr>
<%
        }
    }
%>
</body>
</html>
