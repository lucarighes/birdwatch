#ifndef org_apache_lucene_search_BlendedTermQuery$Builder_H
#define org_apache_lucene_search_BlendedTermQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BlendedTermQuery$RewriteMethod;
        class BlendedTermQuery;
        class BlendedTermQuery$Builder;
      }
      namespace index {
        class Term;
        class TermStates;
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

        class BlendedTermQuery$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_add_8748bb65f7153529,
            mid_add_3cf9700bfd67115e,
            mid_add_6eb18b0022d95b58,
            mid_build_24ea9d64cfec7a61,
            mid_setRewriteMethod_8446997eb404bf58,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BlendedTermQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BlendedTermQuery$Builder(const BlendedTermQuery$Builder& obj) : ::java::lang::Object(obj) {}

          BlendedTermQuery$Builder();

          BlendedTermQuery$Builder add(const ::org::apache::lucene::index::Term &) const;
          BlendedTermQuery$Builder add(const ::org::apache::lucene::index::Term &, jfloat) const;
          BlendedTermQuery$Builder add(const ::org::apache::lucene::index::Term &, jfloat, const ::org::apache::lucene::index::TermStates &) const;
          ::org::apache::lucene::search::BlendedTermQuery build() const;
          BlendedTermQuery$Builder setRewriteMethod(const ::org::apache::lucene::search::BlendedTermQuery$RewriteMethod &) const;
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
        extern PyType_Def PY_TYPE_DEF(BlendedTermQuery$Builder);
        extern PyTypeObject *PY_TYPE(BlendedTermQuery$Builder);

        class t_BlendedTermQuery$Builder {
        public:
          PyObject_HEAD
          BlendedTermQuery$Builder object;
          static PyObject *wrap_Object(const BlendedTermQuery$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
