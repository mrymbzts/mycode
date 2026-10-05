#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


/*
// calculating the average of different ages:

int main() {
  int ages[] = {34, 12, 57, 81, 26};
  int length = sizeof(ages)/ sizeof(ages[0]); 
  float sum = 0;
  int i; 

  for (i = 0; i < length; i++ ) {
     sum += ages[i];
  }
  float average = sum / length;

  printf("the average of the array's elements which named age %.2f", average);

  return 0;
}
  */

  
/*
//finding the lowest age among different ages:

int main() {
  int ages[] = {4, 12, 57, 11, 26};
  int lowestOne = ages[0];
  int length = sizeof(ages) / sizeof(ages[0]);
  int i;

  for (i = 0; i < length; i++){
    if (lowestOne > ages[i]) {
      lowestOne = ages[i];
    }
  }

  printf("this is the lowest age %d", lowestOne);

  return 0;
}
  */


/*
// chancing the element of the array 
int main() {
  int mat[3][3] = { {1,2,3}, {4,5,6}, {7,8,9}};

  mat[0][0] = 33;

  printf("%d", mat[0][0]);

  return 0 ;
}
  */


/*
int main() {
  int matrix[2][2] = { {1,2}, {4,5}} ;

  int i, j;

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j ++){
      printf("%d\n", matrix[i][j]);
    }
  }

  return 0 ; 
}
  */


/*

int main() { 
  char sentence[] = "what\'s up dude!";

// writing string using a array 
  printf("%s\n", sentence);

// writing the first character of the array
  printf("%c", sentence[0]);
// %c format specifier to print a single character meanwhile %s format specifier to print strings

  return 0 ;
}
  */


/*
int main() {
  char carName[] = "chevrolet" ;
  int length = sizeof(carName) / sizeof(carName[0]);
  int i;

  for ( i = 0; i < length; i++){
    printf("%c\n", carName[i]); 
  }
  
  return 0 ;
}
*/


/*

// <string.h> header file should be included to the file 
int main() {
  char letters[] = "ABCDEF" ;
  printf("%zu\n", strlen(letters)); //the output is 6 

  int lenght = sizeof(letters) / sizeof(letters[0]);
  printf("%d", lenght); // the output is 7 cuze sizeof includes the /0 character when counting

  //consequently sizeof and strlen behaves differently!!!

  return 0;

}

*/


/*

//to comparing two string values if they are equal:

int main() {
  char sentence1[] = "hi dear" ; 
  char sentence2[] = "hi dear" ;
  char sentence3[] = "yep" ;

  printf("%d\n", strcmp(sentence1,sentence2)); //result will be 0 cuze these two str are equal
  printf("%d\n", strcmp(sentence1,sentence3)); //result will be diffirent from 0 cuze these two str are not equal

  return 0;

}
*/


/*
//user input
int main() {
  int num;

  printf("enter a number: \n");

  scanf("%d", &num);

  printf("you entered the number %d, right?", num);

  return 0 ;

}
  */


/*
int main() {
  int num;
  char chr;

  printf("please enter num and a character and press the enter button\n ");

  scanf("%d %c", &num, &chr);
  
  printf("your number is %d and your character is %c", num, chr);

  return 0;
}
  */


/*
//taking string input

int main() {
  char name[30];

  printf("please enter your name:\n");

  scanf("%s", name);

  printf("hello %s", name);

  return 0 ;

}
  */


/*
//Use the scanf() function to get a single word as input, and use fgets() for multiple words.
int main() {
  char fullName[30];

  printf("please enter your name and surname:\n");

  fgets(fullName, sizeof(fullName), stdin);

  printf("hello %s", fullName);

  return 0 ;
}
  */

/*
int main() {
  int num[4] = {12,13,14,15};
  int i;
   for(i=0; i<4; i++){
    printf("%p\n", &num[i]);
   }
  return 0;

}
*/


/*
//calling a function: lets create a function first 
void myFunction(){
  printf("yes, u cracked it!");
}

int main(){
  myFunction(); //called the function
  return 0;
}
  */


