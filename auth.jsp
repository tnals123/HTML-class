<%@ page language="java" contentType="text/html; charset=utf-8" pageEncoding="utf-8" %>
<%@ page import="java.sql.Connection"%>
<%@ page import="java.sql.DriverManager"%>
<%@ page import="java.sql.PreparedStatement"%>
<%@ page import="java.sql.ResultSet"%>
<%

    Class.forName("com.mysql.jdbc.Driver");
    Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/stageus","SooMin","dkssud1010@");
    String sql="SELECT * FROM userinfo;
    PreparedStatement pstmt = conn.prepareStatement(sql);
    pstmt.executeQuery();
    ResultSet rs=pstmt.executeQuery();
    boolean isExist= false;
%>
<%
    if (rs.next()){
%>
 
    <table border="1">

        <tr>
            <td>이름 - <%=rs.getString("name")%></td>
        </tr> 
        <tr>
            <td>성별 - <%=rs.getString("sex")%></td>
        </tr>
        <tr>
            <td>취미 - <%=rs.getString("hobby")%></td>
        </tr>
        <tr>
            <td>전화번호 - <%=rs.getString("phonenumber")%></td>
        </tr>

    </table>

<%
    }
%>

    

    


    

