#ifndef org_apache_lucene_analysis_tokenattributes_TermFrequencyAttribute_H
#define org_apache_lucene_analysis_tokenattributes_TermFrequencyAttribute_H

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

          class TermFrequencyAttribute : public ::org::apache::lucene::util::Attribute {
           public:
            enum {
              mid_getTermFrequency_9972fcc56b44e79d,
              mid_setTermFrequency_040c4cd0390c5aff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermFrequencyAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermFrequencyAttribute(const TermFrequencyAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

            jint getTermFrequency() const;
            void setTermFrequency(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(TermFrequencyAttribute);
          extern PyTypeObject *PY_TYPE(TermFrequencyAttribute);

          class t_TermFrequencyAttribute {
          public:
            PyObject_HEAD
            TermFrequencyAttribute object;
            static PyObject *wrap_Object(const TermFrequencyAttribute&);
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