/*


void myFunc(char name[], int age){
  printf("hi dear it's %s and %d years old.\n\n", name, age);
}

int main(){
  myFunc("feyza", 28);
  myFunc("memos", 5);

  return 0;
}

*/

/*
int myFunction( int x, int y ){
  return x * y ;
}

int main(){
  printf("the result of multiplication is %d\n", myFunction(21,30));
  return 0;
}

*/


/*
int calculateSub(int x, int y){
  return x - y;
}

int main() {
  //You can also store the result in a variable. This will make the program even more flexible and easier to control:
  int sub1 = calculateSub(56, 84);
  int sub2 = calculateSub(72,20);

  printf("first result is %d\n:", sub1);
  printf("second result is %d\n:", sub2);

  return 0;
}

*/


/*

//Tip: If you have many "result variables", it is better to store the results in an array:

int calculateSum(int x, int y){
  return x + y ;
}

int main() {
  // create an array 
  int resultArray[5];

  resultArray[0] = calculateSum(10, 22);
  resultArray[1] = calculateSum(25, 62);
  resultArray[2] = calculateSum(36, 84);
  resultArray[3] = calculateSum(48, 56);
  resultArray[4] = calculateSum(22, 55);
  
  int i;

  for (i==0; i <5; i++){
    printf("result is %d\n", resultArray[i]);
  }

  return 0;
}

*/


/*
//To demonstrate a practical example of using functions, let's create a program that converts a value from fahrenheit to celsius:

float converting(float x){
  float celsius = (x - 32.0) / 1.8 ;
  return celsius;
}

int main(){
  float fahrenheit;

  printf("please enter your fahrenheit value as a float\n");

  scanf("%f", &fahrenheit);

  printf("your celsius value: %.4f\n", converting(fahrenheit));

  return 0 ;

}

*/


/*
int square(int x) {
  return x * x;
}

int main(){
  int result = square(11);
  printf("%d\n", result);
  return 0;
}
*/

//meanwhile inline function is different

/*

static inline int square(int x) {
  return x * x;
}

int main() {
  printf("%d\n", square(12));
  return 0;
}

//tried to write just "inline" but it doesnt work. guess it because of the GCC compiler runs without optimization by default.
//that's why i added statics keyword. "static" here means "only for this file". so the GCC is not gonna search for square function. 
*/

/*
int sum(int x);

int main(){
  int result = sum(4);
  printf("%d\n", result);
  return 0 ;
}

int sum(int x){
  if (x > 0){
    return x + sum(x-1);
  } else {
    return 0;
  }
}

*/


/*
int countdown(int x);

int main(){
  countdown(5);
  return 0;
}

int countdown(int x){
  if(x > 0){
    printf("%d\n", x);
    countdown(x-1);
    } else{
    return 0;
  }
}

*/


/*
int factorial(int x);

int main(){
  printf("%d\n", factorial(3));
  return 0;
}

int factorial(int x){
  if (x > 1){
    return x * factorial(x-1);
  } else {
    return 1;
  }
}
*/


/*
int add(int x, int y);

int main(){
  int (*ptr)(int, int) = add;
  int result =  ptr(6,3);
  printf("Result: %d\n", result);
  return 0;
}

int add(int x, int y){
  return x + y ; 
}

*/


/*
void greetMorning() { 
  printf("Good morning!\n"); 
}
void greetEvening() { 
  printf("Good evening!\n"); 
}

void greet(void (*func)()) { // function pointer as parameter
  func(); //calling the function passed as argument
  //Here, greet() takes another function as a parameter and calls it. 


}

int main() {
  greet(greetMorning);
  greet(greetEvening);
  return 0;
}

*/


/*

void summer(){
  printf("Summer is here!\n");
}
void winter(){
  printf("Winter is here!\n");
} 
void autumn(){
  printf("Autumn is here!\n");
}
void spring(){
  printf("Spring is here!\n");
}

int main(){
  void (*seasons[4])() = {summer, winter, autumn, spring}; // array of function pointers
  for (int i = 0; i < 4; i++) {
    seasons[i](); // calling each function through the pointer
  }
}

*/


