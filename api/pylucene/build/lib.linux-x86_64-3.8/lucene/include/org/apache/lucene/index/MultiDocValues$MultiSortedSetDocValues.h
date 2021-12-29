#ifndef org_apache_lucene_index_MultiDocValues$MultiSortedSetDocValues_H
#define org_apache_lucene_index_MultiDocValues$MultiSortedSetDocValues_H

#include "org/apache/lucene/index/SortedSetDocValues.h"

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

        class MultiDocValues$MultiSortedSetDocValues : public ::org::apache::lucene::index::SortedSetDocValues {
         public:
          enum {
            mid_init$_4ac188073451f44a,
            mid_advance_1e143afe1894d213,
            mid_advanceExact_a1d30e1ee40c89a2,
            mid_cost_2e5ae9edcb9b072f,
            mid_docID_9972fcc56b44e79d,
            mid_getValueCount_2e5ae9edcb9b072f,
            mid_lookupOrd_9a5ffc0686333682,
            mid_nextDoc_9972fcc56b44e79d,
            mid_nextOrd_2e5ae9edcb9b072f,
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

          explicit MultiDocValues$MultiSortedSetDocValues(jobject obj) : ::org::apache::lucene::index::SortedSetDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiDocValues$MultiSortedSetDocValues(const MultiDocValues$MultiSortedSetDocValues& obj) : ::org::apache::lucene::index::SortedSetDocValues(obj) {}

          JArray< jint > _get_docStarts() const;
          ::org::apache::lucene::index::OrdinalMap _get_mapping() const;
          JArray< ::org::apache::lucene::index::SortedSetDocValues > _get_values() const;

          MultiDocValues$MultiSortedSetDocValues(const JArray< ::org::apache::lucene::index::SortedSetDocValues > &, const JArray< jint > &, const ::org::apache::lucene::index::OrdinalMap &, jlong);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          jlong cost() const;
          jint docID() const;
          jlong getValueCount() const;
          ::org::apache::lucene::util::BytesRef lookupOrd(jlong) const;
          jint nextDoc() const;
          jlong nextOrd() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiDocValues$MultiSortedSetDocValues);
        extern PyTypeObject *PY_TYPE(MultiDocValues$MultiSortedSetDocValues);

        class t_MultiDocValues$MultiSortedSetDocValues {
        public:
          PyObject_HEAD
          MultiDocValues$MultiSortedSetDocValues object;
          static PyObject *wrap_Object(const MultiDocValues$MultiSortedSetDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
