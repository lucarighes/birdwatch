#ifndef org_apache_lucene_codecs_bloom_FuzzySet_H
#define org_apache_lucene_codecs_bloom_FuzzySet_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace codecs {
        namespace bloom {
          class FuzzySet$ContainsResult;
          class HashFunction;
          class FuzzySet;
        }
      }
      namespace store {
        class DataOutput;
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace bloom {

          class FuzzySet : public ::java::lang::Object {
           public:
            enum {
              mid_addValue_0bdfd2603b7490a8,
              mid_contains_4e2fe2873f8410bf,
              mid_createSetBasedOnMaxMemory_ede0ea046600091a,
              mid_createSetBasedOnQuality_e0e4cc37715c92e9,
              mid_deserialize_bab304101d405e57,
              mid_downsize_935529a4a50ffa90,
              mid_getEstimatedNumberUniqueValuesAllowingForCollisions_57a58545eba514db,
              mid_getEstimatedUniqueValues_9972fcc56b44e79d,
              mid_getNearestSetSize_1e143afe1894d213,
              mid_getNearestSetSize_9bbd64b479047242,
              mid_getSaturation_58aec2b64dff50c8,
              mid_hashFunctionForVersion_535b78b5dd6cc7d8,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_serialize_ead2c38342037c59,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FuzzySet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FuzzySet(const FuzzySet& obj) : ::java::lang::Object(obj) {}

            static jint VERSION_CURRENT;
            static jint VERSION_SPI;
            static jint VERSION_START;

            void addValue(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::codecs::bloom::FuzzySet$ContainsResult contains(const ::org::apache::lucene::util::BytesRef &) const;
            static FuzzySet createSetBasedOnMaxMemory(jint);
            static FuzzySet createSetBasedOnQuality(jint, jfloat);
            static FuzzySet deserialize(const ::org::apache::lucene::store::DataInput &);
            FuzzySet downsize(jfloat) const;
            static jint getEstimatedNumberUniqueValuesAllowingForCollisions(jint, jint);
            jint getEstimatedUniqueValues() const;
            static jint getNearestSetSize(jint);
            static jint getNearestSetSize(jint, jfloat);
            jfloat getSaturation() const;
            static ::org::apache::lucene::codecs::bloom::HashFunction hashFunctionForVersion(jint);
            jlong ramBytesUsed() const;
            void serialize(const ::org::apache::lucene::store::DataOutput &) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(FuzzySet);
          extern PyTypeObject *PY_TYPE(FuzzySet);

          class t_FuzzySet {
          public:
            PyObject_HEAD
            FuzzySet object;
            static PyObject *wrap_Object(const FuzzySet&);
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
