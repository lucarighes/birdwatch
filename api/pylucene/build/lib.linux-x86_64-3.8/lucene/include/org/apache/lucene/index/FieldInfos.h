#ifndef org_apache_lucene_index_FieldInfos_H
#define org_apache_lucene_index_FieldInfos_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class FieldInfo;
        class FieldInfos;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class Iterator;
  }
  namespace lang {
    class Class;
    class Iterable;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FieldInfos : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d55560b6203b89e8,
            mid_fieldInfo_07fc3b437c3bb7b3,
            mid_fieldInfo_54a6d6c7e8df9911,
            mid_getIndexedFields_3cfed1bbee5d3707,
            mid_getMergedFieldInfos_6d9e8b338a3e87a2,
            mid_getSoftDeletesField_db9b55ba01e03e4b,
            mid_hasDocValues_8454bd5aa23fd11e,
            mid_hasFreq_8454bd5aa23fd11e,
            mid_hasNorms_8454bd5aa23fd11e,
            mid_hasOffsets_8454bd5aa23fd11e,
            mid_hasPayloads_8454bd5aa23fd11e,
            mid_hasPointValues_8454bd5aa23fd11e,
            mid_hasProx_8454bd5aa23fd11e,
            mid_hasVectors_8454bd5aa23fd11e,
            mid_iterator_233a192dadb0917d,
            mid_size_9972fcc56b44e79d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInfos(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldInfos(const FieldInfos& obj) : ::java::lang::Object(obj) {}

          static FieldInfos *EMPTY;

          FieldInfos(const JArray< ::org::apache::lucene::index::FieldInfo > &);

          ::org::apache::lucene::index::FieldInfo fieldInfo(const ::java::lang::String &) const;
          ::org::apache::lucene::index::FieldInfo fieldInfo(jint) const;
          static ::java::util::Collection getIndexedFields(const ::org::apache::lucene::index::IndexReader &);
          static FieldInfos getMergedFieldInfos(const ::org::apache::lucene::index::IndexReader &);
          ::java::lang::String getSoftDeletesField() const;
          jboolean hasDocValues() const;
          jboolean hasFreq() const;
          jboolean hasNorms() const;
          jboolean hasOffsets() const;
          jboolean hasPayloads() const;
          jboolean hasPointValues() const;
          jboolean hasProx() const;
          jboolean hasVectors() const;
          ::java::util::Iterator iterator() const;
          jint size() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldInfos);
        extern PyTypeObject *PY_TYPE(FieldInfos);

        class t_FieldInfos {
        public:
          PyObject_HEAD
          FieldInfos object;
          static PyObject *wrap_Object(const FieldInfos&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
