require 'spec_helper'

describe command("cp -v #{ENV['PWD']}/test.vcl /etc/varnish/test.vcl") do
  its(:exit_status) { should eq 0 }
end

describe command("varnishadm vcl.load test /etc/varnish/test.vcl") do
  its(:exit_status) { should eq 0 }
  its(:stdout) { should match(/VCL compiled./) }
  its(:stderr) { should eq "" }
end

describe command("varnishadm vcl.use test") do
  its(:exit_status) { should eq 0 }
  its(:stdout) { should match(/VCL 'test' now active/) }
  its(:stderr) { should eq "" }
end
