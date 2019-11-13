with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "libft";
  src = ./.;

  buildInputs = with pkgs; [
    gcc
  ];
}
