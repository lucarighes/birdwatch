#ifndef org_apache_lucene_analysis_tokenattributes_PositionIncrementAttribute_H
#define org_apache_lucene_analysis_tokenattributes_PositionIncrementAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class PositionIncrementAttribute : public ::org::apache::lucene::util::Attribute {
           public:
            enum {
              mid_getPositionIncrement_9972fcc56b44e79d,
              mid_setPositionIncrement_040c4cd0390c5aff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PositionIncrementAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PositionIncrementAttribute(const PositionIncrementAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

            jint getPositionIncrement() const;
            void setPositionIncrement(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(PositionIncrementAttribute);
          extern PyTypeObject *PY_TYPE(PositionIncrementAttribute);

          class t_PositionIncrementAttribute {
          public:
            PyObject_HEAD
            PositionIncrementAttribute object;
            static PyObject *wrap_Object(const PositionIncrementAttribute&);
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
