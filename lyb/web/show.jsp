<%--
  Created by IntelliJ IDEA.
  User: С��ë
  Date: 2022/5/13
  Time: 11:19
  To change this template use File | Settings | File Templates.
--%>

<%@page contentType="text/html;charset=gb2312" %>
<%@page import="java.util.*"%>
<html>
<body>
<%!
  Vector v=new Vector();//��̬����
  int i=0;
  ServletContext application;
  synchronized void leaveWord(String s){//�����������������������
    application=getServletContext();
    i++;
    v.add("No"+i+","+s);
    application.setAttribute("Mess",v);
  }
%>
<%
  request.setCharacterEncoding("gb2312");//���봦��
  String name=request.getParameter("name");//��������
  String title=request.getParameter("title");//���ձ���
  String message=request.getParameter("message");//��������
  if(name==null){
    name="guest"+(int)(Math.random()*10000);
  }
  if(title==null){
    title="�ޱ���";
  }
  if(message==null){
    message="����Ϣ";
  }
  String s=name+"#"+title+"#"+message;
  leaveWord(s);
  out.print("����������ύ��");
%>
<a href="index.jsp">��������ҳ��</a>
</body>
</html>

