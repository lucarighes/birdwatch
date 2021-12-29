#ifndef org_apache_lucene_expressions_js_VariableContext_H
#define org_apache_lucene_expressions_js_VariableContext_H

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
      namespace expressions {
        namespace js {
          class VariableContext;
          class VariableContext$Type;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        namespace js {

          class VariableContext : public ::java::lang::Object {
           public:
            enum {
              mid_parse_4cf965db31ff1d03,
              max_mid
            };

            enum {
              fid_integer,
              fid_text,
              fid_type,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit VariableContext(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            VariableContext(const VariableContext& obj) : ::java::lang::Object(obj) {}

            jint _get_integer() const;
            ::java::lang::String _get_text() const;
            ::org::apache::lucene::expressions::js::VariableContext$Type _get_type() const;

            static JArray< VariableContext > parse(const ::java::lang::String &);
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
      namespace expressions {
        namespace js {
          extern PyType_Def PY_TYPE_DEF(VariableContext);
          extern PyTypeObject *PY_TYPE(VariableContext);

          class t_VariableContext {
          public:
            PyObject_HEAD
            VariableContext object;
            static PyObject *wrap_Object(const VariableContext&);
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
