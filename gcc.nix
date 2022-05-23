{ pkgs ? import <nixpkgs> {}
}:
pkgs.mkShell {
  name="dev-environment";
  buildInputs = [
    pkgs.gcc
    pkgs.gdb
    pkgs.cmake
    pkgs.git
    pkgs.micro
    pkgs.docker
    pkgs.bat
    pkgs.openvscode-server
  ];
  shellHook = ''
    echo "Start developing ..."
  '';
}
