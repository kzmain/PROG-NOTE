# Configuration
* On Mac
  1. Backup before edit config file
  ```
  cp /usr/local/etc/nginx/nginx.conf /usr/local/etc/nginx/nginx.conf.backup
  ```
  2. Open config file
  ```
  vi /usr/local/etc/nginx/nginx.conf
  ```
  3. Press `a` start to edit your configs, you can use following config as a template to input your own Nginx config
  * listen: Listen port can be any big number you like
  * root: follows uri to your webpage's root folder
  * index: Index page/Home page name of your entry page
  ```
  server {
    listen 10086;
    server_name localhost;
    root /Users/<user>/Documents/path/to/your/website;
    index index.html index.htm;
  }
  ```
  4. Press `esc` enter `:wq` to save file and quit editing mode
  5. Restart `Nginx` service to enable latest config
  ```
  sudo brew services restart nginx
  ```
  
# Reference
https://www.sylvaindurand.org/setting-up-a-nginx-web-server-on-macos/