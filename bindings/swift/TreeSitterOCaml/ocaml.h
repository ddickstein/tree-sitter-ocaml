#ifndef TREE_SITTER_OCAML_H_
#define TREE_SITTER_OCAML_H_

typedef struct TSLanguage TSLanguage;

#ifdef __cplusplus
extern "C" {
#endif

const TSLanguage *tree_sitter_ocaml();
const TSLanguage *tree_sitter_ocaml_interface();
const TSLanguage *tree_sitter_ocaml_type();

#ifdef __cplusplus
}
#endif

#endif  // TREE_SITTER_OCAML_H_
