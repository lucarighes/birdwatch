#ifndef org_apache_lucene_search_suggest_document_ContextSuggestField_H
#define org_apache_lucene_search_suggest_document_ContextSuggestField_H

#include "org/apache/lucene/search/suggest/document/SuggestField.h"

namespace java {
  namespace lang {
    class CharSequence;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class ContextSuggestField : public ::org::apache::lucene::search::suggest::document::SuggestField {
             public:
              enum {
                mid_init$_db782509fd74b8de,
                mid_contexts_7a21c115c1b038aa,
                mid_wrapTokenStream_6c4ec0190b15759d,
                mid_type_871cd52a74f26213,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ContextSuggestField(jobject obj) : ::org::apache::lucene::search::suggest::document::SuggestField(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ContextSuggestField(const ContextSuggestField& obj) : ::org::apache::lucene::search::suggest::document::SuggestField(obj) {}

              static jint CONTEXT_SEPARATOR;

              ContextSuggestField(const ::java::lang::String &, const ::java::lang::String &, jint, const JArray< ::java::lang::CharSequence > &);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {
            extern PyType_Def PY_TYPE_DEF(ContextSuggestField);
            extern PyTypeObject *PY_TYPE(ContextSuggestField);

            class t_ContextSuggestField {
            public:
              PyObject_HEAD
              ContextSuggestField object;
              static PyObject *wrap_Object(const ContextSuggestField&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
