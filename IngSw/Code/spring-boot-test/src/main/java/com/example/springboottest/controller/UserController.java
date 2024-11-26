package com.example.springboottest.controller;

import com.example.springboottest.entity.User;
import com.example.springboottest.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping("api/auth")
public class UserController {

    @Autowired
    private UserService userService;

    @PostMapping("/register")
    public String register(@RequestBody User user) {
        return userService.registerUser(user);
    }

    @GetMapping("/login")
    public String login(@RequestParam String nome) {
        return userService.retrieveUser(nome);
    }
}
