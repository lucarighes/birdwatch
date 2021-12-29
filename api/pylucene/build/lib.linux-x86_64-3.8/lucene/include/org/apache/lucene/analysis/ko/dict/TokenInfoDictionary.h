#ifndef org_apache_lucene_analysis_ko_dict_TokenInfoDictionary_H
#define org_apache_lucene_analysis_ko_dict_TokenInfoDictionary_H

#include "org/apache/lucene/analysis/ko/dict/BinaryDictionary.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class TokenInfoFST;
            class BinaryDictionary$ResourceScheme;
            class TokenInfoDictionary;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {

            class TokenInfoDictionary : public ::org::apache::lucene::analysis::ko::dict::BinaryDictionary {
             public:
              enum {
                mid_init$_6cf983c700d51b23,
                mid_getFST_40646bf76a22e5f0,
                mid_getInstance_d4b59ead1a97ea14,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TokenInfoDictionary(jobject obj) : ::org::apache::lucene::analysis::ko::dict::BinaryDictionary(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TokenInfoDictionary(const TokenInfoDictionary& obj) : ::org::apache::lucene::analysis::ko::dict::BinaryDictionary(obj) {}

              static ::java::lang::String *FST_FILENAME_SUFFIX;

              TokenInfoDictionary(const ::org::apache::lucene::analysis::ko::dict::BinaryDictionary$ResourceScheme &, const ::java::lang::String &);

              ::org::apache::lucene::analysis::ko::dict::TokenInfoFST getFST() const;
              static TokenInfoDictionary getInstance();
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
      namespace analysis {
        namespace ko {
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(TokenInfoDictionary);
            extern PyTypeObject *PY_TYPE(TokenInfoDictionary);

            class t_TokenInfoDictionary {
            public:
              PyObject_HEAD
              TokenInfoDictionary object;
              static PyObject *wrap_Object(const TokenInfoDictionary&);
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
