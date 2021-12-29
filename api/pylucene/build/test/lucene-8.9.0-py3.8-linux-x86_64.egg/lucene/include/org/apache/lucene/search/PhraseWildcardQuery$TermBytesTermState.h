#ifndef org_apache_lucene_search_PhraseWildcardQuery$TermBytesTermState_H
#define org_apache_lucene_search_PhraseWildcardQuery$TermBytesTermState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class TermState;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class PhraseWildcardQuery$TermBytesTermState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_59a5c9565dacabef,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PhraseWildcardQuery$TermBytesTermState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PhraseWildcardQuery$TermBytesTermState(const PhraseWildcardQuery$TermBytesTermState& obj) : ::java::lang::Object(obj) {}

          PhraseWildcardQuery$TermBytesTermState(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &);

          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(PhraseWildcardQuery$TermBytesTermState);
        extern PyTypeObject *PY_TYPE(PhraseWildcardQuery$TermBytesTermState);

        class t_PhraseWildcardQuery$TermBytesTermState {
        public:
          PyObject_HEAD
          PhraseWildcardQuery$TermBytesTermState object;
          static PyObject *wrap_Object(const PhraseWildcardQuery$TermBytesTermState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
