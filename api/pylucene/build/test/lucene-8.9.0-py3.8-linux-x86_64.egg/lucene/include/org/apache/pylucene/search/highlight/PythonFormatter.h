#ifndef org_apache_pylucene_search_highlight_PythonFormatter_H
#define org_apache_pylucene_search_highlight_PythonFormatter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class Formatter;
          class TokenGroup;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace highlight {

          class PythonFormatter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_finalize_f2cc1bce94666404,
              mid_highlightTerm_89cd75f77d741eb4,
              mid_pythonDecRef_f2cc1bce94666404,
              mid_pythonExtension_2e5ae9edcb9b072f,
              mid_pythonExtension_9c778c9bce6694df,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonFormatter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonFormatter(const PythonFormatter& obj) : ::java::lang::Object(obj) {}

            PythonFormatter();

            void finalize() const;
            ::java::lang::String highlightTerm(const ::java::lang::String &, const ::org::apache::lucene::search::highlight::TokenGroup &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonFormatter);
          extern PyTypeObject *PY_TYPE(PythonFormatter);

          class t_PythonFormatter {
          public:
            PyObject_HEAD
            PythonFormatter object;
            static PyObject *wrap_Object(const PythonFormatter&);
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
