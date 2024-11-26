package com.example.springboottest.service;

import com.example.springboottest.entity.User;
import com.example.springboottest.repository.UserRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.crypto.password.PasswordEncoder;
import org.springframework.stereotype.Service;

@Service
public class UserService {

    @Autowired
    private PasswordEncoder passwordEncoder;

    @Autowired
    private UserRepository userRepository;

    public String registerUser(User user) {
        if (userRepository.existsByName(user.getName())) {
            return "Errore: Nome già in uso";
        }

        userRepository.save(user);

        return "Registrazione completata con successo!";
    }

    public String retrieveUser(String nome) {
        if (!userRepository.existsByName(nome)) {
            return "Errore: Nome non trovato";
        }

        return "Login successo";
    }
}
