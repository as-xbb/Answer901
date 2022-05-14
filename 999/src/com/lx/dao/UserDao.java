package com.lx.dao;
public interface UserDao {
    //验证登录
    public boolean valiLogin(String name, String pwd) throws Exception;
}
