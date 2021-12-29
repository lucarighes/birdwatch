#ifndef org_apache_lucene_analysis_ko_GraphvizFormatter_H
#define org_apache_lucene_analysis_ko_GraphvizFormatter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class ConnectionCosts;
          }
        }
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
      namespace analysis {
        namespace ko {

          class GraphvizFormatter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_67f306a73697951a,
              mid_finish_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GraphvizFormatter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GraphvizFormatter(const GraphvizFormatter& obj) : ::java::lang::Object(obj) {}

            GraphvizFormatter(const ::org::apache::lucene::analysis::ko::dict::ConnectionCosts &);

            ::java::lang::String finish() const;
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
      namespace analysis {
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(GraphvizFormatter);
          extern PyTypeObject *PY_TYPE(GraphvizFormatter);

          class t_GraphvizFormatter {
          public:
            PyObject_HEAD
            GraphvizFormatter object;
            static PyObject *wrap_Object(const GraphvizFormatter&);
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
