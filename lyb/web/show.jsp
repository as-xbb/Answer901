<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/13
  Time: 11:19
  To change this template use File | Settings | File Templates.
--%>

<%@page contentType="text/html;charset=gb2312" %>
<%@page import="java.util.*"%>
<html>
<body>
<%!
  Vector v=new Vector();//动态数组
  int i=0;
  ServletContext application;
  synchronized void leaveWord(String s){//方法声明，用于在添加评论
    application=getServletContext();
    i++;
    v.add("No"+i+","+s);
    application.setAttribute("Mess",v);
  }
%>
<%
  request.setCharacterEncoding("gb2312");//乱码处理
  String name=request.getParameter("name");//接收姓名
  String title=request.getParameter("title");//接收标题
  String message=request.getParameter("message");//接收评论
  if(name==null){
    name="guest"+(int)(Math.random()*10000);
  }
  if(title==null){
    title="无标题";
  }
  if(message==null){
    message="无信息";
  }
  String s=name+"#"+title+"#"+message;
  leaveWord(s);
  out.print("你的评论已提交！");
%>
<a href="index.jsp">返回留言页面</a>
</body>
</html>

