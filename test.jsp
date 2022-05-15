
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


    <h2>학생 정보 입력</h2>
    <form method="post" action="test-2-2.jsp">
        성명 : <input type="text" name = "name"><p>
        학번 : <input type="text" name = "studentNum"><p>
        성별 : 남자<input type = "radio" name = "sex" value = "man" checked>
               여자<input type = "radio" name = "sex" value="woman"><p>
        국적 : <select name = "country">
                <option SELECTED value = "대한민국">대한민국</option>
                <option value = "중국">중국</option>
                <option value = "터키">터키</option>
                <option value = "태국">태국</option>
        </select>

        <input type = "submit" value="보내기">
    </form>

    
</body>
</html>