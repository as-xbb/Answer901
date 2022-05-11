package com.demo;

import jakarta.servlet.ServletException;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

import java.io.IOException;
import java.io.PrintWriter;
public class LoginServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request,
                          HttpServletResponse response)
        throws ServletException,IOException{
        response.setContentType("text/html;charset=utf-8");
        String name=request.getParameter("name");
        String password=request.getParameter("password");
        String html=null;
        if ("admin".equals(name) && "123".equals(password))
            html="<div style= 'color:green'>登录成功</div>";
        else
            html="<div style= 'color: red'>登录失败</div>";
        PrintWriter pw=response.getWriter();
        pw.println(html);
    }
}
