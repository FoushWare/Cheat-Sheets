# Testing 

## Testing Layers 
* Static: => to cover typo and syntax errors
* unit Test: => to test functionality of the application
* integration Test: => test how things work together
* e2e Test: => for automatic clicks instead of relay on the user 

## Module 01 fundamentals_of_testing




## Module 02 javascript mocking fundementails 


## Module 03 static analysis testing  

## Module 04 use Dom Testing Library to test any JS Framework  

## Module 05 configure jest for testing javascript Applications   

## Module 06 Test React Components with jest and React Testing library   

## Module 07 install configure and script cypress for javascript web applications


## Module 08 Test nodjs backend 






#### Cases
* First_Test:
renders without crashing

* cleanup after each test you can import this and this will make it for me 
```
 import '@testing-library/react/cleanup-after-each';
```

* You can use mock functions for buttons click 
```

const click = jest.fn();

expect(click).toBeCalled();

```
 
