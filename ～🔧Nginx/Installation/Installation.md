# Location
1. On Mac
{warn}
Pre-requests:
  1. Homebrew is installed on MacOs
{warn}

To install and launch Nginx on startup, we use:
```
brew install nginx
sudo brew services start nginx
```

{info}
Although we mustn’t use `sudo` with `brew install`, it is necessary to use it to launch Nginx if we want to use the the default port 80.
{info}

# Reference
https://www.sylvaindurand.org/setting-up-a-nginx-web-server-on-macos/