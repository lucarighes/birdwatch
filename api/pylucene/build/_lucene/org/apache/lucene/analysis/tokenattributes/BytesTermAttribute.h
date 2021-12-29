#ifndef org_apache_lucene_analysis_tokenattributes_BytesTermAttribute_H
#define org_apache_lucene_analysis_tokenattributes_BytesTermAttribute_H

#include "org/apache/lucene/analysis/tokenattributes/TermToBytesRefAttribute.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
      namespace analysis {
        namespace tokenattributes {

          class BytesTermAttribute : public ::org::apache::lucene::analysis::tokenattributes::TermToBytesRefAttribute {
           public:
            enum {
              mid_setBytesRef_0bdfd2603b7490a8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BytesTermAttribute(jobject obj) : ::org::apache::lucene::analysis::tokenattributes::TermToBytesRefAttribute(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BytesTermAttribute(const BytesTermAttribute& obj) : ::org::apache::lucene::analysis::tokenattributes::TermToBytesRefAttribute(obj) {}

            void setBytesRef(const ::org::apache::lucene::util::BytesRef &) const;
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
          extern PyType_Def PY_TYPE_DEF(BytesTermAttribute);
          extern PyTypeObject *PY_TYPE(BytesTermAttribute);

          class t_BytesTermAttribute {
          public:
            PyObject_HEAD
            BytesTermAttribute object;
            static PyObject *wrap_Object(const BytesTermAttribute&);
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
