#ifndef org_apache_lucene_search_LongValuesSource_H
#define org_apache_lucene_search_LongValuesSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SegmentCacheable;
        class LongValuesSource;
        class SortField;
        class IndexSearcher;
        class DoubleValues;
        class DoubleValuesSource;
        class LongValues;
      }
      namespace index {
        class LeafReaderContext;
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
      namespace search {

        class LongValuesSource : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_constant_5d962b4a04f587bb,
            mid_equals_8b72f2dcdde6fd1d,
            mid_fromIntField_f99a170202280759,
            mid_fromLongField_f99a170202280759,
            mid_getSortField_8a713675264264ba,
            mid_getValues_7e294615cabb0892,
            mid_hashCode_9972fcc56b44e79d,
            mid_needsScores_8454bd5aa23fd11e,
            mid_rewrite_46c9173c5c89f0e5,
            mid_toDoubleValuesSource_ccca60747b1553ac,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongValuesSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongValuesSource(const LongValuesSource& obj) : ::java::lang::Object(obj) {}

          LongValuesSource();

          static LongValuesSource constant(jlong);
          jboolean equals(const ::java::lang::Object &) const;
          static LongValuesSource fromIntField(const ::java::lang::String &);
          static LongValuesSource fromLongField(const ::java::lang::String &);
          ::org::apache::lucene::search::SortField getSortField(jboolean) const;
          ::org::apache::lucene::search::LongValues getValues(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::search::DoubleValues &) const;
          jint hashCode() const;
          jboolean needsScores() const;
          LongValuesSource rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          ::org::apache::lucene::search::DoubleValuesSource toDoubleValuesSource() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(LongValuesSource);
        extern PyTypeObject *PY_TYPE(LongValuesSource);

        class t_LongValuesSource {
        public:
          PyObject_HEAD
          LongValuesSource object;
          static PyObject *wrap_Object(const LongValuesSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
