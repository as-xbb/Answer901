<%--
  Created by IntelliJ IDEA.
  User: 小赛毛
  Date: 2022/5/11
  Time: 11:58
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" import="java.sql.*" %>
<!DOCTYPE html>
<html>
<meta charset="UTF-8">
<head>
    <title>浏览图书信息</title>
</head>
<body>
<table width="450px" border="1" cellspacing="0" cellpadding="0">
    <tr><th scope="col">编号</th><th scope="col">书名</th>
        <th scope="col">单价</th><th scope="col">数量</th><th scope="col">作者</th> </tr>
    <%
        Connection conn = null;
        PreparedStatement ps = null;
        ResultSet rs = null;
        try {
            Class.forName("com.mysql.jdbc.Driver");
            String url = "jdbc:mysql://127.0.0.1:3306/world";
            conn = DriverManager.getConnection(url, "root", "309llt");
//execute sql and return result set
            String sql = "select * from tb_book";
            ps = conn.prepareStatement(sql);
            rs = ps.executeQuery();
            while (rs.next()) {
    %><tr>
    <td><%=rs.getString("id") %></td>
    <td><%=rs.getString("name") %></td>
    <td><%=rs.getString("price") %></td>
    <td><%=rs.getString("count") %></td>
    <td><%=rs.getString("author") %></td>
</tr>
    <%	}
        rs.close();
        ps.close();
        conn.close();
    } catch (Exception e) {
// TODO Auto-generated catch block
        e.printStackTrace();
    }
    %>
</table>
</body>
</html>
