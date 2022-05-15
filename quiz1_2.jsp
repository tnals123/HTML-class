
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
    <% String id = request.getParameter("id"); %>
    [<%=id%>] 님 환영합니다
    <br>
    <form method="post" action="quiz1_3.jsp">
        <input type="submit" value="logout">
    </form>
    
</body>
</html>