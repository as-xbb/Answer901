<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/13
  Time: 11:10
  To change this template use File | Settings | File Templates.
--%>

<%@page contentType="text/html;charset=gb2312" %>
<html>
<body>
<form action="show.jsp" method="post" name="form">
  输入名字：<input type="text" name="name" value=""><br>
  留言标题：<input type="text" name="title" value=""><br>
  留言：<br>
  <textarea name="message" rows="10" cols="40" wrap="physical">
            </textarea>
  <br><input type="submit" name="submit" value="提交">
</form>
<a href="pane.jsp">查看留言板</a>
</body>
</html>

