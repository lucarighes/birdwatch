#ifndef org_apache_pylucene_search_highlight_PythonFragmenter_H
#define org_apache_pylucene_search_highlight_PythonFragmenter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Throwable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
      namespace search {
        namespace highlight {
          class Fragmenter;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace highlight {

          class PythonFragmenter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_finalize_f2cc1bce94666404,
              mid_isNewFragment_8454bd5aa23fd11e,
              mid_pythonDecRef_f2cc1bce94666404,
              mid_pythonExtension_2e5ae9edcb9b072f,
              mid_pythonExtension_9c778c9bce6694df,
              mid_start_c5ab6d211d8d31bc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonFragmenter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonFragmenter(const PythonFragmenter& obj) : ::java::lang::Object(obj) {}

            PythonFragmenter();

            void finalize() const;
            jboolean isNewFragment() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
    namespace pylucene {
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(PythonFragmenter);
          extern PyTypeObject *PY_TYPE(PythonFragmenter);

          class t_PythonFragmenter {
          public:
            PyObject_HEAD
            PythonFragmenter object;
            static PyObject *wrap_Object(const PythonFragmenter&);
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