/*

int adding(int x, int y) {
  return x + y;
}
int subtracting(int x, int y) {
  return x - y;
}
int multiplying(int x, int y) {
  return x * y;
}

int main(){
  int choice, x, y;
  printf("enter two numbers:");
  scanf("%d %d", &x, &y);
  printf("select an operation: 0 for addition, 1 for subtraction, 2 for multiplication:");
  scanf("%d", &choice);

  int (*operation[3])(int, int) = {adding, subtracting, multiplying};

  if (choice >= 0 && choice < 4){
    printf("the result: %d\n",operation[choice](x,y)) ;
  } else{
    printf("faah! enter a valid operation number\n");
  }
}

*/

/*

void multiplying(int x, int y){
  printf("the result is %d", x+y);
}

void calculate( void (*calling)(int,int), int x, int y){
  calling(x,y);
}

int main(){
  calculate(multiplying, 5, 4);
  return 0;
}

*/

/*

int main(){
  FILE *fptr;

  //creating a file
 // fptr = fopen("filename.txt", "w");

  //writing some text to the file
 // fprintf(fptr, "\ntrying something");


  //read the file
  fptr = fopen("filename.txt", "r");

  //storing the content of the file
  char mystring[120];

  //In order to read the content of filename.txt, we can use the fgets() function.
  while(fgets(mystring, 120, fptr)){
    //printing the file content
    printf("%s", mystring);
  }

  //closing the file
  fclose(fptr);

  return 0;
}

*/

/*
int main() {
  FILE *fptr;

  //trying to read a file which is not exist (bruh)
  fptr = fopen("nothing.txt","r");

  if(fptr == NULL){
    printf("there is no file named like this\n");
  } else{
    //ıt will be closed if the file successfully opened
     fclose(fptr);
  }

  return 0 ;
}
*/
//With this in mind, we can create a more sustainable code if we use our "read a file" example above again:
/*
int main(){
  FILE *fptr;

  //opening the file in the read mode
  fptr = fopen("filenme.txt","r");

  char mystrings[120];

  if(fptr != NULL){
    while(fgets(mystrings,120, fptr)){
      printf("%s",mystrings);
      fclose(fptr);
    }
  } else {
    printf("not able to open this file\n");
  }

  return 0;
}
*/

/*
struct myStructure{
  int myNum;
  char myLetter;
};

int main(){
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  struct myStructure s2;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'k';

  s2.myNum = 67;
  s2.myLetter = 'c';

  printf("my s1 number: %d\n", s1.myNum);
  printf("my s1 letter: %c\n", s1.myLetter);
  printf("my s2 number: %d\n", s2.myNum);
  printf("my s2 letter: %c\n", s2.myLetter);

  return 0;
}
*/

/*

//way to print a string with strcpy() function
struct Struct{
  char myString[30];
};

int main(){
  struct Struct s1;

  //assign the value to the string  using the strcpy function 
  strcpy(s1.myString, "blah blah");

  //printting the value
  printf("my string: %s\n", s1.myString);

  return 0 ;
}
*/

/*
struct STRUCT{
  int num;
  char chr;
  char string[30];
};

int main() {
  struct STRUCT variable = {8, 'D',   "meryem boztas"};

  printf("from %d/%c %s\n", variable.num, variable.chr, variable.string);

  return 0;
}
*/

/*
struct mycodes{
  int x;
  char chr;
  char str[20];
};

int main(){
  struct mycodes s1 = {12, 'd', "some text"};
  struct mycodes s2;
  
  //copying structure variable to another structure variable
  s2 = s1;

  printf("%d %c %s", s2.x, s2.chr, s2.str);

  return 0;
}
*/

/*
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};

  printf("before changing: %d, %c, %s\n",s1.myNum, s1.myLetter, s1.myString);

  s1.myNum = 186;
  s1.myLetter = 'l';
  strcpy(s1.myString, "New text");

  printf("after changing: %d, %c, %s\n",s1.myNum, s1.myLetter, s1.myString);

  return 0;
}
*/

