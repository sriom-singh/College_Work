#Prepare and verify an employee database file (employeeDB) that contains employee records under the following column.

BEGIN { 
#Header 
print "\nPrinting All Entries\n" 
	{
print $0 
	}
END { 
#Footer 
print "\nTotal entries: ", NR, "\n"
 }

#Create and Execute AWK script to display EMP_ID, EMP First_Name, EMP Last_name, Location, and Designation of employees having designations as ‘Manager’.
BEGIN{
		#Header
		print "\nFiltering Managers\n"; 
}
{
		if($5=="Manager")
		print $1, $2, $3, $4, $5
}
END{
		#Footer
		print "\nquery completed\n"
}

#Create and Execute AWK script to display EMP ID, EMP First_Name, EMP Last_Name, Location and Designation of employees who are specialized in Java Programming and are working at Delhi and Pune locations.
BEGIN {
  	  	#Header
   	 print "\n Filtering Java Programmers\n",
}

{
    	if ($7 == "Java" && ($4 == "Delhi" || $4 == "Pune")) {
    	    print $1, $2, $3, $4, $5
    	}
}
END {
		#Footer
		print "\nquery completed\n"
}

#Create and Execute AWK script to display EMP ID, EMP  First_Name, EMP Last_Name, Location, Designation, Joining Month and Joining Year of all those employees who joined after January 2000 but before December 2005.
BEGIN{
print "\n Filtering employees joined between January 2000 and December 2005\n"
}
{
if(($10>2000 && $10<2005)||($10==2000 && $9!="January")||($10==2005 && $9!="December"))
{
			print $1,$2,$3,$4,$5,$9,$10
		}
}
END{
		print "\nQuery Completed\n"

}

#Create and Execute AWK script to display all fields of all those employees who joined the Organization on the net salary in between 45000 to 65000, during the period January 2000 to December 2005.
BEGIN {
print "\nEmployees with Net Salary Between 45000-65000 and Joined Between Jan 2000 to Dec 2005\n"  
}
{
    		if (($10>=2000 && $10<=2005)&&($6>=45000 && $6<=65000)) {
      		print $0
 	   }
}
END{
		print"\nQuery Completed\n"	
}

#Create and Execute AWK script to display all fields of all those employees whose last name is “Kumar”.
BEGIN{
		print "\nEmployees Whose Last Name is Kumar\n"
}
{
	if($3=="Kumar"){
		print $0
	}
}
END{
		print "\nQuery Completed\n"
}

