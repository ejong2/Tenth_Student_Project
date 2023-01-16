package com.example.BoardProject.controller;

import com.example.BoardProject.dto.UserDTO;
import com.example.BoardProject.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("/users")
public class UserController {
    @Autowired
    UserService userService;
    //CRUD
    // C -> POST
    // R -> GET
    // U -> PUT
    // D -> DELETE

    @PostMapping("")
    public UserDTO insert(@RequestBody UserDTO user){
        return userService.insertUser(user);
    }

    @GetMapping("")
    public List<UserDTO> getAllUsers(){
        return userService.getAllUsers();
    }

    @GetMapping("/{userId}")
    public UserDTO getUserByUserId(@PathVariable String userId){
        return userService.getUserByUserId(userId);
    }

    @PutMapping("/{userId}")
    public void updateUserPw(@PathVariable String userId,@RequestBody UserDTO user){
        userService.UpdateUserPw(userId, user);
    }

    @DeleteMapping("/{userId}")
    public void deleteUser(@PathVariable String userId){
        userService.deleteUser(userId);
    }
}
