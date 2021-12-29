#ifndef org_apache_pylucene_search_spans_PythonSpanCollector_H
#define org_apache_pylucene_search_spans_PythonSpanCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class PostingsEnum;
      }
      namespace search {
        namespace spans {
          class SpanCollector;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace spans {

          class PythonSpanCollector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_collectLeaf_a1c6efa50e122f38,
              mid_finalize_f2cc1bce94666404,
              mid_pythonDecRef_f2cc1bce94666404,
              mid_pythonExtension_2e5ae9edcb9b072f,
              mid_pythonExtension_9c778c9bce6694df,
              mid_reset_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonSpanCollector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonSpanCollector(const PythonSpanCollector& obj) : ::java::lang::Object(obj) {}

            PythonSpanCollector();

            void collectLeaf(const ::org::apache::lucene::index::PostingsEnum &, jint, const ::org::apache::lucene::index::Term &) const;
            void finalize() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            void reset() const;
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
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(PythonSpanCollector);
          extern PyTypeObject *PY_TYPE(PythonSpanCollector);

          class t_PythonSpanCollector {
          public:
            PyObject_HEAD
            PythonSpanCollector object;
            static PyObject *wrap_Object(const PythonSpanCollector&);
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
