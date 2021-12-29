#ifndef org_apache_lucene_search_highlight_Fragmenter_H
#define org_apache_lucene_search_highlight_Fragmenter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class Fragmenter : public ::java::lang::Object {
           public:
            enum {
              mid_isNewFragment_8454bd5aa23fd11e,
              mid_start_c5ab6d211d8d31bc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Fragmenter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Fragmenter(const Fragmenter& obj) : ::java::lang::Object(obj) {}

            jboolean isNewFragment() const;
            void start(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &) const;
          };
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
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(Fragmenter);
          extern PyTypeObject *PY_TYPE(Fragmenter);

          class t_Fragmenter {
          public:
            PyObject_HEAD
            Fragmenter object;
            static PyObject *wrap_Object(const Fragmenter&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
