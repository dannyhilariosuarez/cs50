<?php

    // configuration
    require("../includes/config.php");

    // if form was submitted
    if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        // TODO
        if (empty($_POST["username"]))
        {
            apologize("User name can't be empty");
        }
        else if(empty($_POST["password"]))
        {
            apologize("Password can't be empty");
        }
        else if($_POST["password"] != $_POST["confirmation"])
        {
            apologize("User name and confirmation are diferent");
        }
        else  
        {
            $query = query("INSERT INTO users (username, hash, cash) VALUES(?, ?, 10000.00)", $_POST["username"], crypt($_POST["password"]));
            if ($query === false)
            {
                apologize("User name already exists in the system");
            }
            else 
            {
                $rows = query("SELECT LAST_INSERT_ID() AS id");
                $id = $rows[0]["id"];
                $_SESSION["id"] = $id;
                redirect("index.php");
            }
        }
    }
    else
    {
        // else render form
        render("register_form.php", ["title" => "Register"]);
    }

?>