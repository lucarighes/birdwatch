#ifndef org_apache_lucene_codecs_bloom_BloomFilterFactory_H
#define org_apache_lucene_codecs_bloom_BloomFilterFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace bloom {
          class FuzzySet;
        }
      }
      namespace index {
        class SegmentWriteState;
        class FieldInfo;
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
      namespace codecs {
        namespace bloom {

          class BloomFilterFactory : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_downsize_1fab3db7085f2b17,
              mid_getSetForField_a88e25f1123572f0,
              mid_isSaturated_ac34470664e5294b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BloomFilterFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BloomFilterFactory(const BloomFilterFactory& obj) : ::java::lang::Object(obj) {}

            BloomFilterFactory();

            ::org::apache::lucene::codecs::bloom::FuzzySet downsize(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::bloom::FuzzySet &) const;
            ::org::apache::lucene::codecs::bloom::FuzzySet getSetForField(const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::index::FieldInfo &) const;
            jboolean isSaturated(const ::org::apache::lucene::codecs::bloom::FuzzySet &, const ::org::apache::lucene::index::FieldInfo &) const;
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
      namespace codecs {
        namespace bloom {
          extern PyType_Def PY_TYPE_DEF(BloomFilterFactory);
          extern PyTypeObject *PY_TYPE(BloomFilterFactory);

          class t_BloomFilterFactory {
          public:
            PyObject_HEAD
            BloomFilterFactory object;
            static PyObject *wrap_Object(const BloomFilterFactory&);
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
