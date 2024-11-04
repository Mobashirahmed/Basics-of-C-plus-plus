# C++ Coding
Lecture 01 Key highlights:
> Pre-processing Directories of C++ resembles as:
 #include<iostream>
 using namespace std;
> Global Initialization of main() Function
  Inside of which you write all the code.
> To get an output we've 'cout <<' Keyword along with two Left pointing angular brackets.
   String is represented inside a pair of double-quotes ""
> Usually ' <<endl ' is represented at the end of cout. Its main function is to move the cursor to the next line.
> Every C++ programming statement is terminated by a semi-colon [;]
> To get an Input we've 'cin >>' Key word along with a pair of Right pointing angular brackets.  


> Ways of writting conditional controls:
// single condition
  if(){
  }
// multiple conditions
1) if(){...
   }
   if(){...
   }
   :
   if(){...
   }
2) //  nesting inside if...
  if(){
    if(){
      if(){
        if(){...
        }
        else{...
        }
      }
      else{
      }
    }
    else{
    }
  }
  else{
  }
  3) // nesting inside else...
  if(){
  }
  else{
    if(){
    }
    else{
      if(){
        else{...
        }
      }
    }
  }
// NOTE: nesting can be done in both of 'em simultaneously too.
4) use of if... else if
  if(){
  }
  else if(){
  }
  else if(){
  }
  :
  else{ // this is your default block when everything above it turns False, then this block is executed.
  }

  > Loops And forming Patterns with the help of loop