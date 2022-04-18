var exam_script = {
    plus_num: function(num){
        try{
            window.java.getNum(num+num);
        }catch(err){
            console.log(">> [exam_script.plus_num()] " + err);
        }
    }
}

           var mywidth = Android.getwidth();
       var px = Android.getwidth(mywidth);
            var mypx = px - 29;
           var mypx_codeblcok = px - 32;
           var transe = document.getElementById("editing-code");
          var code_block = document.getElementById("highlighting-code")
  transe.style.width = mypx+"px";
 code_block.style.width = mypx_codeblcok+"px";