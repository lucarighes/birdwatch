#ifndef org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState_H
#define org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState_H

#include "java/lang/Object.h"

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

          class SortedSetDocValuesReaderState : public ::java::lang::Object {
           public:
            enum {
              mid_getDocValues_cc5882347cd85c5c,
              mid_getField_db9b55ba01e03e4b,
              mid_getOrdRange_c1709242723c0a04,
              mid_getPrefixToOrdRange_1c3426541413a55d,
              mid_getReader_3268165ce941bf52,
              mid_getSize_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedSetDocValuesReaderState(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SortedSetDocValuesReaderState(const SortedSetDocValuesReaderState& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::index::SortedSetDocValues getDocValues() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$OrdRange getOrdRange(const ::java::lang::String &) const;
            ::java::util::Map getPrefixToOrdRange() const;
            ::org::apache::lucene::index::IndexReader getReader() const;
            jint getSize() const;
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
          extern PyType_Def PY_TYPE_DEF(SortedSetDocValuesReaderState);
          extern PyTypeObject *PY_TYPE(SortedSetDocValuesReaderState);

          class t_SortedSetDocValuesReaderState {
          public:
            PyObject_HEAD
            SortedSetDocValuesReaderState object;
            static PyObject *wrap_Object(const SortedSetDocValuesReaderState&);
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
