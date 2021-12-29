#ifndef org_apache_lucene_util_RamUsageEstimator_H
#define org_apache_lucene_util_RamUsageEstimator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Collection;
  }
  namespace lang {
    class Long;
    class Class;
    class Integer;
    class String;
  }
  namespace text {
    class DecimalFormat;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace search {
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class RamUsageEstimator : public ::java::lang::Object {
         public:
          enum {
            mid_alignObjectSize_d711eecdc469624a,
            mid_humanReadableUnits_55e776ffac018431,
            mid_humanReadableUnits_3954aad118db45ad,
            mid_shallowSizeOf_a6ba6de4dd4ed492,
            mid_shallowSizeOf_c602cc71de3e942a,
            mid_shallowSizeOfInstance_8ea87e9cb0ca4dd0,
            mid_sizeOf_d203c0dc0f144d1b,
            mid_sizeOf_95a0ff0710929aaf,
            mid_sizeOf_61d19defddc48587,
            mid_sizeOf_087bbda4bb73a252,
            mid_sizeOf_d4f01cd72bae9c25,
            mid_sizeOf_7b5853970f788289,
            mid_sizeOf_2ce8100461530515,
            mid_sizeOf_2645a42e82b64cfd,
            mid_sizeOf_472afd0f39ac25a3,
            mid_sizeOf_715ac035d1e80e91,
            mid_sizeOf_4d935f3548941b9c,
            mid_sizeOf_b1e05207ec98e246,
            mid_sizeOf_da8f2794548cf6c9,
            mid_sizeOf_f094425123f64432,
            mid_sizeOf_062992559495b392,
            mid_sizeOfCollection_1c819c4404584e86,
            mid_sizeOfCollection_8e7bdc802abdd675,
            mid_sizeOfMap_06de9bf8e68fd109,
            mid_sizeOfMap_d201e8889b794056,
            mid_sizeOfObject_c602cc71de3e942a,
            mid_sizeOfObject_257414bc2345c0f4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RamUsageEstimator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RamUsageEstimator(const RamUsageEstimator& obj) : ::java::lang::Object(obj) {}

          static jboolean COMPRESSED_REFS_ENABLED;
          static jlong HASHTABLE_RAM_BYTES_PER_ENTRY;
          static jlong LINKED_HASHTABLE_RAM_BYTES_PER_ENTRY;
          static jint MAX_DEPTH;
          static jint NUM_BYTES_ARRAY_HEADER;
          static jint NUM_BYTES_OBJECT_ALIGNMENT;
          static jint NUM_BYTES_OBJECT_HEADER;
          static jint NUM_BYTES_OBJECT_REF;
          static jlong ONE_GB;
          static jlong ONE_KB;
          static jlong ONE_MB;
          static jint QUERY_DEFAULT_RAM_BYTES_USED;
          static jint UNKNOWN_DEFAULT_RAM_BYTES_USED;
          static ::java::util::Map *primitiveSizes;

          static jlong alignObjectSize(jlong);
          static ::java::lang::String humanReadableUnits(jlong);
          static ::java::lang::String humanReadableUnits(jlong, const ::java::text::DecimalFormat &);
          static jlong shallowSizeOf(const JArray< ::java::lang::Object > &);
          static jlong shallowSizeOf(const ::java::lang::Object &);
          static jlong shallowSizeOfInstance(const ::java::lang::Class &);
          static jlong sizeOf(const ::java::lang::Long &);
          static jlong sizeOf(const JArray< jbyte > &);
          static jlong sizeOf(const JArray< jchar > &);
          static jlong sizeOf(const JArray< jdouble > &);
          static jlong sizeOf(const JArray< jfloat > &);
          static jlong sizeOf(const JArray< jint > &);
          static jlong sizeOf(const JArray< jlong > &);
          static jlong sizeOf(const JArray< ::java::lang::String > &);
          static jlong sizeOf(const JArray< ::org::apache::lucene::util::Accountable > &);
          static jlong sizeOf(const JArray< jshort > &);
          static jlong sizeOf(const JArray< jboolean > &);
          static jlong sizeOf(const ::java::lang::String &);
          static jlong sizeOf(const ::org::apache::lucene::search::Query &);
          static jlong sizeOf(const ::org::apache::lucene::util::Accountable &);
          static jlong sizeOf(const ::org::apache::lucene::search::Query &, jlong);
          static jlong sizeOfCollection(const ::java::util::Collection &);
          static jlong sizeOfCollection(const ::java::util::Collection &, jlong);
          static jlong sizeOfMap(const ::java::util::Map &);
          static jlong sizeOfMap(const ::java::util::Map &, jlong);
          static jlong sizeOfObject(const ::java::lang::Object &);
          static jlong sizeOfObject(const ::java::lang::Object &, jlong);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(RamUsageEstimator);
        extern PyTypeObject *PY_TYPE(RamUsageEstimator);

        class t_RamUsageEstimator {
        public:
          PyObject_HEAD
          RamUsageEstimator object;
          static PyObject *wrap_Object(const RamUsageEstimator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
