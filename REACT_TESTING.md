# Testing 

## Testing Layers 
* Static: => to cover typo and syntax errors
* unit Test: => to test functionality of the application
* integration Test: => test how things work together
* e2e Test: => for automatic clicks instead of relay on the user 






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
 
