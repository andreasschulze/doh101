# source:
# https://github.com/fanf2/doh101/blob/master/roles/doh101/files/nginx.conf

location = /dns-query {
 #access_log /var/log/nginx/doh.log;
 content_by_lua_file /usr/share/doh101/doh.lua;
}
location @doh_no_dns {
 return 400;
}