/*
struct Phones{
  int age;
  char brand[30];
  char model[30];
};

int main() {
  struct Phones phone1 = {3, "iphone", "13"};
  struct Phones phone2 = {1, "samsung", "a51"};
  struct Phones phone3 = {20, "nokia", "3310"};

  printf("phone age: %d %s-%s\n", phone1.age, phone1.brand, phone1.model);
  printf("phone age: %d %s-%s\n", phone2.age, phone2.brand, phone2.model);
  printf("phone age: %d %s-%s\n", phone3.age, phone3.brand, phone3.model);

  return 0;
}
*/

/*
struct OWNER{
  char name[30];
  char surname[30];
};

struct CAR{
  char brand[30];
  int model;
  struct OWNER owner; //nested structure
};

int main() {
  struct OWNER person ={"nesimi", "boztas"};
  struct CAR car1 = {"togg", 2024, person};

  printf("car info: %s %d\n", car1.brand, car1.model);
  printf("owner info: %s %s\n", car1.owner.name, car1.owner.surname);

  return 0;
}
*/

/*
//define a struct 
struct Car{
  char brand[30];
  int year; 
};

int main() {
  struct Car car1 = {"toyota", 1999};

  //declaring a pointer to the struct 
  struct Car *ptr = &car1;

  //access members using the -> operator 
  printf("BRAND: %s\n", ptr->brand);
  printf("YEAR: %d\n", ptr->year);

  return 0;
}
*/

/*
struct Car {
  char brand[30];
  int year;
};

void updateYear(struct Car *c){
  c->year = 2023; //change the year 
}

int main(){
  struct Car myCar = {"toyota", 1999};

  updateYear(&myCar); //pass a pointer so the function can change the year

  printf("brand: %s\n", myCar.brand);
  printf("year %d\n", myCar.year);

  return 0;
}
*/

/*
union myUnion{
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  union myUnion u1;

  u1.myLetter = 's';

  //Since this is the last value written to the union, myLetter no longer holds 's' - its value is now invalid
  u1.myNum = 131416;

  printf("num: %d\n", u1.myNum); 
  printf("letter: %c\n", u1.myLetter); //nThis value no longer reliable

  return 0;
}
*/

/*
typedef float Temparature;

int main(){
  Temparature today = 25.5;
  Temparature tomorrow = 27.8;

  printf("Today: %.1f C\n", today);
  printf("Tomorrow: %.1f C\n", tomorrow);

  return 0;
}
*/

/*
//typedef can be useful with struct, because it lets you avoid writing struct every time:
typedef struct{
  char  brand[30];
  char model[30];
  int year;
} Car;

int main() {
  Car car1 = {"byd", "sedan", 2026};
  Car car2 = {"audi", "a8", 2018};

  printf("First car: %s %s(%d)\n", car1.brand , car1.model, car1.year);
  printf("Second car: %s %s(%d)\n", car2.brand , car2.model, car2.year);

  return 0;

}
*/

/*
struct Example{
  int a; //4 bytes
  char b; //1 bytes
  char c; //1 bytes
  int d; //4 bytes
};

int main() {
  printf("%zu bytes\n", sizeof(struct Example)); //we expect to output is 10 bytes but real output is 12 bytes. The reason is "padding"
  return 0;
}
*/

/*
enum Level {
  low, // we use comma for enumeration
  medium,
  high // no need for last item
};

int main() {
  enum Level lev1 = medium;
  enum Level lev2 = high;

  printf("first one's level:%d\n", lev1); //by default first item has the 0 value, second has the 1 value
  printf("second one's level:%d\n", lev2); //third has the 2 value

  return 0;
}
*/

/*
enum Level {
  low = 25, 
  medium = 50,
  high = 75 
};

int main() {
  enum Level lev1 = medium;
  enum Level lev2 = high;

  printf("first one's level:%d\n", lev1); // 50
  printf("second one's level:%d\n", lev2); // 75

  return 0;
}
*/

