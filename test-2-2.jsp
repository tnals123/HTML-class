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

<% request.setCharacterEncoding("euc-kr");
%>

<% 
    String name = request.getParameter("name");
    String studentNum = request.getParameter("studentNum");
    String sex = request.getParameter("sex");
    String country = request.getParameter("country");

    if (sex.equalsIgnoreCase("man")){
        sex = "남자";
    }
    else{
        sex = "여자";
    }
%>


    <h2>학생 정보 입력 결과</h2>
    성명 : <%= name %><p>
    학번 : <%= studentNum %><p>
    성별 : <%= sex %><p>
    국적 : <%= country %><p></p>
                

    
</body>
</html>