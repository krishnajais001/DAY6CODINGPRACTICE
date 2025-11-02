// Global Scope Variable -> it can be acces anywhere in the program
// var age = 25;
// if(true){
//     console.log(age);
// }

// Function Scope Variable -> it can be acces only in the fucntion
// function solve() {
//     var age=20;
//     console.log(age);
// }
// solve();
 // console.log(age); -> it throws error

 // var with var keyword can be re declre
//  var age=20;
//  var age=30;
//  console.log(age);

// redefintion
// var age=10;
// age="krishna";
// console.log(age);



// let keyword -> it  is blocked scoped 
// let age=10;
// console.log(age);

// blocked scope
// if(true){
//     let age =11;
//     console.log(age);
// }
// console.log(age); // it thorws error age : not found

// const -> it can't be redclre
// const age=10;
// age=15; // -> not alllowed reassigned
// console.log(age);

// let makrs=20; // number datatype
// console.log(makrs);

//  let name_="krishna"; // string datatype
//  console.log(name_);

// let isGood=true; // boolean datatype
// console.log(isGood);

// let isGood; // undefined datatype
//  console.log(isGood);

// let isGood=null; // null datatype
//  console.log(isGood);

// let isGood=BigInt(12345678901234567890); // bigInt datatype
//  console.log(typeof (isGood));


// Operators
// Arithematic Operators
// console.log(5+10); // Sum 
// console.log(10-5); // Sub
// console.log(5*10); // Mul
// console.log(5/10); // Div -> Quotient
// console.log(10%3); // Reaminder
// console.log(2**4); // Power


// Unary Operator
// Pre Increment
let marks=10;
// console.log(marks);
// ++marks;
// console.log(++marks); // preincrement
// console.log(marks++); // post-increment
// console.log(marks);  

// console.log(--marks); // pre-decrement
// console.log(marks);  

// console.log(marks--); // post-decrement
// console.log(marks);  

// console.log(marks+=10); // Assignment operator
// console.log(marks-=10); // Assignment operator
// console.log(marks*=10); // Assignment operator
// console.log(marks/=10); // Assignment operator
// console.log(marks%=10); // Assignment operator

// console.log(marks==10); // Comparison operator
// console.log(5==5); // true
// console.log('5'==5); // its still ture

// but
// console.log('5'!==5); // ture
// console.log('5'!=5); // false

// console.log('5'!==5); // its not  ture

// Ternary Operator
// let age=5;
// let isVote=age>=18?"You can vote":"You can't vote";
// console.log(isVote);

// logical operator
// console.log(!true);

// console.log(false&&'krishna'); // output : false
// console.log(true&&'krishna'); // output : krisna

// console.log(5^5^6);
// console.log(~0);