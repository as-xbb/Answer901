package com.system;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
public class Test1 {
    public static void main(String[] args) {
        ApplicationContext applicationContext=
                new ClassPathXmlApplicationContext("applicationContext.xml");
        Student stu=(Student) applicationContext.getBean("stu");
        System.out.println(stu.toString());
    }
}
