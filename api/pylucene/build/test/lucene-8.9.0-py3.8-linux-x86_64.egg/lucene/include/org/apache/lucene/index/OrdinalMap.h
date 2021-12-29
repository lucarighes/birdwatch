#ifndef org_apache_lucene_index_OrdinalMap_H
#define org_apache_lucene_index_OrdinalMap_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class IndexReader$CacheKey;
        class SortedDocValues;
        class OrdinalMap;
        class TermsEnum;
      }
      namespace util {
        class Accountable;
        class LongValues;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class OrdinalMap : public ::java::lang::Object {
         public:
          enum {
            mid_build_70f32f87964660d2,
            mid_build_a6a15a723cb6799b,
            mid_build_930e5388970b68b9,
            mid_getChildResources_d4dfbf7a26ff41df,
            mid_getFirstSegmentNumber_694afffd0eb7dc3c,
            mid_getFirstSegmentOrd_d711eecdc469624a,
            mid_getGlobalOrds_2dc8412e7df95ece,
            mid_getValueCount_2e5ae9edcb9b072f,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            max_mid
          };

          enum {
            fid_owner,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OrdinalMap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OrdinalMap(const OrdinalMap& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::IndexReader$CacheKey _get_owner() const;

          static OrdinalMap build(const ::org::apache::lucene::index::IndexReader$CacheKey &, const JArray< ::org::apache::lucene::index::SortedDocValues > &, jfloat);
          static OrdinalMap build(const ::org::apache::lucene::index::IndexReader$CacheKey &, const JArray< ::org::apache::lucene::index::SortedSetDocValues > &, jfloat);
          static OrdinalMap build(const ::org::apache::lucene::index::IndexReader$CacheKey &, const JArray< ::org::apache::lucene::index::TermsEnum > &, const JArray< jlong > &, jfloat);
          ::java::util::Collection getChildResources() const;
          jint getFirstSegmentNumber(jlong) const;
          jlong getFirstSegmentOrd(jlong) const;
          ::org::apache::lucene::util::LongValues getGlobalOrds(jint) const;
          jlong getValueCount() const;
          jlong ramBytesUsed() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(OrdinalMap);
        extern PyTypeObject *PY_TYPE(OrdinalMap);

        class t_OrdinalMap {
        public:
          PyObject_HEAD
          OrdinalMap object;
          static PyObject *wrap_Object(const OrdinalMap&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
