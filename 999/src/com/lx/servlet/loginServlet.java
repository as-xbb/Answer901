package com.lx.servlet;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import com.lx.dao.UserDao;
import com.lx.dao.UserDaoImpl;
import com.lx.entity.User;
public class loginServlet extends HttpServlet{
    public loginServlet(){
        super();
    }

    public void init() throws ServletException {
    }

    public void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        this.doPost(request,response);
    }

    public void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        String uname=request.getParameter("UserName");
        String upass=request.getParameter("userPass");
        //封装用户对象
        User user=new User();
        user.setUserName(uname);
        user.setUserPass(upass);
        String username=(String) user.getUserName();
        String userpass=(String) user.getUserPass();

        //创建功能类对象来实现功能
        UserDao dao=new UserDaoImpl();
        boolean flag=false;

        try{
            flag=dao.valiLogin(username,userpass);
        }catch (Exception e) {
            e.printStackTrace();
            //然后跳转到错误页面
            request.getRequestDispatcher("/failure.jsp").forward(request,response);
            return;
        }
        if(flag==true)      //登录成功
        {
            request.getRequestDispatcher("/addproduct.jsp").forward(request,response);
        }
        else
        {
            //然后跳转到错误页面
            request.getRequestDispatcher("/failure.jsp").forward(request,response);
        }
    }

    public void destroy(){
        super.destroy();
    }
}
