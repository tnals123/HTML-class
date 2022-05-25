<%@ page language="java" contentType="text/html; charset=utf-8" pageEncoding="utf-8" %>


<input type="button" value="또 입력하기" onclick="insertagain()">

<input type="button" value="이제 회원 정보 보기" onclick="seeInfo()">
<script>
    function seeInfo(){
        alert("페이지 이동!");
        location.href="mainpage.jsp";
    }
    function insertagain(){
        alert("페이지 이동!");
        location.href="resister.jsp";
    }
</script>