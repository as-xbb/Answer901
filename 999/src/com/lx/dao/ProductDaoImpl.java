package com.lx.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import com.lx.entity.Product;
import com.lx.util.BasicJDBC;

public class ProductDaoImpl implements ProductDao{

    private BasicJDBC db=null;
    private Connection con=null;
    public ProductDaoImpl(){
        db=new BasicJDBC();
        con=db.getCon();
    }
    @Override
    public int addProduct(Product p) {
        PreparedStatement ps=null;
        String sql="insert into product(pname,pprice) values(?,?)";
        int n = 0;
        try {
            ps=con.prepareStatement(sql);
            ps.setString(1, p.getPname());
            ps.setFloat(2, p.getPprice());
            n=ps.executeUpdate();
            System.out.println(n);
        }catch (SQLException e) {
            e.printStackTrace();
        }finally {
            db.closeAll(con,ps,null);
        }
        return n;
    }
    @Override
    public List<Product> getList() {
        PreparedStatement ps=null;
        String sql="select*from product";
        ResultSet rs=null;
        List<Product> list=new ArrayList<Product> ();
        try{
            ps=con.prepareStatement(sql);
            rs=ps.executeQuery();
            while (rs.next()) {
                //将数据库中的一行记录封装成一个产品对象
                Product p=new Product();
                //将产品对象添加到list中
                list.add(p);
            }
        }catch (SQLException e) {
            e.printStackTrace();
        }finally {
            db.closeAll(con,ps,rs);
        }
        return list;
    }
}
