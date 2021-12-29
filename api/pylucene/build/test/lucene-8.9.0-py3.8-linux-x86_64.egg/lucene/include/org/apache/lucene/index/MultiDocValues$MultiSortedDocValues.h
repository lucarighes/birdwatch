#ifndef org_apache_lucene_index_MultiDocValues$MultiSortedDocValues_H
#define org_apache_lucene_index_MultiDocValues$MultiSortedDocValues_H

#include "org/apache/lucene/index/SortedDocValues.h"

namespace java {
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
      namespace util {
        class BytesRef;
      }
      namespace index {
        class OrdinalMap;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MultiDocValues$MultiSortedDocValues : public ::org::apache::lucene::index::SortedDocValues {
         public:
          enum {
            mid_init$_86e5e1b16854c7e1,
            mid_advance_1e143afe1894d213,
            mid_advanceExact_a1d30e1ee40c89a2,
            mid_cost_2e5ae9edcb9b072f,
            mid_docID_9972fcc56b44e79d,
            mid_getValueCount_9972fcc56b44e79d,
            mid_lookupOrd_83238e65a54c68bb,
            mid_nextDoc_9972fcc56b44e79d,
            mid_ordValue_9972fcc56b44e79d,
            max_mid
          };

          enum {
            fid_docStarts,
            fid_mapping,
            fid_values,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDocValues$MultiSortedDocValues(jobject obj) : ::org::apache::lucene::index::SortedDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiDocValues$MultiSortedDocValues(const MultiDocValues$MultiSortedDocValues& obj) : ::org::apache::lucene::index::SortedDocValues(obj) {}

          JArray< jint > _get_docStarts() const;
          ::org::apache::lucene::index::OrdinalMap _get_mapping() const;
          JArray< ::org::apache::lucene::index::SortedDocValues > _get_values() const;

          MultiDocValues$MultiSortedDocValues(const JArray< ::org::apache::lucene::index::SortedDocValues > &, const JArray< jint > &, const ::org::apache::lucene::index::OrdinalMap &, jlong);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          jlong cost() const;
          jint docID() const;
          jint getValueCount() const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jint) const;
          jint nextDoc() const;
          jint ordValue() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiDocValues$MultiSortedDocValues);
        extern PyTypeObject *PY_TYPE(MultiDocValues$MultiSortedDocValues);

        class t_MultiDocValues$MultiSortedDocValues {
        public:
          PyObject_HEAD
          MultiDocValues$MultiSortedDocValues object;
          static PyObject *wrap_Object(const MultiDocValues$MultiSortedDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
