#ifndef org_apache_lucene_search_PhraseWildcardQuery$TermStats_H
#define org_apache_lucene_search_PhraseWildcardQuery$TermStats_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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

        class PhraseWildcardQuery$TermStats : public ::java::lang::Object {
         public:
          enum {
            mid_getTermBytes_7af2ea2e37ce82b8,
            mid_addStats_7b2f5b9ddfcb9416,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PhraseWildcardQuery$TermStats(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PhraseWildcardQuery$TermStats(const PhraseWildcardQuery$TermStats& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::util::BytesRef getTermBytes() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(PhraseWildcardQuery$TermStats);
        extern PyTypeObject *PY_TYPE(PhraseWildcardQuery$TermStats);

        class t_PhraseWildcardQuery$TermStats {
        public:
          PyObject_HEAD
          PhraseWildcardQuery$TermStats object;
          static PyObject *wrap_Object(const PhraseWildcardQuery$TermStats&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
