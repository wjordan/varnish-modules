===========
vmod_header
===========

---------------------
Varnish Header Module
---------------------

SYNOPSIS
========

::

        import header;

        header.append(<header>, <content>)
        header.get(<header>, <regular expression>)
        header.remove(<header>, <regular expression>)
        header.copy(<source header>, <destination header>)
        header.version()

DESCRIPTION
===========

Varnish Module (vmod) for manipulation of duplicated headers (for instance
multiple set-cookie headers).

FUNCTIONS
=========

Example VCL::

	backend foo { ... };

	import header;

	sub vcl_fetch {
		header.append(beresp.http.Set-Cookie,"foo=bar");
                header.remove(beresp.http.Set-Cookie,"dontneedthiscookie");
	}


append
------

Prototype
        header.append(<header>, <content>)
Returns
        void
Description
        Append lets you add an extra occurrence of an existing header.
Example
        ``header.append(beresp.http.Set-Cookie,"foo=bar")``

get
---

Prototype
        header.get(<header>, <regular expression>)
Returns
        String
Description
        Get fetches the value of the first `header` that matches the given
        regular expression.
Example
        ``set beresp.http.xusr = header.get(beresp.http.set-cookie,"user=");``

remove
------

Prototype
        header.remove(<header>, <regular expression>)
Returns
        void
Description
        remove() removes all occurences of `header` that matches the given
        regular expression. The example is a white-list of "funcookie=".
Example
        ``header.remove(beresp.http.set-cookie,"^(?!(funcookie=))");``

copy
----

Prototype
        header.copy(<source header>, <destination header>)
Returns
        void
Description
        Copies all of the source headers to a new header.
Example
        ``header.copy(beresp.http.set-cookie, beresp.http.x-old-cookie);``

version
-------

Prototype
        header.version()
Returns
        string
Description
        Returns the string constant version-number of the header vmod.
Example
        ``set resp.http.X-header-version = header.version();``



ACKNOWLEDGEMENTS
================

The development of this plugin was made possible by the sponsorship of
Softonic, http://en.softonic.com/ .

Also thanks to: Imo Klabun and Anders Nordby for bug reports.

BUGS
====

You can't use dynamic regular expressions, which also holds true for normal
regular expressions in regsub(), but VCL isn't able to warn you about this
when it comes to vmods yet.

Some overlap with varnishd exists, this will be mended as Varnish 3.0
evolves.

SEE ALSO
========

* varnishd(1)
* vcl(7)
* https://github.com/varnish/libvmod-header
