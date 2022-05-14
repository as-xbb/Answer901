package com.lx.util;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class BasicJDBC {
    private Connection con=null;
    public BasicJDBC() {
        try{
            //注册驱动
            Class.forName("com.mysql.jbdc.Driver");
        }catch (ClassNotFoundException e) {
            //TODO Auto-generated catch block
            e.printStackTrace();
            System.out.println("加载数据库驱动失败！");
        }
    }
    public Connection getCon()
    {
        //获取目标数据库的连接
        try {
            con = DriverManager.getConnection(
                    "jdbc:mysql://localhost:3306/ass",
                    "root", "5233");
        }catch (SQLException e) {
            e.printStackTrace();
            System.out.println("获取数据库连接失败！");
        }
        return con;
    }
    //关闭对象
    public void closeAll(Connection con,PreparedStatement ps,ResultSet rs) {
        if (rs !=null) {
            try {
                rs.close();
            }catch (SQLException e) {
                e.printStackTrace();
            }
        }if(ps != null) {
            try {
                ps.close();
            }catch (SQLException e) {
                e.printStackTrace();
            }
        }
        if(con !=null) {
            try {
                con.close();
            }catch (SQLException e) {
                e.printStackTrace();
            }
        }
    }
}
