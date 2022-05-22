
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
    <% 
    String u_id = request.getParameter("id");
    String u_pw = request.getParameter("pw");

    if (u_id.equals("asdf") && u_pw.equals("1234")){
        Cookie cooks_id = new Cookie("userId","u_id");
        Cookie cooks_pw = new Cookie("userPW","u_pw");
        response.addCookie(cooks_id);
        response.addCookie(cooks_pw);
        out.println("쿠키를 생성했습니다. <br>");
        Cookie[] cooks = request.getCookies();

        for(int i=0; i < cooks.length; i++){ 
            Cookie c = cooks[i] ; 
            String cName = c.getName();
            String cValue = c.getValue() ; 
            out.println("쿠키를 생성했습니다. 쿠키 이름 : " + cName + " <br>");
            out.println("쿠키를 생성했습니다. 쿠키 값 : " + cValue + " <br>");
        }
    }

        

    
    %>

    <br>
    <form method="post" action="quiz1_3.jsp">
        <input type="submit" value="logout">
    </form>
    
</body>
</html>