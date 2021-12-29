#ifndef org_apache_lucene_analysis_tokenattributes_TermFrequencyAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_TermFrequencyAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeReflector;
      }
      namespace analysis {
        namespace tokenattributes {
          class TermFrequencyAttribute;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class TermFrequencyAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_clear_f2cc1bce94666404,
              mid_copyTo_26346c38ebc9c090,
              mid_end_f2cc1bce94666404,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getTermFrequency_9972fcc56b44e79d,
              mid_hashCode_9972fcc56b44e79d,
              mid_reflectWith_b880c72ee67200af,
              mid_setTermFrequency_040c4cd0390c5aff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermFrequencyAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermFrequencyAttributeImpl(const TermFrequencyAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            TermFrequencyAttributeImpl();

            void clear() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            void end() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getTermFrequency() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
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
          extern PyType_Def PY_TYPE_DEF(TermFrequencyAttributeImpl);
          extern PyTypeObject *PY_TYPE(TermFrequencyAttributeImpl);

          class t_TermFrequencyAttributeImpl {
          public:
            PyObject_HEAD
            TermFrequencyAttributeImpl object;
            static PyObject *wrap_Object(const TermFrequencyAttributeImpl&);
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