/*
enum Level {
  low = 28, //Note that if you assign a value to one specific item
  medium , //the next items will update their numbers accordingly
  high  
};

int main() {
  enum Level lev1 = medium;
  enum Level lev2 = high;

  printf("first one's level:%d\n", lev1); // 29
  printf("second one's level:%d\n", lev2); // 30

  return 0;
}
*/

/*
//Enum in a Switch Statement
enum Level {
  low = 1, 
  medium,
  high 
};

int main(){
  enum Level levControl = high;

  switch(levControl) {
    case 1:
     printf("low level\n");
     break;
    case 2: 
     printf("medium level\n");
     break;
    case 3:
     printf("high level\n");
     break;
  }
   
  return 0;
}
*/

/*
typedef enum {mon, tue, wed, thur, fri, sat, sun} days ;

int main() {
  days today = sat;
  
  if (today == sat) {
    printf("Yeyyy, it's saturday!\n");
  }

  return 0;
}
*/

/*
int main()  {
  // Allocating memory
  int *ptr;
  ptr = calloc(4, sizeof(*ptr));

  // Write to the memory
  *ptr = 2; //first element
  ptr[1] = 4;
  ptr[2] = 6;

  // Read from the memory
  printf("%d\n", *ptr);
  printf("%d %d %d\n", ptr[1], ptr[2], ptr[3]); //no defined third index so it basically outputs the value 0(?)
}
*/

/*
int main() {
  int *ptr1, *ptr2, size;

  // Allocate memory for four integers
  size = 4 * sizeof(*ptr1);
  ptr1 = malloc(size);

  printf("%d bytes allocated at address %p \n", size, ptr1); //

  // Resize the memory to hold six integers
  size = 6 * sizeof(*ptr1);
  ptr2 = realloc(ptr1, size);

  printf("%d bytes reallocated at address %p \n", size, ptr2);

}
*/

/*
//A working example including error checking and freeing:
int main() {
  int *ptr;
  ptr = malloc(sizeof(*ptr)); //allocate a memory for one integer

  //if memory can't be allocated, print a message and end the main() function
  if (ptr == NULL){
    printf("unable to allocate memory");
    return 1; //exit the program with an a error
  }

  *ptr = 20; //set the value of the integer

  printf("integer value: %d\n", *ptr); //print the integer value

  free(ptr); //free allocated memory 

  ptr = NULL; //set the pointer to NULL to prevent it from accidentally used

  return 0;
}
*/

/*
struct Car{
  char brand[50];
  int year;
};

int main() {
  //allocating memory for one Car struct
  struct Car *ptr = (struct Car*) malloc(sizeof(struct Car));

  //checking if allocation was successful 
  if (ptr == NULL) {
    printf("memory allocation failed!\n");
    return 1; //exiting the program an error code
  }

  //setting values
  strcpy(ptr->brand, "honda");
  ptr->year = 2022;

  //printing the values 
  printf("brand: %s\n", ptr->brand);
  printf("year: %d\n", ptr->year);

  //let it free the memory [let it happeeeennnn, let it happeeen]
  free(ptr);

  return 0;
}
*/

