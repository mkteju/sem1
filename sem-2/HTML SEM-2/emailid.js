function display()
{
var a=document.getElementById("name").value;
if(a==" ")
{
document.getElementById("message").innerHTML="enter email id";
return false;
}
var exp=/^[a-z0-9_.];
if(a.match(exp))
	return true;
else
{
document.getElementById("message").innerHTML="invalid email id";
return false;
}
}
	