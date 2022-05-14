package com.lx.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import com.lx.util.BasicJDBC;
import com.lx.dao.UserDao;
//将所有要实现的功能全部封装到本类中
public class UserDaoImpl implements UserDao {
    /**
     * 本方法实现验证登录
     * @param name 要验证的用户名
     * @param pw 要验证的密码
     * @return boolean true 表示成功，false 表示失败
     */
    private BasicJDBC db=null;
    private Connection con=null;
    public UserDaoImpl(){
        db = new BasicJDBC();
        con=db.getCon();
    }
    public boolean valiLogin(String name,String password) throws  Exception
    {
        boolean flag=false;
        PreparedStatement ps=null;
        ResultSet rs=null;
        String sql="select*from user where name=? and password = ?";
        try {
            ps=con.prepareStatement(sql);
            //填充好所有的？
            ps.setString(1,name);
            ps.setString(2,password);
            //值天冲完毕后，要执行的 sql 命令就完整了，这时才能执行
            rs=ps.executeQuery();
            //判断结果集，并验证登录
            if(rs.next()) flag=true;
        }catch (SQLException e) {
            //TODO Auto-generated catch block
            e.printStackTrace();
        }finally {
            db.closeAll(con,ps,null);
        }
        return flag;
    }
}
