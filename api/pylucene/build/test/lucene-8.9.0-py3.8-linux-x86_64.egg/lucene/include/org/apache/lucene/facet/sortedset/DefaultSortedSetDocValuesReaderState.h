#ifndef org_apache_lucene_facet_sortedset_DefaultSortedSetDocValuesReaderState_H
#define org_apache_lucene_facet_sortedset_DefaultSortedSetDocValuesReaderState_H

#include "org/apache/lucene/facet/sortedset/SortedSetDocValuesReaderState.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class SortedSetDocValues;
      }
      namespace util {
        class Accountable;
      }
      namespace facet {
        namespace sortedset {
          class SortedSetDocValuesReaderState$OrdRange;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class Map;
  }
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
      namespace facet {
        namespace sortedset {

          class DefaultSortedSetDocValuesReaderState : public ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState {
           public:
            enum {
              mid_init$_9c5103ca988341a1,
              mid_init$_456f925f19f7f45c,
              mid_getChildResources_d4dfbf7a26ff41df,
              mid_getDocValues_cc5882347cd85c5c,
              mid_getField_db9b55ba01e03e4b,
              mid_getOrdRange_c1709242723c0a04,
              mid_getPrefixToOrdRange_1c3426541413a55d,
              mid_getReader_3268165ce941bf52,
              mid_getSize_9972fcc56b44e79d,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_reader,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DefaultSortedSetDocValuesReaderState(jobject obj) : ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DefaultSortedSetDocValuesReaderState(const DefaultSortedSetDocValuesReaderState& obj) : ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState(obj) {}

            ::org::apache::lucene::index::IndexReader _get_reader() const;

            DefaultSortedSetDocValuesReaderState(const ::org::apache::lucene::index::IndexReader &);
            DefaultSortedSetDocValuesReaderState(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);

            ::java::util::Collection getChildResources() const;
            ::org::apache::lucene::index::SortedSetDocValues getDocValues() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$OrdRange getOrdRange(const ::java::lang::String &) const;
            ::java::util::Map getPrefixToOrdRange() const;
            ::org::apache::lucene::index::IndexReader getReader() const;
            jint getSize() const;
            jlong ramBytesUsed() const;
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
      namespace facet {
        namespace sortedset {
          extern PyType_Def PY_TYPE_DEF(DefaultSortedSetDocValuesReaderState);
          extern PyTypeObject *PY_TYPE(DefaultSortedSetDocValuesReaderState);

          class t_DefaultSortedSetDocValuesReaderState {
          public:
            PyObject_HEAD
            DefaultSortedSetDocValuesReaderState object;
            static PyObject *wrap_Object(const DefaultSortedSetDocValuesReaderState&);
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