/*
//growing arrays later with realloc()
//seting a car struct has brand and year items 
struct Car {
  char brand[50];
  int year;
};

//main function
int main() {
  int count = 2; //we want 2 car
  struct Car *cars = (struct Car*) malloc(count * sizeof(struct Car)); //specifying enough space for 2 cars 
  if (cars == NULL) { //we make sure if malloc function doesnt return NULL for cars
    printf("Initial allocation failed.\n"); // possible error message
    return 1; 
  }

  // Initialize first 2 cars
  strcpy(cars[0].brand, "Toyota"); cars[0].year = 2010;
  strcpy(cars[1].brand, "Audi");   cars[1].year = 2019;

  // Need one more car -> grow to 3
  int newCount = 3;
  //Yeni alanı kiralarken, sonucu doğrudan cars işaretçisine atamıyoruz. 
  //Bunun yerine tmp (geçici - temporary) adında yeni bir işaretçi oluşturup, realloc'un verdiği yeni adresi ona yazıyoruz.
  struct Car *tmp = (struct Car*) realloc(cars, newCount * sizeof(struct Car));
  if (tmp == NULL) {
    // 'cars' is still valid here; free it to avoid a leak
    //realloc fonksiyonu başarısız olduğunda ilk kiraladığın hafızayı otomatik olarak silmez veya iptal etmez; 
    //hata verip programdan çıkmadan önce bu alanı senin manuel olarak iade etmen gerekir.
    free(cars);
    printf("Reallocation failed.\n");
    return 1;
  }

  //Eğer realloc başarılıysa: Genişleyen yeni otoparkın adresi tmp içindedir.
  // Artık güvenle bu yeni adresi asıl işaretçimiz olan cars üzerine kopyalayabiliriz.
  cars = tmp;  // use the reallocated block

  // Initialize the new element at index 2
  strcpy(cars[2].brand, "Kia"); cars[2].year = 2022;

  // Print all cars
  for (int i = 0; i < newCount; i++) {
    printf("%s - %d\n", cars[i].brand, cars[i].year);
  }

  free(cars);
  return 0;
}
*/

/*
int main() {
  int x = 10;
  int y = 0 ;

  if (y != 0){
    int z = x / y;
    printf("the result is %d.\n", z);
  } else if ( y == 0) {
    printf("divider cant be zero(0)\n");
  } 

  printf("after division\n");
  return 0 ;
}
*/

/*
//validate number range 
int main() {
  int number; // Variable to store the user's number

  do {
    printf("Choose a number between 1 and 5: ");
    scanf("%d", &number); // Read number input
    while (getchar() != '\n'); // Clear leftover characters from input buffer
  } while (number < 1 || number > 5); // Keep asking until number is between 1 and 5

  printf("You chose: %d\n", number); // Print the valid number
  return 0;
}
*/

/*
int main() {
  char name[100]; // Buffer to store the user's name

  do {
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read input as a string. (file get string).Boşluklar dahil yazdığın her şeyi okur. scanf ten akıllı
    name[strcspn(name, "\n")] = 0; // Remove the newline character if present
  } while (strlen(name) == 0); //(string length), metnin uzunluğunu ölçer.
  //Eğer kullanıcı ismini yazmak yerine boş boş Enter tuşuna bastıysa, metnin uzunluğu 0 olur. 
  //Döngü de "Adam hiçbir şey yazmadı (uzunluk 0), başa dönüp ismini tekrar sor" der.

  printf("Hello, %s\n", name); // Greet the user
  return 0;
}
*/

//getting the current time 
/*
int main() {
  time_t currentTime;
  time(&currentTime); //get the current time. the time() function returns the current time as a value of type time_t

  printf("the current time %s\n", ctime(&currentTime)); //You can use ctime() to convert the time into a readable string

  return 0;
}
*/

//breaking down the time
/*
int main() {
  time_t now = time(NULL); //getting current time 
  struct tm *t = localtime(&now); //convert to local time structer

  printf("Year: %d\n", t->tm_year + 1900);  // Add 1900 to get the actual year
  printf("Month: %d\n", t->tm_mon + 1);     // Months are numbered from 0 to 11, so add 1 to match real month numbers (1-12)
  printf("Day: %d\n", t->tm_mday); // We use -> because localtime() returns a pointer to a struct tm
  printf("Hour: %d\n", t->tm_hour);
  printf("Minute: %d\n", t->tm_min);
  printf("Second: %d\n", t->tm_sec);
  return 0;
}
*/

//random number in a range
/*
int main() {
  srand(time(NULL));

  int x = rand() % 10;  // 0..9
  printf("%d\n", x);
  return 0;
}
*/

//#define - Create a Macro
/*
#define PI 3.14

int main() {
  printf("Value of PI: %.2f\n", PI);
  return 0;
}
*/

/*
#define SQUARE(x) ((x) * (x))

int main() {
  printf("Square of 4: %d\n", SQUARE(4));
  return 0;
}
*/

