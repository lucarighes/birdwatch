#ifndef org_apache_lucene_search_suggest_document_Completion50PostingsFormat_H
#define org_apache_lucene_search_suggest_document_Completion50PostingsFormat_H

#include "org/apache/lucene/search/suggest/document/CompletionPostingsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {
            class CompletionPostingsFormat$FSTLoadMode;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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

            class Completion50PostingsFormat : public ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_init$_de3d093607610286,
                mid_delegatePostingsFormat_1a5e16ceada7aa64,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Completion50PostingsFormat(jobject obj) : ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Completion50PostingsFormat(const Completion50PostingsFormat& obj) : ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat(obj) {}

              Completion50PostingsFormat();
              Completion50PostingsFormat(const ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat$FSTLoadMode &);
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
            extern PyType_Def PY_TYPE_DEF(Completion50PostingsFormat);
            extern PyTypeObject *PY_TYPE(Completion50PostingsFormat);

            class t_Completion50PostingsFormat {
            public:
              PyObject_HEAD
              Completion50PostingsFormat object;
              static PyObject *wrap_Object(const Completion50PostingsFormat&);
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
