
vcl 4.0;

import cookie;
import header;
import saintmode;
import softpurge;
import tcp;
import vsthrottle;
import xkey;

backend default {
        .host = "[::1]";
        .port = "80";
}
