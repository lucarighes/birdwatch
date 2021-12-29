#ifndef org_apache_lucene_search_PhraseWildcardQuery$Builder_H
#define org_apache_lucene_search_PhraseWildcardQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace util {
        class BytesRef;
      }
      namespace search {
        class MultiTermQuery;
        class PhraseWildcardQuery;
        class PhraseWildcardQuery$Builder;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class PhraseWildcardQuery$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3fb1dae8d4037984,
            mid_init$_e2b47882c0ff8413,
            mid_addMultiTerm_8555fae175a1171b,
            mid_addTerm_538d8af4dd39f681,
            mid_addTerm_644db9081d89f716,
            mid_build_128c75b489092074,
            mid_setSlop_5aa3043c0cd67fd3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PhraseWildcardQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PhraseWildcardQuery$Builder(const PhraseWildcardQuery$Builder& obj) : ::java::lang::Object(obj) {}

          PhraseWildcardQuery$Builder(const ::java::lang::String &, jint);
          PhraseWildcardQuery$Builder(const ::java::lang::String &, jint, jboolean);

          PhraseWildcardQuery$Builder addMultiTerm(const ::org::apache::lucene::search::MultiTermQuery &) const;
          PhraseWildcardQuery$Builder addTerm(const ::org::apache::lucene::index::Term &) const;
          PhraseWildcardQuery$Builder addTerm(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::search::PhraseWildcardQuery build() const;
          PhraseWildcardQuery$Builder setSlop(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(PhraseWildcardQuery$Builder);
        extern PyTypeObject *PY_TYPE(PhraseWildcardQuery$Builder);

        class t_PhraseWildcardQuery$Builder {
        public:
          PyObject_HEAD
          PhraseWildcardQuery$Builder object;
          static PyObject *wrap_Object(const PhraseWildcardQuery$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
