<%@ page language="java" contentType="text/html; charset=utf-8" pageEncoding="utf-8" %>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h2> 테스트 </h2>
    <form method="post" action="forward_action2.jsp">
        forward action : <input type="text" name = "username">
    </form>

    <form method = "post" action="page_control_end.jsp">
        response : sendRedirect : <input type="text" name = "username">
    </form>
    
</body>
</html>