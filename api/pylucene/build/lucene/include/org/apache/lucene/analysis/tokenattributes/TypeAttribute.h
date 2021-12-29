#ifndef org_apache_lucene_analysis_tokenattributes_TypeAttribute_H
#define org_apache_lucene_analysis_tokenattributes_TypeAttribute_H

#include "org/apache/lucene/util/Attribute.h"

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
        namespace tokenattributes {

          class TypeAttribute : public ::org::apache::lucene::util::Attribute {
           public:
            enum {
              mid_setType_9fd2eb66a64e6f0f,
              mid_type_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TypeAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TypeAttribute(const TypeAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

            static ::java::lang::String *DEFAULT_TYPE;

            void setType(const ::java::lang::String &) const;
            ::java::lang::String type() const;
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
        namespace tokenattributes {
          extern PyType_Def PY_TYPE_DEF(TypeAttribute);
          extern PyTypeObject *PY_TYPE(TypeAttribute);

          class t_TypeAttribute {
          public:
            PyObject_HEAD
            TypeAttribute object;
            static PyObject *wrap_Object(const TypeAttribute&);
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
