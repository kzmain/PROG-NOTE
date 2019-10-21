# Description
Create a full-height, "sticky" side navigation

# Code Segment
```
ul {
  list-style-type: none;
  margin: 0;
  padding: 0;
  width: 25%;
  background-color: #f1f1f1;
  height: 100%; /* Full height */
  position: fixed; /* Make it stick, even on scroll */
  overflow: auto; /* Enable scrolling if the sidenav has too much content */
}
```

# Reference
https://www.w3schools.com/howto/howto_css_vertical_menu.asp
https://www.w3schools.com/css/tryit.asp?filename=trycss_navbar_vertical_fixed