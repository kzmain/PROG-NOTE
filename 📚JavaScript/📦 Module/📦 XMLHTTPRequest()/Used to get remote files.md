# Code segment
This code segment uses `XMLHttpRequest` to get remote files then insert into selected section `change_tag` as `innerHTML`

```
let target_file = new XMLHttpRequest();
target_file.onreadystatechange = function () {
    if (target_file.readyState === 4) {
        if (target_file.status === 200 || target_file.status === 0) {
            change_tag.innerHTML = target_file.responseText;
        }
    }
};
target_file.open("GET", file_location);
target_file.send(null);
```
# Caution
{danger}
* Synchronous mode is desperated.
* Cannot used to get local files, EXCEPT you runs nginx/appache on your computer/server
{danger}
