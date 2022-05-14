package com.lx.dao;
import java.util.List;
import com.lx.entity.Product;
public interface ProductDao{
    public List<Product> getList();
    public int addProduct(Product p);
}