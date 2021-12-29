#ifndef org_apache_lucene_index_FilterLeafReader$FilterTerms_H
#define org_apache_lucene_index_FilterLeafReader$FilterTerms_H

#include "org/apache/lucene/index/Terms.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FilterLeafReader$FilterTerms : public ::org::apache::lucene::index::Terms {
         public:
          enum {
            mid_init$_4b02001141791c28,
            mid_getDocCount_9972fcc56b44e79d,
            mid_getStats_d6bcd06f3102c4d9,
            mid_getSumDocFreq_2e5ae9edcb9b072f,
            mid_getSumTotalTermFreq_2e5ae9edcb9b072f,
            mid_hasFreqs_8454bd5aa23fd11e,
            mid_hasOffsets_8454bd5aa23fd11e,
            mid_hasPayloads_8454bd5aa23fd11e,
            mid_hasPositions_8454bd5aa23fd11e,
            mid_iterator_3f9a21827903a65f,
            mid_size_2e5ae9edcb9b072f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterLeafReader$FilterTerms(jobject obj) : ::org::apache::lucene::index::Terms(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterLeafReader$FilterTerms(const FilterLeafReader$FilterTerms& obj) : ::org::apache::lucene::index::Terms(obj) {}

          FilterLeafReader$FilterTerms(const ::org::apache::lucene::index::Terms &);

          jint getDocCount() const;
          ::java::lang::Object getStats() const;
          jlong getSumDocFreq() const;
          jlong getSumTotalTermFreq() const;
          jboolean hasFreqs() const;
          jboolean hasOffsets() const;
          jboolean hasPayloads() const;
          jboolean hasPositions() const;
          ::org::apache::lucene::index::TermsEnum iterator() const;
          jlong size() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterLeafReader$FilterTerms);
        extern PyTypeObject *PY_TYPE(FilterLeafReader$FilterTerms);

        class t_FilterLeafReader$FilterTerms {
        public:
          PyObject_HEAD
          FilterLeafReader$FilterTerms object;
          static PyObject *wrap_Object(const FilterLeafReader$FilterTerms&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
