package com.system;
public class Department {
    private String depname;
    public String getDepname(){
        return depname;
    }

    public void setDepname(String depname) {
        this.depname = depname;
    }
    @Override
    public String toString() {
        return "Department[depname=" +depname+"]";
    }
}