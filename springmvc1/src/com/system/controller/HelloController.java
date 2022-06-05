package com.system.controller;

import org.springframework.mock.web.MockHttpServletRequest;
import org.springframework.mock.web.MockHttpServletResponse;
import org.springframework.stereotype.Controller;

import java.lang.annotation.Annotation;

public class HelloController implements Controller {
    public ModelAndView handleRequest (MockHttpServletRequest request,
                                       MockHttpServletResponse response) {
        ModelAndView mv=new ModelAndView();
        mv.addObject("msg","hello world!");
        mv.setViewName("/WEB-INF/jsp/hello.jsp");
        return mv;
    }

    @Override
    public String value() {
        return null;
    }

    @Override
    public Class<? extends Annotation> annotationType() {
        return null;
    }
}
