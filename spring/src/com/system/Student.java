package com.system;
public class Student {
    private String name;
    private String sex;
    private int age;
    private Department dep;
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
    public String getSex() {
        return sex;
    }

    public void setSex(String sex) {
        this.sex = sex;
    }
    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
    public Department getDep() {
        return dep;
    }
    public void setDep(Department dep) {
        this.dep=dep;
    }
    @Override
    public String toString() {
        return "Student [name=" +name +",sex=" +sex+",age=" +age+",dep=" +dep +"]";
    }
}