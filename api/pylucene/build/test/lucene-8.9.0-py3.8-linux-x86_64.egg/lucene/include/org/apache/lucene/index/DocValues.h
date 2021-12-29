#ifndef org_apache_lucene_index_DocValues_H
#define org_apache_lucene_index_DocValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedNumericDocValues;
        class LeafReaderContext;
        class BinaryDocValues;
        class SortedSetDocValues;
        class LeafReader;
        class NumericDocValues;
        class SortedDocValues;
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
      namespace index {

        class DocValues : public ::java::lang::Object {
         public:
          enum {
            mid_emptyBinary_4d625ef45d023867,
            mid_emptyNumeric_7b642e3feba120e8,
            mid_emptySorted_b7615dcd2222f4c9,
            mid_emptySortedNumeric_dc390c4d68dba042,
            mid_emptySortedSet_cc5882347cd85c5c,
            mid_getBinary_fac51ed8f4aae005,
            mid_getNumeric_92126434173e7173,
            mid_getSorted_b9985cedc3e7c45b,
            mid_getSortedNumeric_e2457ebf1ffe7b4d,
            mid_getSortedSet_5860040e18aadaea,
            mid_isCacheable_38b06276cde489f7,
            mid_singleton_1d51ab65d5dc10d1,
            mid_singleton_17758b2013b63c29,
            mid_unwrapSingleton_efdfd39d2a7986a0,
            mid_unwrapSingleton_d3736f1e012a5b62,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValues(const DocValues& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::index::BinaryDocValues emptyBinary();
          static ::org::apache::lucene::index::NumericDocValues emptyNumeric();
          static ::org::apache::lucene::index::SortedDocValues emptySorted();
          static ::org::apache::lucene::index::SortedNumericDocValues emptySortedNumeric();
          static ::org::apache::lucene::index::SortedSetDocValues emptySortedSet();
          static ::org::apache::lucene::index::BinaryDocValues getBinary(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::NumericDocValues getNumeric(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedDocValues getSorted(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedNumericDocValues getSortedNumeric(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedSetDocValues getSortedSet(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &, const JArray< ::java::lang::String > &);
          static ::org::apache::lucene::index::SortedSetDocValues singleton(const ::org::apache::lucene::index::SortedDocValues &);
          static ::org::apache::lucene::index::SortedNumericDocValues singleton(const ::org::apache::lucene::index::NumericDocValues &);
          static ::org::apache::lucene::index::NumericDocValues unwrapSingleton(const ::org::apache::lucene::index::SortedNumericDocValues &);
          static ::org::apache::lucene::index::SortedDocValues unwrapSingleton(const ::org::apache::lucene::index::SortedSetDocValues &);
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
        extern PyType_Def PY_TYPE_DEF(DocValues);
        extern PyTypeObject *PY_TYPE(DocValues);

        class t_DocValues {
        public:
          PyObject_HEAD
          DocValues object;
          static PyObject *wrap_Object(const DocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
